//
// Created by lanto on 2023-05-15.
//
#include <string>


class Person {
private:
    std::string first;
    std::string last;
    int arbitrarynumber;
public:
    Person(std::string, std::string, int);
    std::string GetFirstName() {return first;}
    std::string GetLastName() {return last;}
    std::string GetName() {return first + " " + last;}
    int const GetNumber() {return arbitrarynumber;}
    void SetNumber(int number) {arbitrarynumber = number;}
    ~Person();
};
