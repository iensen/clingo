// The progrma is  based on Roland Kaminski's program sent to  potassco mailing lists.

#include <clingo.hh>
#include <iostream>

using namespace Clingo;

Clingo::Symbol find_ex_symbol(const Control &ctl) {
    Clingo::SymbolicAtoms ats = ctl.symbolic_atoms();
    for(auto at: ats) {
        if(!strcmp(at.symbol().name(),"ex")) {
            return at.symbol();
        }
    }
    throw std::logic_error("no ex found:(");
}

int main(int argc, char const **argv) {
    try {
        Logger logger = [](WarningCode, char const *message) {
            std::cerr << message << std::endl;
        };
        Control ctl{{argv+1, size_t(argc-1)}, logger, 20};
        ctl.add("base", {}, "#external ex. a :- ex. b. ");
        ctl.ground({{"base", {}}});
        SolveIteratively solveit = ctl.solve_iteratively();
        Model m = solveit.next();
        solveit.close();
        std::cout << m << std::endl;
        Symbol ex_symb = find_ex_symbol(ctl);
        ctl.assign_external(ex_symb,TruthValue::True);
        std::cout << m << std::endl;
    }
    catch (std::exception const &e) {
        std::cerr << "example failed with: " << e.what() << std::endl;
    }
}
