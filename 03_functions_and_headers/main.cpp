#include <iostream>

double add(double a, double b) {
    return a + b;
}

double add(double a, double b, double c) {
    return add(add(a, b), c);
}

int main() {
    double result = add(12.7, 13.2);
    std::cout << "The result is : " << result << std::endl;
    return 0;
}
