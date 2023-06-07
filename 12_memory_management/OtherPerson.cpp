//
// Created by lanto on 2023-05-23.
//
#include <iostream>
#include "OtherPerson.h"


// We no longer need to initialize the pointer for the resource
OtherPerson::OtherPerson(std::string firstname, std::string lastname, int arbitraty): first(firstname), last(lastname), arbitrarynumber(arbitraty)
{
    std::cout << "Constructing other person : " << first << " " << last << std::endl;
}

// We don't even need a destructor, and it's actually better to avoid having one altogether to avoid
// any confusion regarding the rule of 3
//OtherPerson::~OtherPerson()
//{
//    std::cout << "Destructing other person : " << first << " " << last << std::endl;
//}

void OtherPerson::AddResource()
{
    pResource.reset();
    pResource = std::make_shared<Resource>("Resource for " + GetName());
}