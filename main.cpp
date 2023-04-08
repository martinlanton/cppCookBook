#include <iostream>
using std::cout;
using std::cin;


int main() {
    cout << "Hello, World!" << std::endl;
    cout << "This is awesome!" << std::endl;
    int first = 0;
    int second = 0;
    cout << "Enter your first number :" << std::endl;
    cin >> first;
    cout << "Enter your second number :" << std::endl;
    cin >> second;
    cout << "Total is :" << std::endl;
    int total = first + second;
    cout << total << std::endl;
    cout << '\n';
    return 0;
}
