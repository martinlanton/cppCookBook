//
// Created by lanto on 2023-05-08.
//

#include <iostream>
#include "Person.h"
#include <string>

Person::Person(std::string first, std::string last, int arbitrary): firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
    std::cout << "Constructing person : " << firstname << " " << lastname << std::endl;
}

Person::~Person()
{
    std::cout << "Destructing person : " << firstname << " " << lastname << std::endl;
}

// overloading operator for one operation signature : comparing with another Person object
bool Person::operator<(Person const& p) const
{
    return arbitrarynumber < p.arbitrarynumber;
}

// overloading operator for another operation signature : comparing with an int
bool Person::operator<(int i) const
{
    return arbitrarynumber < i;
}

// Operator overloading can be done through either member functions are through free functions :
// This is a free function that overloads the < operator, in this case with 2 arguments, to
// overload the operator for the int type, in this case to compare an int and a Person (in that
// order).
// In this case we can use the private .arbitrarynumber member of the class because in the class
// declaration we have indicated that the free function operator<(int i, Person const& p) is a
// "friend" of the Person class, which means it can use its private members.
// We are only doing this here for the sake of example, even though this is not generally a good
// practice, unless absolutely required, and we should prefer instead the use of public member
// functions, which would give something like :
// return i < p.getNumber();
bool operator<(int i, Person const& p)
{
    return i < p.arbitrarynumber;
}
