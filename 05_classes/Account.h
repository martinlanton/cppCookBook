//
// Created by MLA on 15/04/2023.
//
#include <vector>
#include <string>
#include "Transaction.h"

#ifndef INC_05_CLASSES_ACCOUNT_H
#define INC_05_CLASSES_ACCOUNT_H


class Account
{
private:
    int balance;
    std::vector<Transaction> log;
public:
    Account();
    std::vector<std::string> Report();
    bool Deposit(int amount);
    bool Withdraw(int amount);
    int GetBalance() { return balance; }
};


#endif //INC_05_CLASSES_ACCOUNT_H
