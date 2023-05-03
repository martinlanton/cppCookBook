#include <iostream>
using std::cout;
using std::cin;


int main() {
    int x;
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
            case 2:
            case 3:
                cout << "You entered 2 or 3" << std::endl;
                break;
            case 4:
                // Skipping the break statement means that in the case of 4 we will actually execute
                // both cases 4 and 5 (but no further because the case 5 contains itself a break)
                cout << "You entered 4" << std::endl;
            case 5:
                cout << "You entered 5" << std::endl;
                break;
            default:
                cout << "You entered something else than 1-5" << std::endl;
        }
        cout << "Enter a number, 0 or negative to quit" << std::endl;
        cin >> x;
    }
    return 0;
}
