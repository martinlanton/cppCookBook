//
// Created by lanto on 2023-05-23.
//
#include <string>

// Example of easy memory management
// TODO : finish implementing this
class OtherPerson {
private:
    std::string first;
    std::string last;
    int arbitrarynumber;
public:
    OtherPerson(std::string, std::string, int);
    std::string GetFirstName() {return first;}
    std::string GetLastName() {return last;}
    std::string GetName() {return first + " " + last;}
    int const GetNumber() {return arbitrarynumber;}
    void SetNumber(int number) {arbitrarynumber = number;}
    ~OtherPerson();
};
