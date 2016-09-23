// 
// Copyright (c) 2006-2015, Benjamin Kaufmann
// 
// This file is part of Clasp. See http://www.cs.uni-potsdam.de/clasp/ 
// 
// Clasp is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// Clasp is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Clasp; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//
#ifndef CLASP_SOLVE_ALGORITHMS_H_INCLUDED
#define CLASP_SOLVE_ALGORITHMS_H_INCLUDED

#ifdef _MSC_VER
#pragma once
#endif

#include <clasp/solver_strategies.h>
/*!
 * \file 
 * \brief Defines top-level functions for solving problems.
 */
namespace Clasp {

///! \addtogroup enumerator
//@{

//! Type for holding global solve limits.
struct SolveLimits {
	explicit SolveLimits(uint64 conf = UINT64_MAX, uint64 r = UINT64_MAX) 
		: conflicts(conf)
		, restarts(r) {
	}
	bool   reached() const { return conflicts == 0 || restarts == 0; }
	bool   enabled() const { return conflicts != UINT64_MAX || restarts != UINT32_MAX; }
	uint64 conflicts; /*!< Number of conflicts. */
	uint64 restarts;  /*!< Number of restarts.  */
};

///////////////////////////////////////////////////////////////////////////////
// Basic solving
///////////////////////////////////////////////////////////////////////////////
//! Basic (sequential) solving using given solving options.
class BasicSolve {
public:
	//! Creates a new object for solving with the given solver using the given solving options.
	/*!
	 * If an optional solve limit is given, solving stops once this limit is reached.
	 * \pre s is attached to a problem (SharedContext).
	 */
	BasicSolve(Solver& s, const SolveParams& p, const SolveLimits& lim = SolveLimits());
	BasicSolve(Solver& s, const SolveLimits& lim = SolveLimits());
	~BasicSolve();

	bool     hasLimit() const { return limits_.enabled(); }
	
	//! Enables solving under the given assumptions.
	/*!
	 * The use of assumptions allows for incremental solving. Literals contained
   * in assumptions are assumed to be true during search but can be undone afterwards.
	 * 
	 * \param assumptions A list of unit assumptions to be assumed true.
	 * \return false if assumptions are conflicting.
	 */
	bool     assume(const LitVec& assumptions); 

	//! Solves the path stored in the given solver using the given solving options.
	/*!
	 * \return
	 *    - value_true  if search stopped on a model.
	 *    - value_false if the search-space was completely examined.
	 *    - value_free  if the given solve limit was hit.
	 *
	 * \note 
	 *   The function maintains the current solving state (number of restarts, learnt limits, ...)
	 *   between calls. 
	 */
	ValueRep solve();
	//! Returns whether the given problem is satisfiable under the given assumptions.
	/*!
	 * Calls assume(assumptions) followed by solve() but does not maintain any solving state.
	 * \param assumptions Possibly empty set of assumptions to apply before solving.
	 * \param init Call InitParams::randomize() before starting search?
	 */
	bool     satisfiable(const LitVec& assumptions, bool init);

	//! Resets the internal solving state while keeping the solver and the solving options.
	void     reset(bool reinit = false);
	//! Replaces *this with BasicSolve(s, p).
	void     reset(Solver& s, const SolveParams& p, const SolveLimits& lim = SolveLimits());
	Solver&  solver() { return *solver_; }
private:
	BasicSolve(const BasicSolve&);
	BasicSolve& operator=(const BasicSolve&);
	typedef const SolveParams Params;
	typedef SolveLimits       Limits;
	struct State;
	Solver* solver_; // active solver
	Params* params_; // active solving options
	Limits  limits_; // active solving limits
	State*  state_;  // internal solving state
};
//! Event type for reporting basic solve events like restarts or deletion.
struct BasicSolveEvent : SolveEvent<BasicSolveEvent> {
	//! Type of operation that emitted the event.
	enum EventOp { event_none = 0, event_deletion = 'D', event_exit = 'E', event_grow = 'G', event_restart = 'R' };
	BasicSolveEvent(const Solver& s, EventOp a_op, uint64 cLim, uint32 lLim) : SolveEvent<BasicSolveEvent>(s, verbosity_max), cLimit(cLim), lLimit(lLim) {
		op = a_op;
	}
	uint64 cLimit; //!< Next conflict limit
	uint32 lLimit; //!< Next learnt limit
};
///////////////////////////////////////////////////////////////////////////////
// General solve
///////////////////////////////////////////////////////////////////////////////
class Enumerator;
//! Interface for complex solve algorithms.
/*!
 * \ingroup enumerator
 * \relates Solver
 * SolveAlgorithms implement complex algorithms like enumeration or optimization.
 */
class SolveAlgorithm {
public:
	/*!
	 * \param limit An optional solve limit applied in solve().
	 */
	explicit SolveAlgorithm(const SolveLimits& limit = SolveLimits());
	virtual ~SolveAlgorithm();
	
