// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Take the name prefix into account.
#define yylex   GringoNonGroundGrammar_lex

// First part of user declarations.
#line 58 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:404


#include "gringo/input/nongroundparser.hh"
#include "gringo/input/programbuilder.hh"
#include <climits> 

#define BUILDER (lexer->builder())
#define LOGGER (lexer->logger())
#define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do {                                                               \
        if (N) {                                                       \
            (Current).beginFilename = YYRHSLOC (Rhs, 1).beginFilename; \
            (Current).beginLine     = YYRHSLOC (Rhs, 1).beginLine;     \
            (Current).beginColumn   = YYRHSLOC (Rhs, 1).beginColumn;   \
            (Current).endFilename   = YYRHSLOC (Rhs, N).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, N).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, N).endColumn;     \
        }                                                              \
        else {                                                         \
            (Current).beginFilename = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).beginLine     = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).beginColumn   = YYRHSLOC (Rhs, 0).endColumn;     \
            (Current).endFilename   = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, 0).endColumn;     \
        }                                                              \
    }                                                                  \
    while (false)

using namespace Gringo;
using namespace Gringo::Input;

int GringoNonGroundGrammar_lex(void *value, Gringo::Location* loc, NonGroundParser *lexer) {
    return lexer->lex(value, *loc);
}


#line 76 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "grammar.hh"

// User implementation prologue.

#line 90 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 96 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:413


void NonGroundGrammar::parser::error(DefaultLocation const &l, std::string const &msg) {
    lexer->parseError(l, msg);
}


