// The progrma is  based on Roland Kaminski's program sent to  potassco mailing lists.

#include <clingo.hh>
#include <iostream>

using namespace Clingo;


class MyObserver: public GroundProgramObserver {
    virtual void output_atom(Clingo::Symbol symbol, atom_t atom) override {
        std:: cout <<"ATOM_ID: "<<  atom << std::endl;
        std:: cout <<"SYMBOL: " << symbol.to_string() << std::endl;
    }
};

int main(int argc, char const **argv) {
    try {
        Logger logger = [](WarningCode, char const *message) {
            std::cerr << message << std::endl;
        };

        MyObserver obs;
        Control ctl{{argv+1, size_t(argc-1)}, logger, 20};
        ctl.register_observer(obs);
        ctl.add("base", {}, " q(a). p(a).");
        ctl.ground({{"base", {}}});
        //ctl.solve();
        //ctl.symbolic_atoms();
        //std:: cout << "OK1" << std::endl;
        //GroundProgramObserver dummy_obs2;
        //ctl.register_observer(dummy_obs2, true);
        //ctl.symbolic_atoms();
        //std::cout << "OK2";
    }
    catch (std::exception const &e) {
        std::cerr << "example failed with: " << e.what() << std::endl;
    }
}
