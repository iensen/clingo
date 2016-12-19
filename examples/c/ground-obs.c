#include <clingo.h>
#include <stdlib.h>
#include<memory.h>
#include <stdio.h>


bool print_model(clingo_model_t *model) {
    bool ret = true;
    clingo_symbol_t *atoms = NULL;
    size_t atoms_n;
    clingo_symbol_t const *it, *ie;
    char *str = NULL;
    size_t str_n = 0;

    // determine the number of (shown) symbols in the model
    if (!clingo_model_symbols_size(model, clingo_show_type_shown, &atoms_n)) { goto error; }

    // allocate required memory to hold all the symbols
    if (!(atoms = (clingo_symbol_t*)malloc(sizeof(*atoms) * atoms_n))) {
        clingo_set_error(clingo_error_bad_alloc, "could not allocate memory for atoms");
        goto error;
    }

    // retrieve the symbols in the model
    if (!clingo_model_symbols(model, clingo_show_type_shown, atoms, atoms_n)) { goto error; }

    printf("Model:");

    for (it = atoms, ie = atoms + atoms_n; it != ie; ++it) {
        size_t n;
        char *str_new;

        // determine size of the string representation of the next symbol in the model
        if (!clingo_symbol_to_string_size(*it, &n)) { goto error; }

        if (str_n < n) {
            // allocate required memory to hold the symbol's string
            if (!(str_new = (char*)realloc(str, sizeof(*str) * n))) {
                clingo_set_error(clingo_error_bad_alloc, "could not allocate memory for symbol's string");
                goto error;
            }

            str = str_new;
            str_n = n;
        }

        // retrieve the symbol's string
        if (!clingo_symbol_to_string(*it, str, n)) { goto error; }

        printf(" %s", str);
    }

    printf("\n");
    goto out;

    error:
    ret = false;

    out:
    if (atoms) { free(atoms); }
    if (str)   { free(str); }

    return ret;
}

clingo_symbolic_atoms_t *atoms;
clingo_symbolic_atom_iterator_t it_atoms, ie_atoms;


bool output_atom(clingo_symbol_t symbol, clingo_atom_t atom, void *data) {

    char *str = NULL;
    size_t str_n = 0;
    printf("atom: %u",atom);
    size_t n;
    clingo_symbol_to_string_size(symbol, &n);
    char *str_new;

    if (str_n < n) {
        // allocate required memory to hold the symbol's string
        str_new = (char*)realloc(str, sizeof(*str) * n);

        str = str_new;
        str_n = n;
    }
    clingo_symbol_t * 	arguments;
    int size;
    clingo_symbol_arguments	(symbol, &arguments, &size);
    // retrieve the symbol's string
    clingo_symbol_to_string(symbol, str, n);
    printf(" %s ", str);
    char *name;
    clingo_symbol_name (symbol,&name);
    printf("name: %s ",name);
    bool negative;
    clingo_symbol_is_negative (symbol, &negative);
    printf("is negative: %d", negative);

    printf("arguments: ");
    for(int i=0;i<size;i++) {
        clingo_symbol_to_string_size(arguments[i], &n);
        clingo_symbol_to_string(arguments[i], str, n);
        printf("%s ", str);

    }
    printf("\n");
    return true;
}