#line 100 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 28 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:479
namespace Gringo { namespace Input { namespace NonGroundGrammar {
#line 186 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser (Gringo::Input::NonGroundParser *lexer_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      lexer (lexer_yyarg)
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  parser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, lexer));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 7:
#line 353 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->parseError(yylhs.location, "syntax error, unexpected ."); }
#line 666 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 10:
#line 359 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 672 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 11:
#line 360 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 678 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 12:
#line 361 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 684 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 13:
#line 368 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::XOR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 690 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 14:
#line 369 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::OR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 696 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 15:
#line 370 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::AND, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 702 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 16:
#line 371 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::ADD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 708 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 17:
#line 372 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::SUB, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 714 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 18:
#line 373 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MUL, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 720 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 19:
#line 374 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::DIV, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 726 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 20:
#line 375 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MOD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 732 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 21:
#line 376 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::POW, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 738 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 22:
#line 377 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NEG, (yystack_[0].value.term)); }
#line 744 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 23:
#line 378 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NOT, (yystack_[0].value.term)); }
#line 750 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 24:
#line 379 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), false); }
#line 756 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 25:
#line 380 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), true); }
#line 762 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 26:
#line 381 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[1].value.termvec), false); }
#line 768 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 27:
#line 382 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[2].value.termvec), true); }
#line 774 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 28:
#line 383 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 780 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 29:
#line 384 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), true); }
#line 786 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 30:
#line 385 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::ABS, (yystack_[1].value.term)); }
#line 792 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 31:
#line 386 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 798 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 32:
#line 387 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), true); }
#line 804 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 33:
#line 388 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 810 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 34:
#line 389 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 816 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 35:
#line 390 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createInf()); }
#line 822 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 36:
#line 391 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createSup()); }
#line 828 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 37:
#line 397 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term));  }
#line 834 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 38:
#line 398 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term));  }
#line 840 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 39:
#line 402 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), (yystack_[0].value.termvec));  }
#line 846 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 40:
#line 403 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec());  }
#line 852 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 41:
#line 409 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 858 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 42:
#line 410 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::XOR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 864 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 43:
#line 411 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::OR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 870 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 44:
#line 412 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::AND, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 876 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 45:
#line 413 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::ADD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 882 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 46:
#line 414 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::SUB, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 888 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 47:
#line 415 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MUL, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 894 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 48:
#line 416 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::DIV, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 900 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 49:
#line 417 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MOD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 906 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 50:
#line 418 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::POW, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 912 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 51:
#line 419 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NEG, (yystack_[0].value.term)); }
#line 918 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 52:
#line 420 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NOT, (yystack_[0].value.term)); }
#line 924 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 53:
#line 421 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.pool(yylhs.location, (yystack_[1].value.termvec)); }
#line 930 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 54:
#line 422 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 936 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 55:
#line 423 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), true); }
#line 942 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 56:
#line 424 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::ABS, (yystack_[1].value.termvec)); }
#line 948 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 57:
#line 425 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 954 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 58:
#line 426 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), true); }
#line 960 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 59:
#line 427 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 966 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 60:
#line 428 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 972 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 61:
#line 429 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createInf()); }
#line 978 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 62:
#line 430 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createSup()); }
#line 984 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 63:
#line 431 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str))); }
#line 990 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 64:
#line 432 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String("_")); }
#line 996 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 65:
#line 438 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1002 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 66:
#line 439 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term)); }
#line 1008 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 67:
#line 445 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1014 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 68:
#line 446 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term)); }
#line 1020 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 69:
#line 450 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = (yystack_[0].value.termvec); }
#line 1026 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 70:
#line 451 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(); }
#line 1032 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 71:
#line 455 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[1].value.termvec), true); }
#line 1038 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 72:
#line 456 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[0].value.termvec), false); }
#line 1044 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 73:
#line 457 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), true); }
#line 1050 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 74:
#line 458 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), false); }
#line 1056 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 75:
#line 461 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[1].value.term)); }
#line 1062 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 76:
#line 462 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[1].value.term)); }
#line 1068 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 77:
#line 465 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1074 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 78:
#line 466 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[1].value.termvec), (yystack_[0].value.term)); }
#line 1080 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 79:
#line 469 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), (yystack_[0].value.termvec)); }
#line 1086 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 80:
#line 470 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec((yystack_[2].value.termvecvec), (yystack_[0].value.termvec)); }
#line 1092 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 81:
#line 474 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec(BUILDER.termvec(BUILDER.termvec(), (yystack_[2].value.term)), (yystack_[0].value.term))); }
#line 1098 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 82:
#line 475 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec((yystack_[4].value.termvecvec), BUILDER.termvec(BUILDER.termvec(BUILDER.termvec(), (yystack_[2].value.term)), (yystack_[0].value.term))); }
#line 1104 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 83:
#line 485 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GT; }
#line 1110 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 84:
#line 486 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LT; }
#line 1116 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 85:
#line 487 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GEQ; }
#line 1122 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 86:
#line 488 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LEQ; }
#line 1128 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 87:
#line 489 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::EQ; }
#line 1134 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 88:
#line 490 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::NEQ; }
#line 1140 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 89:
#line 494 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.predRep(yylhs.location, false, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec())); }
#line 1146 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 90:
#line 495 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.predRep(yylhs.location, false, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec)); }
#line 1152 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 91:
#line 496 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.predRep(yylhs.location, true, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec())); }
#line 1158 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 92:
#line 497 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.predRep(yylhs.location, true, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec)); }
#line 1164 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 93:
#line 501 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1170 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 94:
#line 502 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1176 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 95:
#line 503 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1182 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 96:
#line 504 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1188 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 97:
#line 505 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1194 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 98:
#line 506 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1200 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 99:
#line 507 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::POS, (yystack_[0].value.term)); }
#line 1206 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 100:
#line 508 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::NOT, (yystack_[0].value.term)); }
#line 1212 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 101:
#line 509 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::NOTNOT, (yystack_[0].value.term)); }
#line 1218 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 102:
#line 510 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, (yystack_[1].value.rel), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1224 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 103:
#line 511 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, neg((yystack_[1].value.rel)), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1230 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 104:
#line 512 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, (yystack_[1].value.rel), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1236 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 105:
#line 513 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.csplit((yystack_[0].value.csplit)); }
#line 1242 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 106:
#line 517 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[0].value.term),                     (yystack_[2].value.term)); }
#line 1248 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 107:
#line 518 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[3].value.term),                     (yystack_[0].value.term)); }
#line 1254 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 108:
#line 519 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, BUILDER.term(yylhs.location, Symbol::createNum(1)), (yystack_[0].value.term)); }
#line 1260 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 109:
#line 520 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[0].value.term)); }
#line 1266 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 110:
#line 524 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[2].value.cspaddterm), (yystack_[0].value.cspmulterm), true); }
#line 1272 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 111:
#line 525 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[2].value.cspaddterm), (yystack_[0].value.cspmulterm), false); }
#line 1278 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 112:
#line 526 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[0].value.cspmulterm)); }
#line 1284 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 113:
#line 530 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GT; }
#line 1290 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 114:
#line 531 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LT; }
#line 1296 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 115:
#line 532 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GEQ; }
#line 1302 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 116:
#line 533 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LEQ; }
#line 1308 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 117:
#line 534 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::EQ; }
#line 1314 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 118:
#line 535 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::NEQ; }
#line 1320 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 119:
#line 539 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.csplit) = BUILDER.csplit(yylhs.location, (yystack_[2].value.csplit), (yystack_[1].value.rel), (yystack_[0].value.cspaddterm)); }
#line 1326 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 120:
#line 540 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.csplit) = BUILDER.csplit(yylhs.location, (yystack_[2].value.cspaddterm),   (yystack_[1].value.rel), (yystack_[0].value.cspaddterm)); }
#line 1332 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 121:
#line 548 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(BUILDER.litvec(), (yystack_[0].value.lit)); }
#line 1338 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 122:
#line 549 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec((yystack_[2].value.litvec), (yystack_[0].value.lit)); }
#line 1344 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 123:
#line 553 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1350 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 124:
#line 554 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1356 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 125:
#line 558 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1362 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 126:
#line 559 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1368 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 127:
#line 568 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::SUM; }
#line 1374 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 128:
#line 569 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::SUMP; }
#line 1380 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 129:
#line 570 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::MIN; }
#line 1386 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 130:
#line 571 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::MAX; }
#line 1392 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 131:
#line 572 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::COUNT; }
#line 1398 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 132:
#line 578 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelem) = { BUILDER.termvec(), (yystack_[0].value.litvec) }; }
#line 1404 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 133:
#line 579 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelem) = { (yystack_[1].value.termvec), (yystack_[0].value.litvec) }; }
#line 1410 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 134:
#line 583 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelemvec) = BUILDER.bodyaggrelemvec(BUILDER.bodyaggrelemvec(), (yystack_[0].value.bodyaggrelem).first, (yystack_[0].value.bodyaggrelem).second); }
#line 1416 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 135:
#line 584 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelemvec) = BUILDER.bodyaggrelemvec((yystack_[2].value.bodyaggrelemvec), (yystack_[0].value.bodyaggrelem).first, (yystack_[0].value.bodyaggrelem).second); }
#line 1422 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 136:
#line 590 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lbodyaggrelem) = { (yystack_[1].value.lit), (yystack_[0].value.litvec) }; }
#line 1428 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 137:
#line 594 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[0].value.lbodyaggrelem).first, (yystack_[0].value.lbodyaggrelem).second); }
#line 1434 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 138:
#line 595 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[0].value.lbodyaggrelem).first, (yystack_[0].value.lbodyaggrelem).second); }
#line 1440 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 139:
#line 601 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, BUILDER.condlitvec() }; }
#line 1446 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 140:
#line 602 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, (yystack_[1].value.condlitlist) }; }
#line 1452 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 141:
#line 603 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[2].value.fun), false, BUILDER.bodyaggrelemvec() }; }
#line 1458 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 142:
#line 604 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[3].value.fun), false, (yystack_[1].value.bodyaggrelemvec) }; }
#line 1464 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 143:
#line 608 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { Relation::LEQ, (yystack_[0].value.term) }; }
#line 1470 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 144:
#line 609 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { (yystack_[1].value.rel), (yystack_[0].value.term) }; }
#line 1476 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 145:
#line 610 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { Relation::LEQ, TermUid(-1) }; }
#line 1482 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 146:
#line 614 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, (yystack_[2].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1488 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 147:
#line 615 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec((yystack_[2].value.rel), (yystack_[3].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1494 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 148:
#line 616 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, TermUid(-1), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1500 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 149:
#line 617 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[0].value.theoryAtom)); }
#line 1506 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 150:
#line 623 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.headaggrelemvec) = BUILDER.headaggrelemvec((yystack_[5].value.headaggrelemvec), (yystack_[3].value.termvec), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1512 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 151:
#line 624 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.headaggrelemvec) = BUILDER.headaggrelemvec(BUILDER.headaggrelemvec(), (yystack_[3].value.termvec), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1518 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 152:
#line 628 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1524 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 153:
#line 629 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[3].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1530 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 154:
#line 635 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[2].value.fun), false, BUILDER.headaggrelemvec() }; }
#line 1536 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 155:
#line 636 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[3].value.fun), false, (yystack_[1].value.headaggrelemvec) }; }
#line 1542 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 156:
#line 637 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, BUILDER.condlitvec()}; }
#line 1548 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 157:
#line 638 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, (yystack_[1].value.condlitlist)}; }
#line 1554 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 158:
#line 642 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, (yystack_[2].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1560 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 159:
#line 643 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec((yystack_[2].value.rel), (yystack_[3].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1566 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 160:
#line 644 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, TermUid(-1), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1572 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 161:
#line 645 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[0].value.theoryAtom)); }
#line 1578 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 162:
#line 651 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec(BUILDER.cspelemvec(), yylhs.location, (yystack_[3].value.termvec), (yystack_[1].value.cspaddterm), (yystack_[0].value.litvec)); }
#line 1584 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 163:
#line 652 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec((yystack_[5].value.cspelemvec), yylhs.location, (yystack_[3].value.termvec), (yystack_[1].value.cspaddterm), (yystack_[0].value.litvec)); }
#line 1590 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 164:
#line 656 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = (yystack_[0].value.cspelemvec); }
#line 1596 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 165:
#line 657 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec(); }
#line 1602 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 166:
#line 661 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::POS, (yystack_[1].value.cspelemvec) }; }
#line 1608 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 167:
#line 662 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::NOT, (yystack_[1].value.cspelemvec) }; }
#line 1614 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 168:
#line 663 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::NOTNOT, (yystack_[1].value.cspelemvec) }; }
#line 1620 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 169:
#line 670 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lbodyaggrelem) = { (yystack_[2].value.lit), (yystack_[0].value.litvec) }; }
#line 1626 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 172:
#line 684 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1632 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 173:
#line 685 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1638 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 174:
#line 686 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[3].value.condlitlist), (yystack_[2].value.lit), BUILDER.litvec()); }
#line 1644 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 175:
#line 687 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[4].value.condlitlist), (yystack_[3].value.lit), (yystack_[1].value.litvec)); }
#line 1650 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 176:
#line 688 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1656 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 177:
#line 689 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1662 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 178:
#line 690 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[3].value.lit), (yystack_[1].value.litvec)); }
#line 1668 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 179:
#line 691 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[2].value.lit), BUILDER.litvec()); }
#line 1674 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 180:
#line 695 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1680 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 181:
#line 696 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[2].value.lit), (yystack_[0].value.litvec)); }
#line 1686 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 182:
#line 703 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1692 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 183:
#line 704 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1698 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 184:
#line 705 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1704 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 185:
#line 706 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1710 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 186:
#line 707 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1716 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 187:
#line 708 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1722 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 188:
#line 709 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1728 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 189:
#line 710 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1734 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 190:
#line 711 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.conjunction((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.lbodyaggrelem).first, (yystack_[1].value.lbodyaggrelem).second); }
#line 1740 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 191:
#line 712 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.disjoint((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.disjoint).first, (yystack_[1].value.disjoint).second); }
#line 1746 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 192:
#line 713 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1752 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 193:
#line 717 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1758 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 194:
#line 718 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1764 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 195:
#line 719 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1770 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 196:
#line 720 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1776 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 197:
#line 721 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.conjunction((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.lbodyaggrelem).first, (yystack_[1].value.lbodyaggrelem).second); }
#line 1782 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 198:
#line 722 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.disjoint((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.disjoint).first, (yystack_[1].value.disjoint).second); }
#line 1788 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 199:
#line 726 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1794 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 200:
#line 727 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1800 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 201:
#line 728 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = (yystack_[0].value.body); }
#line 1806 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 202:
#line 731 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = BUILDER.headlit((yystack_[0].value.lit)); }
#line 1812 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 203:
#line 732 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = BUILDER.disjunction(yylhs.location, (yystack_[0].value.condlitlist)); }
#line 1818 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 204:
#line 733 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = lexer->headaggregate(yylhs.location, (yystack_[0].value.uid)); }
#line 1824 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 205:
#line 737 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, (yystack_[1].value.head)); }
#line 1830 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 206:
#line 738 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, (yystack_[2].value.head)); }
#line 1836 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 207:
#line 739 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, (yystack_[2].value.head), (yystack_[0].value.body)); }
#line 1842 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 208:
#line 740 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yylhs.location, false)), (yystack_[0].value.body)); }
#line 1848 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 209:
#line 741 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yylhs.location, false)), BUILDER.body()); }
#line 1854 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 210:
#line 747 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[2].location, false)), BUILDER.disjoint((yystack_[0].value.body), yystack_[2].location, inv((yystack_[2].value.disjoint).first), (yystack_[2].value.disjoint).second)); }
#line 1860 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 211:
#line 748 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[2].location, false)), BUILDER.disjoint(BUILDER.body(), yystack_[2].location, inv((yystack_[2].value.disjoint).first), (yystack_[2].value.disjoint).second)); }
#line 1866 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 212:
#line 749 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[1].location, false)), BUILDER.disjoint(BUILDER.body(), yystack_[1].location, inv((yystack_[1].value.disjoint).first), (yystack_[1].value.disjoint).second)); }
#line 1872 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 213:
#line 755 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = (yystack_[0].value.termvec); }
#line 1878 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 214:
#line 756 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(); }
#line 1884 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 215:
#line 760 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termpair) = {(yystack_[2].value.term), (yystack_[0].value.term)}; }
#line 1890 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 216:
#line 761 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termpair) = {(yystack_[0].value.term), BUILDER.term(yylhs.location, Symbol::createNum(0))}; }
#line 1896 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 217:
#line 765 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit(BUILDER.body(), (yystack_[0].value.lit)); }
#line 1902 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 218:
#line 766 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[0].value.lit)); }
#line 1908 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 219:
#line 770 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = (yystack_[0].value.body); }
#line 1914 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 220:
#line 771 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1920 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 221:
#line 772 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1926 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 222:
#line 776 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[4].value.body)); }
#line 1932 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 223:
#line 777 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), BUILDER.body()); }
#line 1938 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 224:
#line 781 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, BUILDER.term(yystack_[2].location, UnOp::NEG, (yystack_[2].value.termpair).first), (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1944 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 225:
#line 782 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, BUILDER.term(yystack_[2].location, UnOp::NEG, (yystack_[2].value.termpair).first), (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1950 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 226:
#line 786 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1956 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 227:
#line 787 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1962 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 232:
#line 800 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false), false); }
#line 1968 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 233:
#line 801 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true), false); }
#line 1974 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 234:
#line 802 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, Sig("", 0, false), false); }
#line 1980 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 235:
#line 803 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), false); }
#line 1986 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 236:
#line 804 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[1].value.term), BUILDER.body(), false); }
#line 1992 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 237:
#line 805 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false), true); }
#line 1998 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 238:
#line 806 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), true); }
#line 2004 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 239:
#line 807 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[1].value.term), BUILDER.body(), true); }
#line 2010 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 240:
#line 813 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.defined(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false)); }
#line 2016 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 241:
#line 814 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.defined(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true)); }
#line 2022 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 242:
#line 819 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.edge(yylhs.location, (yystack_[2].value.termvecvec), (yystack_[0].value.body)); }
#line 2028 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 243:
#line 825 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.heuristic(yylhs.location, (yystack_[8].value.term), (yystack_[7].value.body), (yystack_[5].value.term), (yystack_[3].value.term), (yystack_[1].value.term)); }
#line 2034 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 244:
#line 826 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.heuristic(yylhs.location, (yystack_[6].value.term), (yystack_[5].value.body), (yystack_[3].value.term), BUILDER.term(yylhs.location, Symbol::createNum(0)), (yystack_[1].value.term)); }
#line 2040 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 245:
#line 832 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.project(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false)); }
#line 2046 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 246:
#line 833 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.project(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true)); }
#line 2052 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 247:
#line 834 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.project(yylhs.location, (yystack_[1].value.term), (yystack_[0].value.body)); }
#line 2058 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 248:
#line 840 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    {  BUILDER.define(yylhs.location, String::fromRep((yystack_[2].value.str)), (yystack_[0].value.term), false, LOGGER); }
#line 2064 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 249:
#line 844 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.define(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.term), true, LOGGER); }
#line 2070 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 250:
#line 845 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.define(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.term), true, LOGGER); }
#line 2076 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 251:
#line 846 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.define(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.term), false, LOGGER); }
#line 2082 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 252:
#line 852 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.python(yylhs.location, String::fromRep((yystack_[1].value.str))); }
#line 2088 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 253:
#line 853 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.lua(yylhs.location, String::fromRep((yystack_[1].value.str))); }
#line 2094 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 254:
#line 859 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->include(String::fromRep((yystack_[1].value.str)), yylhs.location, false, LOGGER); }
#line 2100 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 255:
#line 860 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->include(String::fromRep((yystack_[2].value.str)), yylhs.location, true, LOGGER); }
#line 2106 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 256:
#line 866 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec((yystack_[2].value.idlist), yystack_[0].location, String::fromRep((yystack_[0].value.str))); }
#line 2112 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 257:
#line 867 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec(BUILDER.idvec(), yystack_[0].location, String::fromRep((yystack_[0].value.str))); }
#line 2118 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 258:
#line 871 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec(); }
#line 2124 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 259:
#line 872 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = (yystack_[0].value.idlist); }
#line 2130 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 260:
#line 876 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.block(yylhs.location, String::fromRep((yystack_[4].value.str)), (yystack_[2].value.idlist)); }
#line 2136 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 261:
#line 877 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.block(yylhs.location, String::fromRep((yystack_[1].value.str)), BUILDER.idvec()); }
#line 2142 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 262:
#line 883 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), BUILDER.term(yylhs.location, Symbol::createId("false"))); }
#line 2148 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 263:
#line 884 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[2].value.term), BUILDER.body(), BUILDER.term(yylhs.location, Symbol::createId("false"))); }
#line 2154 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 264:
#line 885 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[1].value.term), BUILDER.body(), BUILDER.term(yylhs.location, Symbol::createId("false"))); }
#line 2160 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 265:
#line 886 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[5].value.term), (yystack_[3].value.body), (yystack_[1].value.term)); }
#line 2166 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 266:
#line 887 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[5].value.term), BUILDER.body(), (yystack_[1].value.term)); }
#line 2172 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 267:
#line 888 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[4].value.term), BUILDER.body(), (yystack_[1].value.term)); }
#line 2178 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 268:
#line 896 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops((yystack_[1].value.theoryOps), String::fromRep((yystack_[0].value.str))); }
#line 2184 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 269:
#line 897 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops(BUILDER.theoryops(), String::fromRep((yystack_[0].value.str))); }
#line 2190 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 270:
#line 901 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermset(yylhs.location, (yystack_[1].value.theoryOpterms)); }
#line 2196 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 271:
#line 902 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theoryoptermlist(yylhs.location, (yystack_[1].value.theoryOpterms)); }
#line 2202 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 272:
#line 903 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms()); }
#line 2208 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 273:
#line 904 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermopterm(yylhs.location, (yystack_[1].value.theoryOpterm)); }
#line 2214 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 274:
#line 905 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms(BUILDER.theoryopterms(), yystack_[2].location, (yystack_[2].value.theoryOpterm))); }
#line 2220 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 275:
#line 906 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms(yystack_[3].location, (yystack_[3].value.theoryOpterm), (yystack_[1].value.theoryOpterms))); }
#line 2226 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 276:
#line 907 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermfun(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.theoryOpterms)); }
#line 2232 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 277:
#line 908 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 2238 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 278:
#line 909 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 2244 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 279:
#line 910 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 2250 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 280:
#line 911 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createInf()); }
#line 2256 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 281:
#line 912 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createSup()); }
#line 2262 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 282:
#line 913 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvar(yylhs.location, String::fromRep((yystack_[0].value.str))); }
#line 2268 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 283:
#line 917 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm((yystack_[2].value.theoryOpterm), (yystack_[1].value.theoryOps), (yystack_[0].value.theoryTerm)); }
#line 2274 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 284:
#line 918 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm((yystack_[1].value.theoryOps), (yystack_[0].value.theoryTerm)); }
#line 2280 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 285:
#line 919 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm(BUILDER.theoryops(), (yystack_[0].value.theoryTerm)); }
#line 2286 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 286:
#line 923 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms((yystack_[2].value.theoryOpterms), yystack_[0].location, (yystack_[0].value.theoryOpterm)); }
#line 2292 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 287:
#line 924 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms(BUILDER.theoryopterms(), yystack_[0].location, (yystack_[0].value.theoryOpterm)); }
#line 2298 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 288:
#line 928 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterms) = (yystack_[0].value.theoryOpterms); }
#line 2304 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 289:
#line 929 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms(); }
#line 2310 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 290:
#line 933 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElem) = { (yystack_[2].value.theoryOpterms), (yystack_[0].value.litvec) }; }
#line 2316 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 291:
#line 934 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElem) = { BUILDER.theoryopterms(), (yystack_[0].value.litvec) }; }
#line 2322 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 292:
#line 938 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElems) = BUILDER.theoryelems((yystack_[3].value.theoryElems), (yystack_[0].value.theoryElem).first, (yystack_[0].value.theoryElem).second); }
#line 2328 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 293:
#line 939 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElems) = BUILDER.theoryelems(BUILDER.theoryelems(), (yystack_[0].value.theoryElem).first, (yystack_[0].value.theoryElem).second); }
#line 2334 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 294:
#line 943 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElems) = (yystack_[0].value.theoryElems); }
#line 2340 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 295:
#line 944 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElems) = BUILDER.theoryelems(); }
#line 2346 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 296:
#line 948 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), false); }
#line 2352 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 297:
#line 949 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 2358 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 298:
#line 952 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[0].value.term), BUILDER.theoryelems()); }
#line 2364 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 299:
#line 953 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[6].value.term), (yystack_[3].value.theoryElems)); }
#line 2370 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 300:
#line 954 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[8].value.term), (yystack_[5].value.theoryElems), String::fromRep((yystack_[2].value.str)), yystack_[1].location, (yystack_[1].value.theoryOpterm)); }
#line 2376 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 301:
#line 960 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops(BUILDER.theoryops(), String::fromRep((yystack_[0].value.str))); }
#line 2382 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 302:
#line 961 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops((yystack_[2].value.theoryOps), String::fromRep((yystack_[0].value.str))); }
#line 2388 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 303:
#line 965 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = (yystack_[0].value.theoryOps); }
#line 2394 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 304:
#line 966 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops(); }
#line 2400 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 305:
#line 970 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[5].value.str)), (yystack_[2].value.num), TheoryOperatorType::Unary); }
#line 2406 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 306:
#line 971 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[7].value.str)), (yystack_[4].value.num), TheoryOperatorType::BinaryLeft); }
#line 2412 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 307:
#line 972 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[7].value.str)), (yystack_[4].value.num), TheoryOperatorType::BinaryRight); }
#line 2418 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 308:
#line 976 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs(BUILDER.theoryopdefs(), (yystack_[0].value.theoryOpDef)); }
#line 2424 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 309:
#line 977 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs((yystack_[3].value.theoryOpDefs), (yystack_[0].value.theoryOpDef)); }
#line 2430 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 310:
#line 981 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDefs) = (yystack_[0].value.theoryOpDefs); }
#line 2436 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 311:
#line 982 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs(); }
#line 2442 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 312:
#line 986 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2448 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 313:
#line 987 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("left"); }
#line 2454 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 314:
#line 988 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("right"); }
#line 2460 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 315:
#line 989 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("unary"); }
#line 2466 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 316:
#line 990 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("binary"); }
#line 2472 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 317:
#line 991 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("head"); }
#line 2478 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 318:
#line 992 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("body"); }
#line 2484 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 319:
#line 993 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("any"); }
#line 2490 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 320:
#line 994 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("directive"); }
#line 2496 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 321:
#line 998 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTermDef) = BUILDER.theorytermdef(yylhs.location, String::fromRep((yystack_[5].value.str)), (yystack_[2].value.theoryOpDefs), LOGGER); }
#line 2502 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 322:
#line 1002 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomType) = TheoryAtomType::Head; }
#line 2508 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 323:
#line 1003 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomType) = TheoryAtomType::Body; }
#line 2514 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 324:
#line 1004 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomType) = TheoryAtomType::Any; }
#line 2520 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 325:
#line 1005 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomType) = TheoryAtomType::Directive; }
#line 2526 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 326:
#line 1010 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomDef) = BUILDER.theoryatomdef(yylhs.location, String::fromRep((yystack_[14].value.str)), (yystack_[12].value.num), String::fromRep((yystack_[10].value.str)), (yystack_[0].value.theoryAtomType), (yystack_[6].value.theoryOps), String::fromRep((yystack_[2].value.str))); }
#line 2532 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 327:
#line 1011 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomDef) = BUILDER.theoryatomdef(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.num), String::fromRep((yystack_[2].value.str)), (yystack_[0].value.theoryAtomType)); }
#line 2538 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 328:
#line 1015 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs((yystack_[2].value.theoryDefs), (yystack_[0].value.theoryAtomDef)); }
#line 2544 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 329:
#line 1016 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs((yystack_[2].value.theoryDefs), (yystack_[0].value.theoryTermDef)); }
#line 2550 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 330:
#line 1017 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs(BUILDER.theorydefs(), (yystack_[0].value.theoryAtomDef)); }
#line 2556 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 331:
#line 1018 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs(BUILDER.theorydefs(), (yystack_[0].value.theoryTermDef)); }
#line 2562 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 332:
#line 1022 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = (yystack_[0].value.theoryDefs); }
#line 2568 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 333:
#line 1023 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs(); }
#line 2574 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 334:
#line 1027 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.theorydef(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[3].value.theoryDefs), LOGGER); }
#line 2580 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 335:
#line 1033 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->theoryLexing(TheoryLexing::Theory); }
#line 2586 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 336:
#line 1037 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->theoryLexing(TheoryLexing::Definition); }
#line 2592 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 337:
#line 1041 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->theoryLexing(TheoryLexing::Disabled); }
#line 2598 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;


#line 2602 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int parser::yypact_ninf_ = -563;

