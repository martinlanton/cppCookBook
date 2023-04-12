//
// Created by MLA on 12/04/2023.
//
#include "functions.h"

double add(double a, double b) {
    return a + b;
}

double add(double a, double b, double c) {
    return add(add(a, b), c);
}