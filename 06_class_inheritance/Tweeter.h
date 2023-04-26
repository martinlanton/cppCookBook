//
// Created by lanto on 2023-04-25.
//
#include <string>
// Obviously first include the header for the parent class
#include "Person.h"

class Tweeter :
        public Person
{
private:
    std::string twitterhandle;
public:
    Tweeter(std::string first,
            std::string last,
            int arbitrary,
            std::string handle);
    ~Tweeter();
};
