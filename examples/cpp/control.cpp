// The progrma is  based on Roland Kaminski's program sent to  potassco mailing lists.

#include <clingo.hh>
#include <iostream>

using namespace Clingo;
void test(Control &ctl) {
    auto b = ctl.builder();
    b.begin();
    Location loc("<test>", "<test>", 1, 1, 1, 1);
    b.add({loc, AST::Program{"acid", {}}});
    Symbol arg1_ = Id("ary");
    Symbol arg2_ = Id("ainan");
    std::vector<Symbol> v;
    v.push_back(arg1_);
    v.push_back(arg2_);
    Symbol f_ = Function("father", v);
    AST::Term f_t{loc, f_};
    AST::Literal f_l{loc, AST::Sign::None, f_t};
    AST::Rule f_r{{loc, f_l}, std::vector<AST::BodyLiteral>()};
    AST::Statement s_{loc, f_r};
    b.add(s_);
    b.end();
}
void solve(Control &ctl) {
    for (auto m : ctl.solve_iteratively()) {
        std::cout << "Model:";
        for (auto &atom : m.symbols()) {
            std::cout << " " << atom;
        }
        std::cout << "\n";
    };
}
int main(int argc, char const **argv) {
    try {
        Logger logger = [](WarningCode, char const *message) {
            std::cerr << message << std::endl;
        };
        Control ctl{{argv+1, size_t(argc-1)}, logger, 20};
        ctl.add("base", {}, "a :- not b. b :- not a.");


        ctl.ground({{"base", {}}});

        solve(ctl);
        test(ctl);
        ctl.ground({{"acid", {}}});
        solve(ctl);
    }
    catch (std::exception const &e) {
        std::cerr << "example failed with: " << e.what() << std::endl;
    }
}
