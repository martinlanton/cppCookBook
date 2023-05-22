#include <iostream>
#include "Person.h"
#include <string>

Person::Person(std::string firstname, std::string lastname, int arbitraty):
    first(firstname),
    last(lastname),
    arbitrarynumber(arbitraty),
    pResource(nullptr) // We're initializing the resource as a nullptr to make sure it is safe to delete when the time comes
{
    std::cout << "Constructing person : " << first << " " << last << std::endl;
}

Person::Person(Person const & p)
{
    // This is the copy constructor, it takes a Person object as reference, and then we can use that reference to point ot its own values
    pResource = new Resource(p.pResource->GetName());
}

Person::~Person()
{
    // Since we have a member function that adds a free store variable, we need to make sure we delete it when we delete the object
    delete pResource;
    std::cout << "Destructing person : " << first << " " << last << std::endl;
}

Person& Person::operator=(const Person &p)
{
    // This is a simple example of the copy assignment operator and should never be used as is as it
    // doesn't test for self assignment (among others), which would result in deleting and object
    // and THEN asking that same object its resource, which would obviously blow up
    delete pResource;
    pResource = new Resource(p.pResource->GetName());
    return *this;
}

void Person::AddResource()
{
    // Doing the following without deleting the resource first would create a memory leak because it
    // means every time we call that member function we are providing a pointer to a different
    // Resource object, and that means we no longer have a mean to delete the old Resource object.
    // We just created a memory leak.
    delete pResource;
    pResource = new Resource("Resource for " + GetName());
    std::cout << "Constructing resource for person : " << first << " " << last << std::endl;
}
