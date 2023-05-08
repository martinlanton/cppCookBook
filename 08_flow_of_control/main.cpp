#include <iostream>
using std::cout;
using std::cin;


int main() {
    int x;
    bool something;
    cout << "Enter a number, 0 or negative to quit" << std::endl;
    cin >> x;
    while (x > 0)
    {
        switch(x)
        {
            case 1:
                cout << "You entered 1" << std::endl;
                break;
                // Several cases can have the same statement, as follows.
                something = true;
            case 2:
            case 3:
                cout << "You entered 2 or 3" << std::endl;
                something = false;
                break;
            case 4:
                // Skipping the break statement means that in the case of 4 we will actually execute
                // both cases 4 and 5 (but no further because the case 5 contains itself a break)
                cout << "You entered 4" << std::endl;
            case 5:
                cout << "You entered 5" << std::endl;
                something = true;
                break;
            default:
                cout << "You entered something else than 1-5" << std::endl;
                something = false;
        }
        cout << "Enter a number, 0 or negative to quit" << std::endl;
        cin >> x;
    }

    // "Immediate if" is a ternary operator, essentially acts as an if/else statement to assign a
    // value
    int result = something? 7 : 302;
    // This is equivalent to
    // if (something)
    // {result = 7;}
    // else
    // {result = 302;}
    cout << result << std::endl;
    return 0;
}
