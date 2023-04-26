//
// Created by lanto on 2023-04-25.
//

#include <iostream>
#include "Person.h"
#include <string>

Person::Person(std::string firstname, std::string lastname, int arbitraty): first(firstname), last(lastname), arbitrarynumber(arbitraty)
{
    std::cout << "Constructing person : " << first << " " << last << std::endl;
}

Person::~Person()
{
    std::cout << "Destructing person : " << first << " " << last << std::endl;
}