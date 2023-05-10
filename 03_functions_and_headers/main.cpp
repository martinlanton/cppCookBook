#include <iostream>
// Headers must be brought in both in the file using it and in the file implementing it
// By convention we bring in local files with double quotes, and standard or external libraries with <> signs
#include "functions.h"
// Using namespaces allows us to call functions and variables directly
using namespace std;


int main() {
    // As is the case in python, when assigning a value to a variable, this can be done directly
    // through calling a function
    double result = add(12.7, 13.2);
    // There is no need to use std::cout and std::endl here, because we have specified we're using
    // the std namespace.
    cout << "The result is : " << result << endl;
    return 0;
}
