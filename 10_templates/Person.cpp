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
    std::cout << "Destructing person : " << GetName() << std::endl;
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

bool operator<(int i, Person const& p)
{
    return i < p.GetNumber();
}
