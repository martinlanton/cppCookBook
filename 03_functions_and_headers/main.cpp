#include <iostream>
#include "functions.h" //headers must be brought in both in the file using it and in the file implementing it
// By convention we bring in local files with double quotes, and standard or external libraries with <> signs

int main() {
    double result = add(12.7, 13.2);
    std::cout << "The result is : " << result << std::endl;
    return 0;
}
