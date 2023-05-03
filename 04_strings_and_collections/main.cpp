#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::to_string;


int main() {
    // As mentioned in previous chapters, variables can be declared without being assigned a value
    string firstPhrase;
    string secondPhrase;

    vector<int> lengths;
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
    // The emplace_back method is often preferable to push_back when using vectors, because it
    // avoids creating a temporary object. The method push_back on the other hand does create a
    // temporary object (a copy?? need to check that). On strings however, there would be no benefit
    // to using an emplace_back method because there is no object creation, therefore the string
    // class only has a push_back method.
    lengths.emplace_back(firstLength);
    lengths.emplace_back(secondLength);

    if (firstLength == secondLength){
        std::cout << "Both lengths are the same length." << std::endl;
        return 0;
    }
    if (firstLength > secondLength){
        std::cout << "The first phrase is longer than the second";
    }
    else {
        std::cout << "The first phrase is shorter than the second";
    }

    std::cout << "The lengths have respective lengths : " << std::endl;
    // For loops over a collection take the following form, where we declare in parentheses the type
    // to which to cast each value, the variable name to use, followed by a colon and then the name
    // of the collection variable to use.
    for (int i : lengths)
    {
        std::cout << to_string(i) << std::endl;
    }


    return 0;
}
