//bank_account.h
#include <stdlib.h>
#include<time.h>


//Header Guards -- helps bankaccount not get defined more than once
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
// always put header guard on class


class BankAccount
{

public:
    BankAccount(){balance = get_balance_from_db();}//Default synthesized constructor -- creates it by default only if we dont have any other constructors!
    BankAccount(int b) : balance(b){/*empty function code*/}
    int get_balance() const;//telling C++ we will provide function code later
    void deposit(int amount);
    void withdraw(int amount);



private:   //only class has access to private
    int balance;
    int get_balance_from_db();


};

#endif