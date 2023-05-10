#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


// Declaring templates is done through the use of the "template" keyword, and the declaration of
// arguments as <class T>, the T could be name something else, but it is convention to use the
// capital T to mean "type"
template <class T>
// It is then followed by the declaration of the actual template, which is in this case pretty
// similar to a free function. In this case, that function uses the < operator, which means it needs
// to be implemented for every object we call it on.
// It is also a good idea to pass it as a const reference to avoid creating extra objects and to
// avoid modifying the original object.
T maximum(T const& t1, T const& t2)
{
    return t1 < t2? t2: t1;
}


int main() {
    cout << "max of 33 and 44 is " << maximum(33, 44) << endl;
    string s1 = "Hello";
    string s2 = "world";
    cout << "Max of " << s1 << " and " << s2<< " is " << maximum(s1, s2) << endl;

    Person p1("John", "Smith", 123);
    Person p2("Jane", "Doe", 456);
    cout << "Max of " << p1.GetName() << " and " << p2.GetName() << " is " << maximum(p1, p2).GetName() << endl;
    return 0;
}
