//
// Created by lanto on 2023-05-19.
//
#pragma once
#include <string>


class Resource {
private:
    std::string name;
public:
    Resource(std::string n);
    ~Resource(void);
    std::string GetName() const {return name;}
};
