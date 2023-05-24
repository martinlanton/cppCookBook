//
// Created by lanto on 2023-05-23.
//

#include "OtherPerson.h"


OtherPerson::OtherPerson(std::string firstname, std::string lastname, int arbitraty): first(firstname), last(lastname), arbitrarynumber(arbitraty)
{
    std::cout << "Constructing person : " << first << " " << last << std::endl;
}

OtherPerson::~OtherPerson()
{
    std::cout << "Destructing person : " << first << " " << last << std::endl;
}