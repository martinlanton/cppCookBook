//
// Created by lanto on 2023-05-23.
//
#include <string>
#include "Resource.h"
#include <memory> // This allows us to use shared pointers, etc

// Example of easy memory management
// TODO : finish implementing this
class OtherPerson {
private:
    std::string first;
    std::string last;
    int arbitrarynumber;
    std::shared_ptr<Resource> pResource;

public:
    OtherPerson(std::string, std::string, int);
//    ~OtherPerson();  // We don't need a destructor in this version
    std::string GetFirstName() {return first;}
    std::string GetLastName() {return last;}
    std::string GetName() {return first + " " + last;}
    int const GetNumber() {return arbitrarynumber;}
    void SetNumber(int number) {arbitrarynumber = number;}
    void SetFirstName(std::string firstname) {first = firstname;}
    void AddResource();
    // pResource could be a nullptr when we call GetResourceName, so we make sure to test it
    // (through an immediate if in this case) to avoid making everything blow up. Shared pointers
    // and unique pointers both return True if they point somewhere and False if they don't point
    // anywhere, which makes this verification possible.
    std::string GetResourceName() const {return pResource ? pResource->GetName() : "";}
};