  const short int parser::yytable_ninf_ = -338;

  const short int
  parser::yypact_[] =
  {
       0,  -563,   151,    66,  1049,  -563,  -563,  -563,    56,    40,
    -563,  -563,   151,   151,  1639,   151,  -563,  1639,    49,  -563,
     142,   210,  -563,   104,    14,  -563,   436,  1436,  -563,   132,
    -563,   182,   594,   148,   245,   142,   107,  1639,  -563,  -563,
    -563,  -563,   151,  1639,   197,   151,  -563,  -563,  -563,   209,
     251,  -563,  -563,  1262,  -563,   839,  1805,  -563,   139,  -563,
     367,   538,   246,    70,  -563,   103,  1299,  -563,   214,  -563,
    1736,  -563,    32,   250,   257,   256,  1639,   277,  -563,   325,
    1992,  1468,   151,   293,    44,   151,   288,  -563,   697,  -563,
     151,   311,  -563,  1335,  1954,   342,    10,  -563,  2185,   363,
     318,  1436,   326,  1500,  1532,  1639,  -563,   413,  1639,   151,
      28,   196,   196,   151,   151,   324,   965,  -563,   140,  2185,
     146,   357,   369,  -563,  -563,  -563,   393,  -563,  -563,  1372,
    1984,  -563,  1639,  1639,  1639,  -563,   418,  1639,  -563,  -563,
    -563,  -563,  1639,  1639,  -563,  1639,  1639,  1639,  1639,  1639,
     923,    70,  1150,  -563,  -563,  -563,  -563,  1564,  1564,  -563,
    -563,  -563,  -563,  -563,  -563,  1564,  1564,  1596,  2185,  1639,
    -563,  -563,   416,   215,  -563,   428,   151,  1736,  -563,  1695,
    1736,  -563,  1736,  -563,  -563,   409,   503,  -563,  -563,  1639,
     407,  1639,  1639,  1736,  1639,   446,   451,  -563,   193,   425,
    1639,   441,   437,   421,   399,  1187,   768,  1856,   188,   449,
      70,    72,    68,   109,  -563,   445,  -563,   234,  1639,  1299,
    -563,  -563,  1299,  1639,  -563,   434,  -563,   470,  2001,   480,
     237,   472,   480,   272,   668,  -563,  -563,  2032,    88,    59,
     424,   476,  -563,  -563,   474,   460,   473,   452,  1639,  -563,
     151,  1639,  -563,  1639,  1639,   511,  1468,   514,  -563,  -563,
    1984,  -563,  1639,  -563,   180,   373,   443,  1639,   897,   505,
     505,   505,   433,   505,   373,  1122,  2185,    70,  -563,  -563,
    -563,    46,  -563,  2050,  -563,  -563,   235,   235,  -563,   552,
     295,  2185,  -563,  -563,  1225,  -563,  -563,  -563,  -563,  -563,
     526,  -563,   516,  -563,   503,    64,  -563,   331,  1736,  1736,
    1736,  1736,  1736,  1736,  1736,  1736,  1736,  1736,   247,   361,
     312,   352,  1875,  2185,  1639,  1564,  -563,  1639,  1639,   381,
     534,   536,  1639,   495,   555,  -563,   342,  -563,   299,   887,
    1907,    79,  1112,    70,  1299,  -563,  -563,  -563,  1404,  -563,
    -563,  -563,  -563,  -563,  -563,  -563,  -563,   558,   575,  -563,
     342,  2185,  -563,  -563,  1639,  1639,   577,   562,  1639,  -563,
     577,   565,  1639,  -563,  -563,  -563,  1639,   196,  1639,   507,
     568,  -563,  -563,  1639,   512,   515,   570,   417,  -563,   588,
     549,  2185,   480,   480,   281,   313,  1468,  1639,  2185,   720,
    1639,  2185,  -563,  1299,  -563,  1299,  -563,  1639,  -563,    46,
    1736,  -563,  1730,  -563,  -563,   598,   564,   464,   615,   569,
     569,   569,   879,   569,   464,  1746,  -563,  -563,  2250,  2250,
    2218,  -563,  -563,  -563,  -563,  -563,   571,  2262,  -563,   529,
     612,  -563,   574,  -563,   614,  -563,  -563,   587,   252,   619,
     461,  -563,  1639,  1639,  2067,   607,  -563,  -563,  -563,  1299,
    1907,   163,  1112,  -563,  -563,  -563,    70,  -563,  -563,  1299,
    -563,   404,  -563,   319,  -563,  -563,  2185,   446,  1299,  -563,
    -563,   480,  -563,  -563,   480,  -563,  2185,  -563,  2097,   611,
    -563,   566,   616,   617,  -563,   813,   151,   620,   589,   604,
     945,  -563,  -563,  -563,  -563,  -563,  -563,  -563,  -563,  -563,
    -563,  -563,  -563,  -563,   362,  -563,   370,  2185,  -563,  -563,
     342,   630,  -563,   613,  -563,   503,  1736,  -563,   612,   606,
     618,  -563,    61,  2250,  -563,  -563,  2262,  2250,   342,   623,
     631,  1299,   423,  -563,  1564,  -563,  2102,  2126,  -563,  -563,
    -563,  1112,  -563,  -563,  -563,  -563,  -563,  -563,  -563,  1628,
    -563,   658,   577,   577,  1639,  -563,  1639,  1639,  -563,  -563,
    -563,  -563,  -563,  -563,   626,   637,  -563,   281,  -563,  -563,
    1299,  -563,  -563,  -563,  2230,  -563,   634,  -563,   529,  -563,
    2250,   591,  -563,   638,   639,   252,  -563,  -563,  -563,  1299,
    -563,  -563,  2185,  2155,  2176,   608,   600,   671,  -563,  -563,
     342,  -563,    74,  -563,  -563,  2250,  -563,  -563,  -563,  -563,
    -563,  1639,  -563,   688,  -563,  -563,   574,  -563,  -563,  -563,
    -563,   529,  2192,   945,   689,   646,   650,  -563,  -563,   692,
     624,   600,  -563,   200,   694,  -563,  -563,  -563,  -563,  -563,
    -563,   676,   465,   640,  -563,   705,  -563,   712,  -563,   468,
     643,   675,  -563,  -563,  -563,   725,   945,   727,   200,  -563
  };

