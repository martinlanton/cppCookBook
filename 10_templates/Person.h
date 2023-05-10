//
// Created by lanto on 2023-05-08.
//
#include <string>

class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;

public:
    Person(std::string first, std::string last, int arbitrary);
    ~Person();
    std::string GetName() const {return firstname + " " + lastname;};
    int GetNumber() const {return arbitrarynumber;}
    void SetNumber(int number) {arbitrarynumber = number;}
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
};
bool operator<(int i, Person const& p);
