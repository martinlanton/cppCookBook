//
// Created by lanto on 2023-04-25.
//
// Obviously first include the header for the parent class
#include "Tweeter.h"
#include <iostream>
#include <string>

Tweeter::Tweeter(
            std::string first,
            std::string last,
            int arbitrary,
            std::string handle):
        // Constructor for parent class runs first, this happens right after the colon, before
        // passing the other arguments, such as the twitter handle here
        Person(first, last, arbitrary),
        twitterhandle(handle)
{
    // Then constructor for this class
    std::cout << "Constructing tweeter : " << twitterhandle << std::endl;
}

Tweeter::~Tweeter()
{
    // Then this class's destructor runs
    std::cout << "Destructing tweeter : " << twitterhandle << std::endl;
    // Finally, not visible here, the parent class destructor runs last
}
