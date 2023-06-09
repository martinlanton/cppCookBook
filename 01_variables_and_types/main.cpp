// Comments are declared after a double / sign, like at the start of this very line
// Include statements start with an # sign and are telling the compiler where to find the
// definitions that this file relies on, those could be in a library (like here), a different file,
// or a header (see chapter 3 : 03_functions_and_headers), they're "basically" the equivalent of a
// python import statement
#include <iostream>
// All lines must be finished by a semicolon, unless they're declaration lines, like functions, etc.
// The "using" statement indicates to the compiler that it should try to assign the calls to that
// namespace first, in this case that cout calls should be assigned to std::cout
using std::cout;
using std::cin;


// To declare a function, we first declare the return type, then the name of the function, then the
// arguments between parentheses, finally we open a curly bracket for the function's body
int main() {
    // cout stands for console output
    // The << symbol is used to send something to a stream, in this case the cout stream
    cout << "Hello, World!" << std::endl;
    cout << "This is awesome!" << std::endl;
    // To declare variables, declare type first, then variable name, then,
    // optionally, assign a value
    int first = 0;
    int second = 0;
    cout << "Enter your first number :" << std::endl;
    cin >> first;  // cin stands for console input
    cout << "Enter your second number :" << std::endl;
    cin >> second;
    cout << "Total is :" << std::endl;
    int total = first + second;
    cout << total << std::endl;
    cout << '\n';
    // All functions must ALWAYS return a value
    return 0;
}
