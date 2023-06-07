#include <string>
#include "Resource.h"


class Person {
private:
    std::string first;
    std::string last;
    int arbitrarynumber;
    Resource* pResource;
public:
    Person(std::string, std::string, int);
    ~Person();
    Person(Person const & p); // This is the copy constructor, it takes another person object by const reference
    Person& operator=(const Person& p); // This is the copy assignment operator, it also takes a const reference
    std::string GetFirstName() {return first;}
    std::string GetLastName() {return last;}
    std::string GetName() {return first + " " + last;}
    int const GetNumber() {return arbitrarynumber;}
    void SetNumber(int number) {arbitrarynumber = number;}
    void SetFirstName(std::string name) {first = name;}
    void AddResource();
};