  const unsigned short int
  parser::yydefact_[] =
  {
       0,     5,     0,     0,     0,    10,    11,    12,     0,     0,
       1,   337,     0,     0,     0,     0,   131,     0,     0,     7,
       0,     0,    96,   192,     0,    61,     0,    74,   130,     0,
     129,     0,     0,     0,     0,     0,     0,     0,   127,   128,
      62,    93,     0,     0,   192,     0,     6,    59,    64,     0,
       0,    60,    63,     0,     4,    57,   109,    99,   202,   112,
       0,   105,     0,   145,   204,     0,     0,   203,     0,   161,
       0,     3,     0,   296,   298,    58,     0,    57,    52,     0,
     108,   165,     0,    89,     0,     0,     0,   209,     0,   208,
       0,     0,   156,     0,   109,   126,     0,    73,    67,    72,
      77,    74,     0,     0,     0,     0,   234,     0,     0,     0,
      89,     0,     0,     0,     0,     0,    57,    51,     0,    65,
       0,     0,     0,   336,   252,   253,     0,    97,    94,     0,
       0,   100,    70,     0,     0,    87,     0,     0,    85,    83,
      86,    84,     0,     0,    88,     0,     0,     0,     0,     0,
       0,   145,   124,   176,   170,   171,   177,     0,     0,   116,
     114,   113,   115,   117,   118,     0,     0,    70,   143,     0,
     160,   212,   192,   126,   205,   192,     0,     0,    35,     0,
       0,    36,     0,    33,    34,    31,   248,     8,     9,    70,
       0,    70,    70,     0,     0,    69,     0,   164,     0,    91,
      70,   192,   264,     0,     0,     0,     0,   109,     0,     0,
     145,     0,     0,     0,   149,     0,   254,     0,     0,   124,
     152,   157,     0,    71,    75,    78,    53,     0,   216,   214,
       0,     0,   214,     0,     0,   192,   236,     0,     0,    91,
       0,   192,   199,   247,     0,     0,     0,     0,    70,   261,
     258,     0,    56,     0,     0,     0,   165,     0,    98,    95,
       0,   101,     0,    79,     0,    45,    44,     0,    41,    49,
      47,    50,    43,    48,    46,    42,   102,   145,   158,   179,
     121,   123,   181,   109,   110,   111,   120,   119,   154,     0,
       0,   144,   211,   210,   124,   172,   180,   173,   206,   207,
      32,    23,     0,    24,    37,     0,    22,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
       0,     0,     0,   106,     0,     0,   166,    70,    70,     0,
     263,   262,     0,     0,     0,   139,   126,   137,     0,     0,
       0,     0,     0,   145,   124,   182,   193,   183,     0,   148,
     184,   194,   185,   198,   191,   197,   190,     0,   123,   125,
     126,    68,    76,   229,     0,     0,   221,     0,     0,   228,
     221,     0,     0,   192,   239,   235,     0,     0,     0,     0,
       0,   200,   201,     0,     0,     0,     0,     0,   257,   259,
       0,    66,   214,   214,   333,     0,   165,     0,   103,    54,
      70,   107,   159,     0,   178,     0,   155,    70,   174,   123,
      40,    25,     0,    26,    30,    39,     0,    16,    15,    20,
      18,    21,    14,    19,    17,    13,   297,   280,   289,   289,
       0,   281,   278,   279,   282,   269,   277,     0,   285,   287,
     337,   293,   294,   335,     0,    55,    54,   249,   126,     0,
       0,    90,     0,     0,     0,     0,   240,   136,   140,     0,
       0,     0,     0,   186,   195,   187,   145,   146,   169,   124,
     141,   126,   134,     0,   255,   153,   215,   213,   220,   224,
     231,   214,   226,   230,   214,   238,    81,   242,     0,     0,
     245,     0,     0,     0,   232,    54,     0,     0,     0,     0,
       0,   319,   315,   316,   313,   314,   317,   318,   320,   312,
     335,   331,   330,   332,     0,   167,     0,   104,    80,   122,
     126,     0,   175,     0,    27,    38,     0,    28,   288,     0,
       0,   272,     0,   289,   268,   284,     0,     0,   126,     0,
       0,   124,     0,   162,     0,    92,     0,     0,   267,   241,
     138,     0,   188,   196,   189,   147,   132,   133,   142,     0,
     217,   219,   221,   221,     0,   246,     0,     0,   237,   233,
     256,   260,   223,   222,     0,     0,   337,     0,   168,   151,
       0,    29,   270,   271,     0,   273,     0,   283,   286,   290,
     337,   337,   291,     0,     0,   126,   266,   265,   135,     0,
     225,   227,    82,     0,     0,     0,   311,     0,   329,   328,
     126,   274,     0,   276,   292,     0,   299,   250,   251,   163,
     218,     0,   244,     0,   336,   308,   310,   336,   334,   150,
     275,   337,     0,     0,     0,     0,     0,   300,   243,     0,
       0,     0,   321,   335,     0,   309,   324,   322,   323,   325,
     327,     0,     0,   304,   305,     0,   301,   303,   336,     0,
       0,     0,   306,   307,   302,     0,     0,     0,     0,   326
  };

  const short int
  parser::yypgoto_[] =
  {
    -563,  -563,  -563,  -563,    -2,   -58,   563,   333,   501,  -563,
     -22,   -67,   645,  -563,  -563,  -142,  -563,   -49,     2,     4,
     385,  -149,   680,  -563,  -113,  -148,  -170,    21,   185,  -563,
     289,  -563,  -198,  -120,  -154,  -563,  -563,     3,  -563,  -563,
    -214,   659,  -563,  -144,  -563,  -563,  -563,   -29,   -91,  -563,
    -209,   -84,  -563,  -332,  -563,  -563,  -563,  -563,  -563,  -393,
    -389,  -386,  -313,  -388,   159,  -563,  -563,  -563,   746,  -563,
    -563,   110,  -563,  -563,  -472,   179,    94,   187,  -563,  -563,
    -416,  -562,   -10
  };

  const short int
  parser::yydefgoto_[] =
  {
      -1,     3,     4,    54,    77,   304,   415,   416,    98,   120,
     195,   263,   100,   101,   102,   264,   238,   169,    57,   280,
      59,    60,   165,    61,   358,   359,   220,   209,   472,   473,
     337,   338,   210,   170,   211,   290,    96,    63,    64,   197,
     198,    65,   213,   156,    66,    67,    88,    89,   243,    68,
     366,   229,   561,   479,   230,   233,     9,   389,   390,   437,
     438,   439,   528,   529,   441,   442,   443,    74,   214,   657,
     658,   625,   626,   627,   510,   511,   650,   512,   513,   514,
     190,   255,   444
  };

