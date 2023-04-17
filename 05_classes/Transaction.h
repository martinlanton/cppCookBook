//
// Created by MLA on 15/04/2023.
//
#include <string>
#ifndef INC_05_CLASSES_TRANSACTION_H
#define INC_05_CLASSES_TRANSACTION_H


class Transaction {
private:
    int amount;
    std::string type;

public:
    Transaction(int amt, std::string kind);
    std::string Report();
};


#endif //INC_05_CLASSES_TRANSACTION_H
