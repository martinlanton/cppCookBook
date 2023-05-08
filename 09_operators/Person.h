//
// Created by lanto on 2023-05-08.
//
#include <string>

class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;

    // Declaring a function as a friend means that function can access private members of that
    // object, regardless of where it is actually coming from.
    friend bool operator<(int i, Person const& p);

public:
    Person(std::string first, std::string last, int arbitrary);
    ~Person();
    std::string GetName() const;
    int GetNumber() const {return arbitrarynumber;}
    // Functions and member functions can have no return type when they are not returning anything,
    // in this case they need to be declared as "void" type
    void SetNumber(int number) {arbitrarynumber = number;}
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
};
bool operator<(int i, Person const& p);
