#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    int a = 3;
    cout << "a is " << a << endl;
    // Create references (which point to the location of something else) by using the & sign after
    // the type declaration
    int& rA = a;
    // rA is now a reference to "a"
    rA = 5;
    cout << "a is " << a << endl;

    Person John("John", "Smith", 123);
    Person& rJohn = John;
    rJohn.SetNumber(345);
    cout << "John : " << rJohn.GetName() << " " << rJohn.GetNumber() << endl;

    // Pointers can be declared with the * operator
    Person* pJohn = &John;
    // Both of the following syntaxes are valid to access the target of a pointer, although no one
    // uses the first one and the second one is commonly accepted as the proper way
    (*pJohn).SetNumber(235);
    pJohn->SetNumber(236);
    cout << "John : " << John.GetName() << " " << John.GetNumber() << endl;
    cout << "pJohn : " << pJohn->GetName() << " " << pJohn->GetNumber() << endl;

    int* badPointer = nullptr;
    // Dereferencing a null pointer will cause the application to crash
//    * badPointer = 3;  // This would crash the application
    // Instead, we check the pointer first :
    if (badPointer)
    {
        *badPointer = 3;
        cout << *badPointer << endl;
    }

    // pointers can be const too : that means that the pointer location can't be changed to something else and that it can't be used to change the object
    // integer pointers are DIFFERENT from integers
    int* pA = &a;
    // So that means you can't do this :
//    int* pAA = &pA; // This would be an integer pointer (int*) pointing to an integer pointer (int*) instead of pointing to an int (int)
    // Instead, it should be this :
    int** pAA = &pA; // This is an "integer pointer" pointer, that points to the integer pointer pA

    // a const integer pointer points to a const int
    int const * pcA = pA; // note that the const statement is BEFORE the * to specify that the value is constant, not the pointer
    // this means we can't assign a new value to the pointer, like this :
//    *pcA = 4;
    // We can however assign its address to some other integer :
    int j = 3;
    pcA = &j; // This changes the address the pointer looks at

    // pointers can be const, which means we can assign a new value, but NOT a new address.
    int * const cpA = pA; // note the const statement is AFTER the * to specify the fact that the pointer is const, not its value
    *cpA = 4; // Assign a new value is possible
//    cpA = &j; // Assigning a new address is NOT possible

    // pointers AND their value can both be const
    int const * const lol = pA;
    // This means that NEITHER assigning a new value
//    *lol = 4;
    // OR assigning a new address
//    lol = &j;
    // are possible
    // We can however dereference it :
    j = *lol;

    return 0;
}
