#include <iostream>
using std::cout;
using std::cin;


int main() {
    int firstNumber;
    int secondNumber;
    bool continueExecuting = true;
    int answer;

    while(continueExecuting)
    {
        cout << "Enter your first number : ";
        cin >> firstNumber;
        cout << "Enter your second number : ";
        cin >> secondNumber;

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

        if (answer == 0)
        {
            continueExecuting = false;
        }

    }
    return 0;
}
