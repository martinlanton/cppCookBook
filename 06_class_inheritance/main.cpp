#include "Tweeter.h"
#include <iostream>


int main() {
    Person p1("John", "Doe", 1234);
    {
        Tweeter t1("Jane", "Smith", 5678, "@JaneSmith123");
        std::string name = t1.getLastName();
    }
    std::cout << "After innermost block" << std::endl;
    std::string originalname = p1.getLastName();
    return 0;
}
