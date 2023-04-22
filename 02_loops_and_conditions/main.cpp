#include <iostream>
using std::cout;
using std::cin;


int main() {
    // As previously mentioned, variable declaration do not require us to assign a value in cpp.
    int firstNumber;
    int secondNumber;
    bool continueExecuting = true;
    int answer;

    // while loops are always declared with the keyword while followed by parentheses in which is
    // passed the condition to evaluate for the continuity of the loop, this can be a variable,
    // like here, or a boolean statement, such as an equality, etc.
    while(continueExecuting)
    {
        cout << "Enter your first number : ";
        cin >> firstNumber;
        cout << "Enter your second number : ";
        cin >> secondNumber;

        // if statements are always declared using the if keyword followed by parentheses, between
        // which the condition is to be declared, this is similar to the while statement mentioned
        // previously
        if (firstNumber > secondNumber)
        {
            cout << "The first number is greater than the second number." << std::endl;
        }
        if (firstNumber == secondNumber)
        {
            cout << "Both numbers are equal." << std::endl;
        }
        if (firstNumber < secondNumber)
        {
            cout << "The first number is smaller than the second number." << std::endl;
        }

        cout << "Do you wish to keep comparing numbers? Type 0 for no, 1 for yes.";
        cin >> answer;

        // As is the case in python, make sure that the condition to exit the while loop is properly
        // modified inside the loop to avoid infinite loops
        if (answer == 0)
        {
            continueExecuting = false;
        }

    }
    return 0;
}