  const short int
  parser::yytable_[] =
  {
       8,    72,    55,   296,   282,    99,   440,   150,    58,   343,
      73,    75,   186,    79,   196,   122,   286,   287,    83,    86,
     232,   244,    84,   370,    55,    62,   539,   540,   574,   297,
      95,   278,   110,    83,   115,   116,   111,   112,   482,   281,
     118,   530,   395,   123,   532,   218,   536,   318,   535,   320,
     321,    55,   341,   201,    90,   131,   403,   187,   329,   151,
     221,    70,   634,   222,    55,   636,    10,   200,   185,   202,
     173,   584,     1,     2,   412,   135,    13,    62,    14,    99,
     199,   262,   350,   203,   537,    81,    55,   240,   215,   463,
     349,    55,   208,   353,   575,   131,   661,   351,   328,   154,
     289,   138,   139,    91,   464,    25,   387,   239,   140,    27,
     141,   245,   246,   585,   155,   188,   413,   144,   379,   301,
     113,   354,   306,    71,   307,   352,   630,    55,   171,    87,
      76,   261,   465,    40,   355,   322,   172,   404,    43,   536,
     377,   378,   343,   293,   466,   586,   299,   587,   152,   153,
      55,   588,   435,   277,    47,    48,     5,   402,   342,    51,
      52,   639,   356,     6,     7,   249,   457,   114,   103,   392,
     393,    62,   331,   552,   300,   185,   448,   185,   185,   250,
     185,   409,   516,   498,   499,   461,   450,   108,   553,   196,
     475,   185,   154,     5,   667,   536,   468,   344,   345,   251,
       6,     7,    82,    55,    55,   241,   375,   155,   131,   336,
     635,   397,   382,   346,   252,    55,   554,    55,   104,   261,
      55,   242,   121,   467,   294,   295,   360,   651,     5,   631,
     600,   601,   399,   400,   124,     6,     7,     5,   536,   174,
      13,   347,    14,   326,     6,     7,   327,   175,   388,   157,
     158,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     449,   219,   343,   258,   466,   522,   157,   158,   154,    25,
      85,   612,   562,    27,   646,   563,   125,   440,   543,   647,
     648,   649,   167,   155,   481,   500,   487,   367,   484,   189,
     368,   462,    55,  -335,    37,   191,     5,    40,   259,   426,
     400,   557,    43,     6,     7,   109,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   192,   436,    47,    48,
       5,   556,   371,    51,    52,   372,   471,     6,     7,   196,
     193,     5,   200,   518,   309,   310,   216,    55,     6,     7,
     521,   261,    55,   477,   485,   406,   555,   204,   407,   458,
     579,   219,   459,   466,   525,   501,   502,   503,   504,   505,
     506,   507,   508,   515,   445,   400,   327,     5,   589,   558,
    -337,   224,   559,   223,     6,     7,   311,   312,   226,   313,
     314,   157,   158,   247,   159,   160,   161,   162,   163,   164,
     315,   316,   509,   592,   253,   595,   427,   428,   429,   414,
     430,    55,   317,    55,   446,   400,   254,   519,   185,   520,
     185,   551,   576,   219,   324,   577,   133,   134,   142,   143,
     578,   145,   235,   327,   431,   619,   436,   436,   436,   256,
     538,   267,   147,   451,   400,   436,   133,   134,   236,   137,
     629,   292,    13,   319,    14,   432,   133,     5,   308,    17,
     433,   434,   435,   298,     6,     7,   324,    55,   142,   143,
     325,   145,   146,   336,   328,    22,   330,    55,   525,   495,
     400,    25,   147,   148,   332,    27,    55,   357,   142,   143,
     333,   145,   560,   334,   149,   348,    92,   362,   142,   143,
     365,   145,   147,   148,   570,   363,    37,   369,   509,    40,
      41,   381,   147,   148,    43,    56,   309,   310,   380,   311,
     312,   383,   313,   545,   400,    78,   593,   594,    80,   384,
      47,    48,     5,   315,   185,    51,    52,    94,    93,     6,
       7,   436,   385,   107,   436,   436,   386,   471,   117,    55,
     654,   655,   284,   285,   119,   662,   663,   394,   311,   312,
     396,   313,   314,   145,   130,   159,   160,   161,   162,   163,
     164,   405,   315,   316,   168,   410,   607,    94,   411,   133,
     134,   452,   566,   453,   317,   509,   567,   117,    55,   455,
     456,   616,   436,   474,   610,   403,   478,   480,   436,   207,
     483,   489,   137,   490,   130,   494,   492,    55,   496,   493,
      13,   497,    14,   620,   228,   228,   234,   105,   526,   237,
     533,   142,   143,   436,   145,   146,   527,   313,   309,   106,
     435,   637,   537,   541,   542,   147,   148,  -335,   544,    25,
     260,   509,   549,    27,   265,   266,   565,   149,   268,   580,
     572,   568,   569,   269,   270,   571,   271,   272,   273,   274,
     275,   276,   168,    94,    76,   573,   582,    40,   283,   283,
     311,   312,    43,   313,   509,   581,   283,   283,   599,   583,
     291,   133,   134,   606,   315,   316,   590,   373,    47,    48,
       5,   591,   615,    51,    52,   605,   613,     6,     7,   617,
     618,   624,   623,   374,   137,   323,   628,   633,   640,   641,
     642,    12,   643,    13,   652,    14,    94,   340,   644,    16,
      17,   168,   653,   142,   143,   659,   145,   146,   260,   276,
      94,    18,   660,    94,   361,   665,    22,   147,   148,   -90,
     -90,   656,    25,   205,   664,   666,    27,   668,    28,   149,
      30,   166,   305,   523,   598,   -90,   225,   212,   550,   614,
      69,   645,   391,   -90,   228,   228,   608,    37,    38,    39,
      40,    41,   669,   398,   609,    43,     0,     0,   401,     0,
     -90,     0,    12,   -90,    13,     0,    14,     0,   168,     0,
      16,    47,    48,     5,     0,     0,    51,    52,   -90,   206,
       6,     7,   126,     0,     0,    94,     0,   127,     0,     0,
       0,     0,     0,    25,   205,     0,     0,    27,     0,    28,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -92,   -92,     0,   361,   283,     0,    37,    38,
      39,    40,   128,   454,     0,     0,    43,     0,   -92,     0,
     460,     0,     0,   276,   168,    94,   -92,     0,   -89,   -89,
       0,     0,    47,    48,     5,     0,     0,    51,    52,     0,
     339,     6,     7,   -92,   -89,   476,   -92,     0,     0,   228,
       0,     0,   -89,   228,     0,     0,     0,   486,   132,   488,
       0,   -92,   309,   310,   491,     0,     0,     0,     0,   -89,
       0,    12,   -89,    13,     0,    14,     0,     0,   517,    16,
     133,   134,     0,     0,    94,     0,    94,   -89,     0,     0,
       0,   257,     0,     0,     0,     0,   258,     0,     0,     0,
       0,     0,    25,   205,   311,   312,    27,   313,    28,    13,
      30,    14,     0,     0,     0,    16,     0,     0,   315,   316,
       0,     0,   142,   143,     0,   145,   146,    37,    38,    39,
      40,   259,     0,   546,   547,    43,   147,   148,    25,    26,
      94,     0,    27,   398,    28,     0,    30,   168,   149,     0,
      94,    47,    48,     5,   -91,   -91,    51,    52,     0,    94,
       6,     7,     0,    76,    38,    39,    40,     0,     0,     0,
     -91,    43,     0,     0,     0,     0,     0,     0,   -91,     0,
       0,     0,     0,     0,   248,     0,     0,    47,    48,     5,
       0,     0,    51,    52,     0,   -91,     6,     7,   -91,   501,
     502,   503,   504,   505,   506,   507,   508,     0,     0,     0,
       0,     5,     0,   -91,     0,     0,     0,     0,     6,     7,
       0,     0,    94,     0,     0,   283,     0,     0,     0,    -2,
      11,     0,   517,    12,     0,    13,     0,    14,     0,     0,
      15,    16,    17,     0,     0,   602,     0,   603,   604,     0,
       0,     0,     0,    18,    19,     0,    20,    21,    22,     0,
       0,    94,    23,    24,    25,    26,     0,     0,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    32,    33,    34,    35,    36,     0,    37,
      38,    39,    40,    41,    42,     0,     0,    43,    13,    44,
      14,     0,   632,     0,    16,   133,   134,     0,     0,     0,
       0,    45,    46,    47,    48,     5,    49,    50,    51,    52,
       0,    53,     6,     7,     0,     0,     0,    25,   205,     0,
       0,    27,     0,    28,     0,    30,    13,     0,    14,     0,
       0,     0,     0,    17,     0,     0,     0,   142,   143,     0,
     145,   146,    76,    38,    39,    40,     0,     0,     0,    22,
      43,   147,   148,     0,     0,    25,     0,     0,     0,    27,
       0,     0,     0,    13,     0,    14,    47,    48,     5,     0,
      17,    51,    52,   279,     0,     6,     7,     0,     0,     0,
      37,     0,     0,    40,    41,     0,    22,     0,    43,     0,
       0,     0,    25,     0,     0,     0,    27,     0,     0,     0,
       0,    13,     0,    14,    47,    48,     5,   335,    17,    51,
      52,     0,    93,     6,     7,     0,     0,    37,     0,     0,
      40,    41,     0,     0,    22,    43,     0,     0,     0,     0,
      25,     0,     0,     0,    27,     0,     0,     0,    13,     0,
      14,    47,    48,     5,     0,     0,    51,    52,   408,    93,
       6,     7,     0,     0,     0,    37,   126,     0,    40,    41,
       0,   127,     0,    43,     0,     0,     0,    25,     0,     0,
       0,    27,     0,     0,     0,    13,     0,    14,     0,    47,
      48,     5,    17,     0,    51,    52,     0,    93,     6,     7,
       0,     0,    37,     0,     0,    40,   128,     0,    22,     0,
      43,     0,     0,     0,    25,     0,     0,     0,    27,     0,
       0,    13,     0,    14,     0,     0,    47,    48,     5,     0,
       0,    51,    52,     0,   129,     6,     7,     0,     0,    37,
       0,     0,    40,    41,   127,     0,     0,    43,     0,     0,
      25,     0,     0,     0,    27,     0,     0,     0,    13,     0,
      14,     0,     0,    47,    48,     5,     0,     0,    51,    52,
       0,    93,     6,     7,     0,    37,   257,     0,    40,   128,
       0,   258,     0,    43,     0,     0,     0,    25,     0,     0,
      13,    27,    14,   469,     0,     0,     0,     0,     0,    47,
      48,     5,     0,     0,    51,    52,     0,   217,     6,     7,
       0,     0,    37,     0,     0,    40,   259,     0,     0,    25,
      43,     0,    13,    27,    14,     0,    97,     0,     0,     0,
       0,     0,     0,     0,   470,     0,    47,    48,     5,     0,
       0,    51,    52,     0,    76,     6,     7,    40,     0,     0,
       0,    25,    43,     0,    13,    27,    14,   -70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
       5,     0,     0,    51,    52,     0,    76,     6,     7,    40,
       0,     0,     0,    25,    43,     0,    13,    27,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,     5,     0,     0,    51,    52,     0,    76,     6,
       7,    40,     0,     0,     0,    25,    43,     0,    13,    27,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,     0,    47,    48,     5,     0,     0,    51,    52,     0,
      76,     6,     7,    40,     0,     0,     0,    25,    43,     0,
      13,    27,    14,     0,     0,     0,     0,    17,     0,     0,
       0,     0,   231,     0,    47,    48,     5,     0,     0,    51,
      52,     0,    76,     6,     7,    40,     0,     0,     0,    25,
      43,     0,    13,    27,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,     5,     0,
       0,    51,    52,     0,    76,     6,     7,    40,     0,     0,
       0,    25,    43,     0,    13,    27,    14,   469,     0,     0,
       0,     0,     0,     0,     0,    13,   288,    14,    47,    48,
       5,     0,     0,    51,    52,     0,    76,     6,     7,    40,
       0,     0,     0,    25,    43,     0,     0,    27,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,    27,     0,
      47,    48,     5,     0,     0,    51,    52,     0,    76,     6,
       7,    40,     0,     0,     0,     0,    43,     0,     0,    76,
       0,   176,    40,   177,     0,   302,     0,    43,     0,     0,
       0,     0,    47,    48,     5,     0,     0,    51,    52,     0,
       0,     6,     7,    47,    48,     5,     0,     0,    51,    52,
     178,     0,     6,     7,   179,     0,   176,     0,   177,     0,
       0,     0,   176,     0,   177,     0,     0,   303,     0,   309,
     310,     0,     0,     0,     0,   180,     0,     0,   181,     0,
       0,     0,     0,   182,     0,   178,     0,     0,     0,   179,
       0,   178,     0,     0,     0,   179,     0,     0,     0,   183,
       0,     5,   524,     0,   184,     0,     0,     0,     6,     7,
     180,   311,   312,   181,   313,   314,   180,     0,   182,   181,
       0,     0,     0,     0,   182,   315,   316,     0,   133,   134,
     135,     0,     0,     0,   183,     0,     5,    16,     0,   184,
     183,   136,     5,     6,     7,   184,     0,     0,     0,     6,
       7,   137,     0,     0,     0,     0,   138,   139,     0,     0,
       0,    26,     0,   140,     0,   141,    28,     0,    30,     0,
     142,   143,   144,   145,   146,     0,     0,     0,     0,   133,
     134,   135,     0,     0,   147,   148,    38,    39,    16,     0,
       0,     0,   136,     0,     0,     0,   149,     0,   309,   310,
       0,     0,   137,     0,     0,     0,     0,   138,   139,     0,
       0,     0,   205,     0,   140,     0,   141,    28,     0,    30,
     447,   142,   143,   144,   145,   146,     0,     0,     0,     0,
     133,   134,   135,     0,     0,   147,   148,    38,    39,    16,
     311,   312,     0,   313,   314,     0,     0,   149,     0,     0,
       0,     0,     0,   137,   315,   316,     0,     0,   138,   139,
       0,     0,     0,   205,     0,   140,   317,   141,    28,     0,
      30,     0,   142,   143,   144,   145,   146,   133,   134,   135,
       0,     0,     0,     0,     0,     0,   147,   148,    38,    39,
     136,     0,     0,     0,     0,     0,     0,     0,   149,     0,
     137,     0,     0,     0,     0,   138,   139,   133,   134,   135,
       0,     0,   140,     0,   141,   133,   134,     0,     0,   142,
     143,   144,   145,   146,   133,   134,     0,   364,   194,     0,
     137,     0,     0,   147,   148,   138,   139,     0,   137,     0,
       0,     0,   140,     0,   141,   149,     0,   137,     0,   142,
     143,   144,   145,   146,     0,   133,   134,   142,   143,     0,
     145,   146,   376,   147,   148,     0,   142,   143,     0,   145,
     146,   147,   148,   133,   134,   149,     0,     0,   137,     0,
     147,   148,     0,   149,     0,     0,   136,     0,     0,     0,
     133,   134,   149,     0,     0,     0,   137,   142,   143,     0,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   148,   137,     0,   142,   143,     0,   145,   146,
     133,   134,     0,   149,     0,   133,   134,   564,     0,   147,
     148,     0,   142,   143,     0,   145,   146,     0,   548,     0,
       0,   149,     0,   137,     0,     0,   147,   148,   137,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   149,     0,
       0,     0,   142,   143,     0,   145,   146,   142,   143,     0,
     145,   146,   137,   596,     0,     0,   147,   148,   133,   134,
       0,   147,   148,     0,     0,   621,     0,     0,   149,     0,
       0,   142,   143,   149,   145,   146,     0,   597,     0,   133,
     134,   137,     0,     0,     0,   147,   148,     0,   133,   134,
       0,     0,     0,     0,     0,   133,   134,   149,     0,     0,
     142,   143,   137,   145,   146,     0,     0,     0,     0,     0,
       0,   137,     0,     0,   147,   148,     0,     0,   137,     0,
       0,   142,   143,     0,   145,   146,   149,   622,     0,     0,
     142,   143,     0,   145,   146,   147,   148,   142,   143,     0,
     145,   146,     0,   638,   147,   148,     0,   149,     0,     0,
       0,   147,   148,   427,   428,   429,   149,   430,     0,     0,
       0,     0,     0,   149,     0,   427,   428,   429,     0,   430,
     531,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   431,   611,     0,     0,   427,   428,   429,     0,   430,
       0,     0,     0,   431,     0,     0,     0,   427,   428,   429,
       0,   430,   432,     0,     5,     0,     0,   433,   434,   435,
       0,     6,     7,   431,   432,     0,     5,     0,     0,   433,
     434,   435,     0,     6,     7,   431,     0,     0,     0,     0,
       0,     0,     0,     0,   432,     0,     5,     0,     0,   433,
     434,   435,     0,     6,     7,     0,   432,     0,     5,     0,
       0,   433,   434,   534,     0,     6,     7
  };

