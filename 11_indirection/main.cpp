#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    int a = 3;
    cout << "a is " << a << endl;
    // Create references (which point to the location of something else) by using the & sign after
    // the type declaration
    int& rA = a;
    // rA is now a reference to a
    rA = 5;
    cout << "a is " << a << endl;

    Person john("John", "Smith", 123);
    Person& rJohn = john;
    rJohn.SetNumber(345);
    cout << "John : " << rJohn.GetName() << " " << rJohn.GetNumber() << endl;
    return 0;
}