bool rule (bool choice, clingo_atom_t const *head, size_t head_size, clingo_literal_t const *body, size_t body_size, void *data) {
    //clingo_control_symbolic_atoms(
    printf("RULE\n");

    if (!clingo_symbolic_atoms_begin(atoms, NULL, &it_atoms)) { goto error; }
    if (!clingo_symbolic_atoms_end(atoms, &ie_atoms)) { goto error; }
    printf("head_size: %d\n", head_size);
    for(int i=0;i<head_size;i++) {
        clingo_atom_t at = *(head + i);
        printf("%u\n", at);

        for (;;) {
            bool equal, fact, external;
            clingo_symbol_t symbol;
            // check if we are at the end of the sequence
            if (!clingo_symbolic_atoms_iterator_is_equal_to(atoms, it_atoms, ie_atoms, &equal)) { goto error; }
            if (equal) { break; }
            // get the associated symbol
            if (!clingo_symbolic_atoms_symbol(atoms, it_atoms, &symbol)) { goto error; }
            // determine if the atom is fact or external
            if (!clingo_symbolic_atoms_is_fact(atoms, it_atoms, &fact)) { goto error; }
            if (!clingo_symbolic_atoms_is_external(atoms, it_atoms, &external)) { goto error; }
            //  printf("  ");
            clingo_literal_t  	literal;
            clingo_symbolic_atoms_literal	(atoms,it_atoms, &literal);
            printf("literal %u",literal);

            // if (!print_symbol(symbol, &buf)) { goto error; }
            if (fact) { printf(", fact"); }
            if (external) { printf(", external"); }
            printf("\n");
            // advance the next element in the sequence
            if (!clingo_symbolic_atoms_next(atoms, it_atoms, &it_atoms)) { goto error; }
        }



    }

    printf("body_size %d\n", body_size);
    for(int i=0;i<body_size;i++) {
        clingo_literal_t at = *(body + i);
        printf("%d\n", at);
        for (;;) {

            bool equal, fact, external;
            clingo_symbol_t symbol;
            // check if we are at the end of the sequence
            if (!clingo_symbolic_atoms_iterator_is_equal_to(atoms, it_atoms, ie_atoms, &equal)) {goto error;}
            if (equal) { break; }
            // get the associated symbol
            if (!clingo_symbolic_atoms_symbol(atoms, it_atoms, &symbol)) { goto error; }
            // determine if the atom is fact or external
            if (!clingo_symbolic_atoms_is_fact(atoms, it_atoms, &fact)) { goto error; }
            if (!clingo_symbolic_atoms_is_external(atoms, it_atoms, &external)) { goto error; }
            //  printf("  ");
            clingo_literal_t literal;
            clingo_symbolic_atoms_literal(atoms, it_atoms, &literal);
            //printf("literal %u", literal);

            // if (!print_symbol(symbol, &buf)) { goto error; }
            if (fact) { printf(", fact"); }
            if (external) { printf(", external"); }
            printf("\n");
            // advance the next element in the sequence
            if (!clingo_symbolic_atoms_next(atoms, it_atoms, &it_atoms)) { goto error; }
        }
    }



    return true;
    error:
    //if (!(error_message = clingo_error_message())) { error_message = "error"; }
    //printf("%s\n", error_message);
    //ret = clingo_error_code();
    //out:
    //free_string_buffer(&buf);
    //if (ctl) { clingo_control_free(ctl); }

    return false;
}



int main(int argc, char const **argv) {
    char const *error_message;
    int ret = 0;
    clingo_solve_iteratively_t *it = NULL;
    clingo_model_t *model;
    clingo_control_t *ctl = NULL;
    clingo_part_t parts[] = {{ "base", NULL, 0 }};

    // create a control object and pass command line arguments
    if (!clingo_control_new(argv+1, argc-1, NULL, NULL, 20, &ctl) != 0) { goto error; }

    // add a logic program to the base part
    if (!clingo_control_add(ctl, "base", NULL, 0, "y(X) :- not b(X),p(X). b(X) :- not y(X),p(X). p(1). y(1).")) { goto error; }


    clingo_ground_program_observer_t observer;
    memset(&observer, 0, sizeof(observer));
    observer.rule = rule;
    observer.output_atom = output_atom;
    if (!clingo_control_register_observer(ctl, observer, false, NULL)) { goto error; }
    // get symbolic atoms
    if (!clingo_control_symbolic_atoms(ctl, &atoms)) { goto error; }
    // ground the base part
    if (!clingo_control_ground(ctl, parts, 1, NULL, NULL)) { goto error; }

    // get symbolic atoms
    if (!clingo_control_symbolic_atoms(ctl, &atoms)) { goto error; }
// get begin and end iterator


    // solve using a model callback
    if (!clingo_control_solve_iteratively(ctl, NULL, 0, &it)) { goto error; }

    for (;;) {
        // get the next model
        if (!clingo_solve_iteratively_next(it, &model)) { goto error; }

        // stop if the search space has been exhausted or the requested number of models found
        if (!model) { break; }
        if (!print_model(model)) { goto error; }
    }

    goto out;

    error:
    if (!(error_message = clingo_error_message())) { error_message = "error"; }

    printf("%s\n", error_message);
    ret = clingo_error_code();

    out:
    if (it)  { clingo_solve_iteratively_close(it); }
    if (ctl) { clingo_control_free(ctl); }

    return ret;
}

