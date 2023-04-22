//
// Created by MLA on 12/04/2023.
//
#include "functions.h"

// When declaring a function, each argument needs to be declared as first its type, then its name
double add(double a, double b) {
    return a + b;
}

// In cpp, we can declare the same function several times as long as each declaration uses different
// types or number of arguments, this is called operator overloading. When calling that function,
// cpp will call the relevant declaration, based on the arguments passed. In the present case, that
// means that if we call add with 2 doubles, it will call the definition above, but if we call it
// with three doubles, it will call the definition below.
double add(double a, double b, double c) {
    // It is quite common in cpp that an overloaded function calls the original function recursively
    // for simplicity
    return add(add(a, b), c);
}