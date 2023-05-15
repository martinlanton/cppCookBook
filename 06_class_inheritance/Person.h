//
// Created by lanto on 2023-04-25.
//
#include <string>


class Person {
private:
    std::string first;
    std::string last;
    int arbitrarynumber;
public:
    Person(std::string, std::string, int);
    std::string getFirstName() {return first;}
    std::string getLastName() {return last;}
    int const getNumber() {return arbitrarynumber;}
    ~Person();
};
