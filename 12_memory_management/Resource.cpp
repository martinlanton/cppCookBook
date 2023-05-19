//
// Created by lanto on 2023-05-19.
//
#include "Resource.h"
#include <iostream>

using std::cout;
using std::endl;


Resource::Resource(std::string n): name(n)
{
    cout << "Constructing " << name << endl;
}

Resource::~Resource(void)
{
    cout << "Destructing " << name << endl;
}