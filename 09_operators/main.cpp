#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int i=0;
    // classic arithmetic operators
    i += 2;
    i *= 3;
    i -= 2;
    i /= 4;

    // specific incrementation operators
    // return i and increments it AFTER (so j = old value of i, i = new value, which is i+1)
    int j = i++;
    // increments i and returns the new value (so j = new value of i)
    j = ++i;
    // same thing for decremental operations, returns old value and THEN decreases i
    j = i--;
    // decreases and returns new value
    j = --i;

    // Example
    i = 2;
    j = 0;
    while (i<101)
        // Here using an "immediate if" in line to increment j directly based on the result of the
        // function call
        // Essentially increments i (for the while loop) and then passes the old value to the
        // function
        j += IsPrime(i++)?1:0;

    // Comparisons operators
    bool k;
    // Less than
    k = (i < j);
    // More than
    k = i > j;
    // Less than or equal
    k = i <= j;
    // More than or equal
    k = i >=j;
    // Equal
    k = i == j;
    // Different
    k = i != j;
    // And : To note, FALSE and anything is false, so if the first value is false, it will shortcut
    // and stop, it doesn't need to check the second value
    k = i && j;
    // Or : To note, TRUE or anything is true, so if the first value is true, it will shortcut and
    // stop, it doesn't need to check the second value
    k = i || j;
    // Not
    k = !i;

    // Bitwise operators
    // & is AND, | is OR, ^ is NOT
    // Bit shift operators
    // << to shift all the bits left
    // >> to shift all the bits right
    // Those operators are often overloaded in order to simplify the syntax (like when using cout)
    return 0;
}


bool IsPrime(int x)
{
    bool prime = true;
    // For each number from 2 to until i more than x/i
    for (int i = 2; i <= x/i; i = i+1)
    {
        int factor = x/i;
        if (factor*i == x)
        {
            prime = false;
            break;
        }
    }
    return prime;
}