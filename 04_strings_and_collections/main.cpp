#include <iostream>
#include <string>
using std::string;


int main() {
    // As mentioned in previous chapters, variables can be declared without being assigned a value
    string firstPhrase;
    string secondPhrase;

    std::cout << "Enter the first phrase : " << std::endl;
    // The std::getline function allows us to pull all the words typed in the stream passed as first
    // argument (in this case std::cin, the console input) and put them in the second argument, this
    // allows us to avoid getting words one by one, which would, with the following code, put one
    // word per variable if we were to use the >> operator
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
