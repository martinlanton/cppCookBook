#include <iostream>
#include "Person.h"

using std::string;

int main() {
    // Doing things like follow will just create a local variable that can't be reused outside the
    // braces
    {
        Resource localResource("local");
        string localString = localResource.GetName();
    }
    Resource* pResource = new Resource("Created with new");
    string newString = pResource->GetName();
    int j = 3;
    delete pResource;

    // This can't work because we have deleted pResource already, it'll just go BOOM
//    string string3 = pResource->GetName();
    // Deleting things twice is also bad and will also cause things to go BOOM
    // It is a good idea to set local store variables to point to a nullptr when we delete them to
    // make sure we don't reuse the pointer unknowingly as nullptr exceptions are usually easier to
    // read AND it's safe to call delete on a nullptr which allows us to call delete again if need
    // be, whereas calling delete again on a deallocated variable would just cause everything to
    // crash

    // VERY IMPORTANT : when you call "new" on something, at some point you need to call delete on
    // it. If you don't, or your program returns before delete is called on it, then you have a
    // memory leak.
    // It is generally speaking better to just design your classes in a way that avoids using the
    // free store altogether, in order to avoid having to do manual memory management.

    Person john("John", "Smith", 123);
    john.AddResource();
    john.SetFirstName("Jane");
    john.AddResource();
    // The following means we create a SECOND object identical to the first one, therefore the
    // "copy constructor" (and destructor) will be called at the appropriate times
    Person jane = john;
    // This also means that if we delete the resource in the destructor, we need to create it in the
    // "copy constructor" in order to avoid the program crashing while trying to delete a resource
    // that was never created in the first place.


    return 0;
}
