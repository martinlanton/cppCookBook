#include <iostream>
#include <string>
using std::string;


int main() {
    string firstPhrase;
    string secondPhrase;

    std::cout << "Enter the first phrase : " << std::endl;
    std::getline(std::cin, firstPhrase);
    std::cout << "Enter the second phrase : " << std::endl;
    std::getline(std::cin, secondPhrase);
    int firstLength = firstPhrase.length();
    int secondLength = secondPhrase.length();

    if (firstLength == secondLength){
        std::cout << "Both phrases are the same length." << std::endl;
        return 0;
    }
    if (firstLength > secondLength){
        std::cout << "The first phrase is longer than the second";
    }
    else {
        std::cout << "The first phrase is shorter than the second";
    }
    return 0;
}
