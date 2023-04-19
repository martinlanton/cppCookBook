#include <iostream>
using std::cout;

#include "Account.h"

int main()
{
    Account a1;
    a1.Deposit(90);
    cout << "After depositing 90$" <<
        "balance is " << a1.GetBalance() << std::endl;

    for (auto s : a1.Report())
    {
        cout << s << std::endl;
    }

    a1.Withdraw(50);
    if (a1.Withdraw(110))
    {
        cout << "Second withdrawal succeeds" << std::endl;
    }

    cout << "After withdrawing $50 then $110" << std::endl;
    for (auto s : a1.Report())
    {
        cout << s << std::endl;
    }

    return 0;
}
