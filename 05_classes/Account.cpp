//
// Created by MLA on 15/04/2023.
//

#include "Account.h"
using std::vector;
using std::string;
using std::to_string;

Account::Account() : balance(0)
{
}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transaction: ");
    for (auto t : log)
    {
        report.push_back(t.Report());
    }
    report.push_back("----------");
    return report;
}