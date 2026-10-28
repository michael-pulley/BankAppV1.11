//
// Created by Mikey on 10/20/2026.
//
#ifndef BANKAPPV1_BANKACCOUNT_H
#define BANKAPPV1_BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string m_accHolder;
    std::string m_accNum;
protected:
    double m_balance;
public:
    BankAccount(std::string accHolder, std::string accNum, double balance);
    virtual ~BankAccount(); // default destructor
    virtual void deposit(double amount);
    virtual bool withdraw(double amount)=0; // BankAccount is now an abstact class
    virtual void display();
};


#endif //BANKAPPV1_BANKACCOUNT_H