	const Enumerator*   enumerator() const { return enum_.get(); }
	const SolveLimits&  limits()     const { return limits_; }
	virtual bool        interrupted()const = 0;
	const Model&        model()      const;

	void setEnumerator(Enumerator& e);
	void setEnumLimit(uint64 m)          { enumLimit_= m;  }
	void setLimits(const SolveLimits& x) { limits_   = x;  }

	//! Runs the solve algorithm.
	/*!
	 * \param ctx     A context object containing the problem.
	 * \param assume  A list of initial unit-assumptions.
	 * \param onModel Optional handler to be called on each model.
	 *
	 * \return
	 *  - true:  if the search stopped before the search-space was exceeded.
	 *  - false: if the search-space was completely examined.
	 *
	 * \note 
	 * The use of assumptions allows for incremental solving. Literals contained
	 * in assumptions are assumed to be true during search but are undone before solve returns.
	 *
	 * \note
	 * Conceptually, solve() behaves as follows:
	 * \code
	 * start(ctx, assume);
	 * while (next()) {
	 *   if (!report(model()) || enum_limit_reached()) { stop(); }
	 * }
	 * return more();
	 * \endcode
	 * where report() notifies all registered model handlers.
	 */
	bool solve(SharedContext& ctx, const LitVec& assume = LitVec(), ModelHandler* onModel = 0);

	//! Prepares the solve algorithm for enumerating models.
	/*!
	 * \pre The algorithm is not yet active.
	 */
	void start(SharedContext& ctx, const LitVec& assume = LitVec(), ModelHandler* onModel = 0);
	//! Searches for the next model and returns whether such a model was found.
	/*!
	 * \pre start() was called.
	 */
	bool next();
	//! Stops the algorithms.
	void stop();
	//! Returns whether the last search completely exhausted the search-space.
	bool more();
	
	//! Resets solving state and sticky messages like terminate.
	/*!
	 * \note The function must be called between successive calls to solve().
	 */
	virtual void resetSolve()        = 0;
	
	//! Prepares the algorithm for handling (asynchronous) calls to SolveAlgorithm::interrupt().
	virtual void enableInterrupts()  = 0;
	
	//! Tries to terminate the current solve process.
	/*!
	 * \note If enableInterrupts() was not called, SolveAlgorithm::interrupt() may return false
	 * to signal that (asynchronous) termination is not supported.
	 */
	bool         interrupt();
protected:
	SolveAlgorithm(const SolveAlgorithm&);
	SolveAlgorithm& operator=(const SolveAlgorithm&);
	//! The actual solve algorithm.
	virtual bool    doSolve(SharedContext& ctx, const LitVec& assume) = 0;
	//! Shall return true if termination is supported, otherwise false.
	virtual bool    doInterrupt()                                     = 0;

	virtual void    doStart(SharedContext& ctx, const LitVec& assume);
	virtual int     doNext(int last);
	virtual void    doStop();

	bool            reportModel(Solver& s) const;
	bool            reportUnsat(Solver& s) const;
	Enumerator&     enumerator()       { return *enum_;  }
	SharedContext&  ctx()        const { return *ctx_; }
	const LitVec&   path()       const { return *path_; }
	uint64          maxModels() const  { return enumLimit_; }
	bool            moreModels(const Solver& s) const;
private:
	typedef SingleOwnerPtr<Enumerator>   EnumPtr;
	typedef SingleOwnerPtr<const LitVec> PathPtr;
	bool attach(SharedContext& ctx, ModelHandler* onModel);
	void detach();
	SolveLimits    limits_;
	SharedContext* ctx_;
	EnumPtr        enum_;
	ModelHandler*  onModel_;
	PathPtr        path_;
	uint64         enumLimit_;
	double         time_;
	int            last_;
};
//! A class that implements clasp's sequential solving algorithm.
class SequentialSolve : public SolveAlgorithm {
public:
	explicit SequentialSolve(const SolveLimits& limit = SolveLimits());
	virtual bool interrupted() const;
	virtual void resetSolve();
	virtual void enableInterrupts();
protected:
	virtual bool doSolve(SharedContext& ctx, const LitVec& assume);
	virtual bool doInterrupt();
	virtual void doStart(SharedContext& ctx, const LitVec& assume);
	virtual int  doNext(int last);
	virtual void doStop();
private:
	typedef SingleOwnerPtr<BasicSolve> SolvePtr;
	SolvePtr     solve_;
	volatile int term_;
};

//! Options for controlling solving.
struct BasicSolveOptions {
	SolveLimits     limit;  //!< Solve limit (disabled by default).
	SolveAlgorithm* createSolveObject() const { return new SequentialSolve(limit); }
	static uint32   supportedSolvers()        { return 1; }
	static uint32   recommendedSolvers()      { return 1; }
	uint32          numSolver() const         { return 1; }
	void            setSolvers(uint32)        {}
	bool            defaultPortfolio() const  { return false; }
};
//@}

}
#endif