  const short int
  parser::yycheck_[] =
  {
       2,    11,     4,   173,   152,    27,   319,    56,     4,   207,
      12,    13,    70,    15,    81,    44,   165,   166,    20,    21,
     104,   112,    20,   232,    26,     4,   442,   443,   500,   173,
      26,   151,    34,    35,    36,    37,    34,    35,   370,   152,
      42,   429,   256,    45,   430,    94,   439,   189,   437,   191,
     192,    53,   206,     9,    40,    53,    10,    25,   200,    56,
      50,     5,   624,    53,    66,   627,     0,    39,    70,    25,
      66,    10,    72,    73,    10,     5,     6,    56,     8,   101,
      82,   130,    10,    85,    10,    36,    88,    59,    90,    10,
     210,    93,    88,    25,   510,    93,   658,    25,    39,    53,
     167,    31,    32,    89,    25,    35,   248,   109,    38,    39,
      40,   113,   114,    52,    68,    83,    52,    47,    59,   177,
      13,    53,   180,    83,   182,    53,    52,   129,    25,    25,
      60,   129,    53,    63,    25,   193,    33,   281,    68,   532,
      52,    53,   340,   172,   342,   533,   175,   536,     9,    10,
     152,   537,    91,   150,    84,    85,    86,   277,   207,    89,
      90,   633,    53,    93,    94,    25,   336,    60,    36,   253,
     254,   150,   201,    10,   176,   177,   325,   179,   180,    39,
     182,   294,   396,   392,   393,   339,   328,    39,    25,   256,
     360,   193,    53,    86,   666,   588,   344,     9,    10,    53,
      93,    94,    60,   205,   206,     9,   235,    68,   206,   205,
     626,   260,   241,    25,    68,   217,    53,   219,    36,   217,
     222,    25,    25,   343,     9,    10,   222,   643,    86,   615,
     562,   563,    52,    53,    25,    93,    94,    86,   631,    25,
       6,    53,     8,    50,    93,    94,    53,    33,   250,    14,
      15,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     327,     9,   460,    29,   462,   409,    14,    15,    53,    35,
      60,   584,   481,    39,    74,   484,    25,   590,   448,    79,
      80,    81,    36,    68,   368,     4,   377,    50,   372,    39,
      53,   340,   294,    36,    60,    39,    86,    63,    64,    52,
      53,   471,    68,    93,    94,    60,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,    39,   319,    84,    85,
      86,   469,    50,    89,    90,    53,   348,    93,    94,   396,
       5,    86,    39,   400,     3,     4,    25,   339,    93,    94,
     407,   339,   344,   365,   373,    50,   466,    59,    53,    50,
     520,     9,    53,   551,   412,    74,    75,    76,    77,    78,
      79,    80,    81,    50,    52,    53,    53,    86,   538,    50,
       9,    53,    53,    10,    93,    94,    45,    46,    52,    48,
      49,    14,    15,    59,    17,    18,    19,    20,    21,    22,
      59,    60,   394,   541,    37,   544,    35,    36,    37,    68,
      39,   403,    71,   405,    52,    53,    37,   403,   410,   405,
     412,   460,    50,     9,    10,    53,     3,     4,    45,    46,
      50,    48,     9,    53,    63,   595,   428,   429,   430,    36,
     440,    13,    59,    52,    53,   437,     3,     4,    25,    26,
     610,    25,     6,    36,     8,    84,     3,    86,    39,    13,
      89,    90,    91,    25,    93,    94,    10,   459,    45,    46,
       9,    48,    49,   459,    39,    29,    25,   469,   526,    52,
      53,    35,    59,    60,    37,    39,   478,    32,    45,    46,
      59,    48,   478,    84,    71,    36,    50,    53,    45,    46,
      10,    48,    59,    60,   496,    25,    60,    25,   500,    63,
      64,    25,    59,    60,    68,     4,     3,     4,    84,    45,
      46,    37,    48,    52,    53,    14,    93,    94,    17,    59,
      84,    85,    86,    59,   526,    89,    90,    26,    92,    93,
      94,   533,    59,    32,   536,   537,    84,   559,    37,   541,
      75,    76,   157,   158,    43,    77,    78,    36,    45,    46,
      36,    48,    49,    48,    53,    17,    18,    19,    20,    21,
      22,     9,    59,    60,    63,    39,   576,    66,    52,     3,
       4,    37,     6,    37,    71,   577,    10,    76,   580,    84,
      25,   591,   584,    25,   580,    10,     9,    25,   590,    88,
      25,    84,    26,    25,    93,    25,    84,   599,    10,    84,
       6,    52,     8,   599,   103,   104,   105,    13,    10,   108,
      39,    45,    46,   615,    48,    49,    52,    48,     3,    25,
      91,   631,    10,     9,    37,    59,    60,    53,     9,    35,
     129,   633,    25,    39,   133,   134,    25,    71,   137,     9,
      51,    25,    25,   142,   143,    25,   145,   146,   147,   148,
     149,   150,   151,   152,    60,    51,    50,    63,   157,   158,
      45,    46,    68,    48,   666,    52,   165,   166,    10,    51,
     169,     3,     4,    36,    59,    60,    53,     9,    84,    85,
      86,    50,    91,    89,    90,    59,    52,    93,    94,    51,
      51,    91,    84,    25,    26,   194,    25,     9,     9,    53,
      50,     4,    10,     6,    10,     8,   205,   206,    84,    12,
      13,   210,    36,    45,    46,    10,    48,    49,   217,   218,
     219,    24,    10,   222,   223,    50,    29,    59,    60,     9,
      10,    91,    35,    36,    91,    10,    39,    10,    41,    71,
      43,    61,   179,   410,   559,    25,   101,    88,   459,   590,
       4,   641,   251,    33,   253,   254,   577,    60,    61,    62,
      63,    64,   668,   262,   577,    68,    -1,    -1,   267,    -1,
      50,    -1,     4,    53,     6,    -1,     8,    -1,   277,    -1,
      12,    84,    85,    86,    -1,    -1,    89,    90,    68,    92,
      93,    94,    24,    -1,    -1,   294,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    -1,   324,   325,    -1,    60,    61,
      62,    63,    64,   332,    -1,    -1,    68,    -1,    25,    -1,
     339,    -1,    -1,   342,   343,   344,    33,    -1,     9,    10,
      -1,    -1,    84,    85,    86,    -1,    -1,    89,    90,    -1,
      92,    93,    94,    50,    25,   364,    53,    -1,    -1,   368,
      -1,    -1,    33,   372,    -1,    -1,    -1,   376,    39,   378,
      -1,    68,     3,     4,   383,    -1,    -1,    -1,    -1,    50,
      -1,     4,    53,     6,    -1,     8,    -1,    -1,   397,    12,
       3,     4,    -1,    -1,   403,    -1,   405,    68,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    36,    45,    46,    39,    48,    41,     6,
      43,     8,    -1,    -1,    -1,    12,    -1,    -1,    59,    60,
      -1,    -1,    45,    46,    -1,    48,    49,    60,    61,    62,
      63,    64,    -1,   452,   453,    68,    59,    60,    35,    36,
     459,    -1,    39,   462,    41,    -1,    43,   466,    71,    -1,
     469,    84,    85,    86,     9,    10,    89,    90,    -1,   478,
      93,    94,    -1,    60,    61,    62,    63,    -1,    -1,    -1,
      25,    68,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    84,    85,    86,
      -1,    -1,    89,    90,    -1,    50,    93,    94,    53,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    86,    -1,    68,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,   541,    -1,    -1,   544,    -1,    -1,    -1,     0,
       1,    -1,   551,     4,    -1,     6,    -1,     8,    -1,    -1,
      11,    12,    13,    -1,    -1,   564,    -1,   566,   567,    -1,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,    -1,
      -1,   580,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
     599,    -1,    -1,    54,    55,    56,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    -1,    -1,    68,     6,    70,
       8,    -1,   621,    -1,    12,     3,     4,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    35,    36,    -1,
      -1,    39,    -1,    41,    -1,    43,     6,    -1,     8,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    45,    46,    -1,
      48,    49,    60,    61,    62,    63,    -1,    -1,    -1,    29,
      68,    59,    60,    -1,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,     6,    -1,     8,    84,    85,    86,    -1,
      13,    89,    90,    53,    -1,    93,    94,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    -1,    29,    -1,    68,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,     6,    -1,     8,    84,    85,    86,    50,    13,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    60,    -1,    -1,
      63,    64,    -1,    -1,    29,    68,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,     6,    -1,
       8,    84,    85,    86,    -1,    -1,    89,    90,    53,    92,
      93,    94,    -1,    -1,    -1,    60,    24,    -1,    63,    64,
      -1,    29,    -1,    68,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    39,    -1,    -1,    -1,     6,    -1,     8,    -1,    84,
      85,    86,    13,    -1,    89,    90,    -1,    92,    93,    94,
      -1,    -1,    60,    -1,    -1,    63,    64,    -1,    29,    -1,
      68,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,     6,    -1,     8,    -1,    -1,    84,    85,    86,    -1,
      -1,    89,    90,    -1,    92,    93,    94,    -1,    -1,    60,
      -1,    -1,    63,    64,    29,    -1,    -1,    68,    -1,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,     6,    -1,
       8,    -1,    -1,    84,    85,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    94,    -1,    60,    24,    -1,    63,    64,
      -1,    29,    -1,    68,    -1,    -1,    -1,    35,    -1,    -1,
       6,    39,     8,     9,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    -1,    92,    93,    94,
      -1,    -1,    60,    -1,    -1,    63,    64,    -1,    -1,    35,
      68,    -1,     6,    39,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    84,    85,    86,    -1,
      -1,    89,    90,    -1,    60,    93,    94,    63,    -1,    -1,
      -1,    35,    68,    -1,     6,    39,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    -1,    60,    93,    94,    63,
      -1,    -1,    -1,    35,    68,    -1,     6,    39,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    -1,    -1,    89,    90,    -1,    60,    93,
      94,    63,    -1,    -1,    -1,    35,    68,    -1,     6,    39,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    84,    85,    86,    -1,    -1,    89,    90,    -1,
      60,    93,    94,    63,    -1,    -1,    -1,    35,    68,    -1,
       6,    39,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    50,    -1,    84,    85,    86,    -1,    -1,    89,
      90,    -1,    60,    93,    94,    63,    -1,    -1,    -1,    35,
      68,    -1,     6,    39,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    -1,
      -1,    89,    90,    -1,    60,    93,    94,    63,    -1,    -1,
      -1,    35,    68,    -1,     6,    39,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    50,     8,    84,    85,
      86,    -1,    -1,    89,    90,    -1,    60,    93,    94,    63,
      -1,    -1,    -1,    35,    68,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      84,    85,    86,    -1,    -1,    89,    90,    -1,    60,    93,
      94,    63,    -1,    -1,    -1,    -1,    68,    -1,    -1,    60,
      -1,     6,    63,     8,    -1,    10,    -1,    68,    -1,    -1,
      -1,    -1,    84,    85,    86,    -1,    -1,    89,    90,    -1,
      -1,    93,    94,    84,    85,    86,    -1,    -1,    89,    90,
      35,    -1,    93,    94,    39,    -1,     6,    -1,     8,    -1,
      -1,    -1,     6,    -1,     8,    -1,    -1,    52,    -1,     3,
       4,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    68,    -1,    35,    -1,    -1,    -1,    39,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    84,
      -1,    86,    52,    -1,    89,    -1,    -1,    -1,    93,    94,
      60,    45,    46,    63,    48,    49,    60,    -1,    68,    63,
      -1,    -1,    -1,    -1,    68,    59,    60,    -1,     3,     4,
       5,    -1,    -1,    -1,    84,    -1,    86,    12,    -1,    89,
      84,    16,    86,    93,    94,    89,    -1,    -1,    -1,    93,
      94,    26,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    36,    -1,    38,    -1,    40,    41,    -1,    43,    -1,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    59,    60,    61,    62,    12,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    71,    -1,     3,     4,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    36,    -1,    38,    -1,    40,    41,    -1,    43,
      25,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    59,    60,    61,    62,    12,
      45,    46,    -1,    48,    49,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    26,    59,    60,    -1,    -1,    31,    32,
      -1,    -1,    -1,    36,    -1,    38,    71,    40,    41,    -1,
      43,    -1,    45,    46,    47,    48,    49,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,     3,     4,     5,
      -1,    -1,    38,    -1,    40,     3,     4,    -1,    -1,    45,
      46,    47,    48,    49,     3,     4,    -1,     6,    16,    -1,
      26,    -1,    -1,    59,    60,    31,    32,    -1,    26,    -1,
      -1,    -1,    38,    -1,    40,    71,    -1,    26,    -1,    45,
      46,    47,    48,    49,    -1,     3,     4,    45,    46,    -1,
      48,    49,    10,    59,    60,    -1,    45,    46,    -1,    48,
      49,    59,    60,     3,     4,    71,    -1,    -1,    26,    -1,
      59,    60,    -1,    71,    -1,    -1,    16,    -1,    -1,    -1,
       3,     4,    71,    -1,    -1,    -1,    26,    45,    46,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    26,    -1,    45,    46,    -1,    48,    49,
       3,     4,    -1,    71,    -1,     3,     4,    10,    -1,    59,
      60,    -1,    45,    46,    -1,    48,    49,    -1,    51,    -1,
      -1,    71,    -1,    26,    -1,    -1,    59,    60,    26,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    45,    46,    -1,
      48,    49,    26,    51,    -1,    -1,    59,    60,     3,     4,
      -1,    59,    60,    -1,    -1,    10,    -1,    -1,    71,    -1,
      -1,    45,    46,    71,    48,    49,    -1,    51,    -1,     3,
       4,    26,    -1,    -1,    -1,    59,    60,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,     3,     4,    71,    -1,    -1,
      45,    46,    26,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    59,    60,    -1,    -1,    26,    -1,
      -1,    45,    46,    -1,    48,    49,    71,    51,    -1,    -1,
      45,    46,    -1,    48,    49,    59,    60,    45,    46,    -1,
      48,    49,    -1,    51,    59,    60,    -1,    71,    -1,    -1,
      -1,    59,    60,    35,    36,    37,    71,    39,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    35,    36,    37,    -1,    39,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    52,    -1,    -1,    35,    36,    37,    -1,    39,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    84,    -1,    86,    -1,    -1,    89,    90,    91,
      -1,    93,    94,    63,    84,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    93,    94,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    93,    94,    -1,    84,    -1,    86,    -1,
      -1,    89,    90,    91,    -1,    93,    94
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    72,    73,    96,    97,    86,    93,    94,    99,   151,
       0,     1,     4,     6,     8,    11,    12,    13,    24,    25,
      27,    28,    29,    33,    34,    35,    36,    39,    41,    42,
      43,    44,    54,    55,    56,    57,    58,    60,    61,    62,
      63,    64,    65,    68,    70,    82,    83,    84,    85,    87,
      88,    89,    90,    92,    98,    99,   103,   113,   114,   115,
     116,   118,   122,   132,   133,   136,   139,   140,   144,   163,
       5,    83,   177,    99,   162,    99,    60,    99,   103,    99,
     103,    36,    60,    99,   113,    60,    99,    25,   141,   142,
      40,    89,    50,    92,   103,   114,   131,    10,   103,   105,
     107,   108,   109,    36,    36,    13,    25,   103,    39,    60,
      99,   113,   113,    13,    60,    99,    99,   103,    99,   103,
     104,    25,   142,    99,    25,    25,    24,    29,    64,    92,
     103,   113,    39,     3,     4,     5,    16,    26,    31,    32,
      38,    40,    45,    46,    47,    48,    49,    59,    60,    71,
     112,   132,     9,    10,    53,    68,   138,    14,    15,    17,
      18,    19,    20,    21,    22,   117,   117,    36,   103,   112,
     128,    25,    33,   114,    25,    33,     6,     8,    35,    39,
      60,    63,    68,    84,    89,    99,   100,    25,    83,    39,
     175,    39,    39,     5,    16,   105,   106,   134,   135,    99,
      39,     9,    25,    99,    59,    36,    92,   103,   114,   122,
     127,   129,   136,   137,   163,    99,    25,    92,   112,     9,
     121,    50,    53,    10,    53,   107,    52,    50,   103,   146,
     149,    50,   146,   150,   103,     9,    25,   103,   111,    99,
      59,     9,    25,   143,   143,    99,    99,    59,    39,    25,
      39,    53,    68,    37,    37,   176,    36,    24,    29,    64,
     103,   113,   112,   106,   110,   103,   103,    13,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   132,   128,    53,
     114,   119,   120,   103,   115,   115,   116,   116,    50,   106,
     130,   103,    25,   142,     9,    10,   121,   138,    25,   142,
      99,   100,    10,    52,   100,   101,   100,   100,    39,     3,
       4,    45,    46,    48,    49,    59,    60,    71,   110,    36,
     110,   110,   100,   103,    10,     9,    50,    53,    39,   110,
      25,   142,    37,    59,    84,    50,   114,   125,   126,    92,
     103,   129,   112,   127,     9,    10,    25,    53,    36,   128,
      10,    25,    53,    25,    53,    25,    53,    32,   119,   120,
     114,   103,    53,    25,     6,    10,   145,    50,    53,    25,
     145,    50,    53,     9,    25,   142,    10,    52,    53,    59,
      84,    25,   142,    37,    59,    59,    84,   110,    99,   152,
     153,   103,   146,   146,    36,   135,    36,   112,   103,    52,
      53,   103,   128,    10,   138,     9,    50,    53,    53,   119,
      39,    52,    10,    52,    68,   101,   102,   100,   100,   100,
     100,   100,   100,   100,   100,   100,    52,    35,    36,    37,
      39,    63,    84,    89,    90,    91,    99,   154,   155,   156,
     157,   159,   160,   161,   177,    52,    52,    25,   116,   106,
     110,    52,    37,    37,   103,    84,    25,   121,    50,    53,
     103,   129,   112,    10,    25,    53,   127,   128,   120,     9,
      50,   105,   123,   124,    25,   121,   103,   105,     9,   148,
      25,   146,   148,    25,   146,   142,   103,   143,   103,    84,
      25,   103,    84,    84,    25,    52,    10,    52,   145,   145,
       4,    74,    75,    76,    77,    78,    79,    80,    81,    99,
     169,   170,   172,   173,   174,    50,   135,   103,   106,   114,
     114,   106,   138,   102,    52,   100,    10,    52,   157,   158,
     158,    52,   156,    39,    91,   155,   154,    10,   177,   175,
     175,     9,    37,   121,     9,    52,   103,   103,    51,    25,
     125,   112,    10,    25,    53,   128,   120,   121,    50,    53,
     114,   147,   145,   145,    10,    25,     6,    10,    25,    25,
      99,    25,    51,    51,   169,   175,    50,    53,    50,   121,
       9,    52,    50,    51,    10,    52,   158,   155,   156,   121,
      53,    50,   120,    93,    94,   116,    51,    51,   123,    10,
     148,   148,   103,   103,   103,    59,    36,   177,   170,   172,
     114,    52,   157,    52,   159,    91,   177,    51,    51,   121,
     114,    10,    51,    84,    91,   166,   167,   168,    25,   121,
      52,   156,   103,     9,   176,   175,   176,   177,    51,   169,
       9,    53,    50,    10,    84,   166,    74,    79,    80,    81,
     171,   175,    10,    36,    75,    76,    91,   164,   165,    10,
      10,   176,    77,    78,    91,    50,    10,   169,    10,   171
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     127,   127,   127,   128,   128,   128,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   137,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   143,
     143,   143,   144,   144,   144,    98,    98,    98,    98,    98,
      98,    98,    98,   145,   145,   146,   146,   147,   147,   148,
     148,   148,    98,    98,   149,   149,   150,   150,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,   151,    98,
      98,    98,    98,    98,    98,    98,   152,   152,   153,   153,
      98,    98,    98,    98,    98,    98,    98,    98,   154,   154,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   156,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     163,   164,   164,   165,   165,   166,   166,   166,   167,   167,
     168,   168,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     173,   173,   174,   174,    98,   175,   176,   177
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     2,     3,     2,     0,     1,     1,     3,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     3,     4,     4,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     3,     1,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     4,     5,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       0,     2,     1,     1,     0,     2,     3,     1,     2,     1,
       3,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     5,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     3,     4,     5,     1,     4,     4,     2,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     1,     0,     2,     0,     1,     1,     1,
       1,     1,     2,     2,     1,     3,     2,     1,     3,     2,
       3,     3,     4,     1,     2,     0,     3,     4,     2,     1,
       6,     4,     2,     4,     3,     4,     2,     3,     3,     4,
       2,     1,     4,     6,     1,     0,     4,     5,     6,     3,
       1,     1,     3,     3,     4,     5,     2,     2,     4,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     5,     5,
       3,     3,     0,     3,     3,     4,     5,     3,     3,     1,
       2,     2,     1,     1,     1,     2,     3,     3,     2,     2,
       3,     3,     2,     2,     0,     3,     1,     1,     3,     2,
       1,     0,     6,     6,     3,     5,     3,     5,     4,     4,
       5,     5,     5,     6,     2,     4,     3,     6,     5,     4,
       5,     6,     5,    10,     8,     5,     6,     3,     3,     5,
       8,     8,     2,     2,     3,     5,     3,     1,     0,     1,
       6,     3,     4,     4,     3,     7,     7,     6,     2,     1,
       3,     3,     2,     3,     4,     5,     4,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     3,     1,     1,     0,
       3,     3,     4,     1,     1,     0,     1,     4,     2,     8,
      10,     1,     3,     1,     0,     6,     8,     8,     1,     4,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     1,     1,     1,     1,    16,     8,     3,     3,
       1,     1,     1,     0,     8,     0,     0,     0
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"<EOF>\"", "error", "$undefined", "\"+\"", "\"&\"", "\"=\"", "\"@\"",
  "\"#base\"", "\"~\"", "\":\"", "\",\"", "\"#const\"", "\"#count\"",
  "\"$\"", "\"$+\"", "\"$-\"", "\"$*\"", "\"$<=\"", "\"$<\"", "\"$>\"",
  "\"$>=\"", "\"$=\"", "\"$!=\"", "\"#cumulative\"", "\"#disjoint\"",
  "\".\"", "\"..\"", "\"#external\"", "\"#defined\"", "\"#false\"",
  "\"#forget\"", "\">=\"", "\">\"", "\":-\"", "\"#include\"", "\"#inf\"",
  "\"{\"", "\"[\"", "\"<=\"", "\"(\"", "\"<\"", "\"#max\"",
  "\"#maximize\"", "\"#min\"", "\"#minimize\"", "\"\\\\\"", "\"*\"",
  "\"!=\"", "\"**\"", "\"?\"", "\"}\"", "\"]\"", "\")\"", "\";\"",
  "\"#show\"", "\"#edge\"", "\"#project\"", "\"#heuristic\"",
  "\"#showsig\"", "\"/\"", "\"-\"", "\"#sum\"", "\"#sum+\"", "\"#sup\"",
  "\"#true\"", "\"#program\"", "UBNOT", "UMINUS", "\"|\"", "\"#volatile\"",
  "\":~\"", "\"^\"", "\"<program>\"", "\"<define>\"", "\"any\"",
  "\"unary\"", "\"binary\"", "\"left\"", "\"right\"", "\"head\"",
  "\"body\"", "\"directive\"", "\"#theory\"", "\"EOF\"", "\"<NUMBER>\"",
  "\"<ANONYMOUS>\"", "\"<IDENTIFIER>\"", "\"<PYTHON>\"", "\"<LUA>\"",
  "\"<STRING>\"", "\"<VARIABLE>\"", "\"<THEORYOP>\"", "\"not\"",
  "\"default\"", "\"override\"", "$accept", "start", "program",
  "statement", "identifier", "constterm", "consttermvec", "constargvec",
  "term", "unaryargvec", "ntermvec", "termvec", "tuple", "tuplevec_sem",
  "tuplevec", "argvec", "binaryargvec", "cmp", "atom", "literal",
  "csp_mul_term", "csp_add_term", "csp_rel", "csp_literal", "nlitvec",
  "litvec", "optcondition", "aggregatefunction", "bodyaggrelem",
  "bodyaggrelemvec", "altbodyaggrelem", "altbodyaggrelemvec",
  "bodyaggregate", "upper", "lubodyaggregate", "headaggrelemvec",
  "altheadaggrelemvec", "headaggregate", "luheadaggregate", "ncspelemvec",
  "cspelemvec", "disjoint", "conjunction", "dsym", "disjunctionsep",
  "disjunction", "bodycomma", "bodydot", "bodyconddot", "head",
  "optimizetuple", "optimizeweight", "optimizelitvec", "optimizecond",
  "maxelemlist", "minelemlist", "define", "nidlist", "idlist",
  "theory_op_list", "theory_term", "theory_opterm", "theory_opterm_nlist",
  "theory_opterm_list", "theory_atom_element", "theory_atom_element_nlist",
  "theory_atom_element_list", "theory_atom_name", "theory_atom",
  "theory_operator_nlist", "theory_operator_list",
  "theory_operator_definition", "theory_operator_definition_nlist",
  "theory_operator_definiton_list", "theory_definition_identifier",
  "theory_term_definition", "theory_atom_type", "theory_atom_definition",
  "theory_definition_nlist", "theory_definition_list",
  "enable_theory_lexing", "enable_theory_definition_lexing",
  "disable_theory_lexing", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,   340,   340,   341,   345,   346,   352,   353,   354,   355,
     359,   360,   361,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   397,   398,   402,
     403,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   438,   439,   445,   446,   450,
     451,   455,   456,   457,   458,   461,   462,   465,   466,   469,
     470,   474,   475,   485,   486,   487,   488,   489,   490,   494,
     495,   496,   497,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   517,   518,   519,   520,
     524,   525,   526,   530,   531,   532,   533,   534,   535,   539,
     540,   548,   549,   553,   554,   558,   559,   568,   569,   570,
     571,   572,   578,   579,   583,   584,   590,   594,   595,   601,
     602,   603,   604,   608,   609,   610,   614,   615,   616,   617,
     623,   624,   628,   629,   635,   636,   637,   638,   642,   643,
     644,   645,   651,   652,   656,   657,   661,   662,   663,   670,
     677,   678,   684,   685,   686,   687,   688,   689,   690,   691,
     695,   696,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   717,   718,   719,   720,   721,   722,   726,
     727,   728,   731,   732,   733,   737,   738,   739,   740,   741,
     747,   748,   749,   755,   756,   760,   761,   765,   766,   770,
     771,   772,   776,   777,   781,   782,   786,   787,   791,   792,
     793,   794,   800,   801,   802,   803,   804,   805,   806,   807,
     813,   814,   819,   825,   826,   832,   833,   834,   840,   844,
     845,   846,   852,   853,   859,   860,   866,   867,   871,   872,
     876,   877,   883,   884,   885,   886,   887,   888,   896,   897,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   917,   918,   919,   923,   924,   928,   929,
     933,   934,   938,   939,   943,   944,   948,   949,   952,   953,
     954,   960,   961,   965,   966,   970,   971,   972,   976,   977,
     981,   982,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   998,  1002,  1003,  1004,  1005,  1009,  1011,  1015,  1016,
    1017,  1018,  1022,  1023,  1027,  1033,  1037,  1041
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
    };
    const unsigned int user_token_number_max_ = 349;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 28 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:1167
} } } // Gringo::Input::NonGroundGrammar
#line 3841 "/home/iensen/projects/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:1167
