//bank_account.h
#include <stdlib.h>
#include<time.h>
#include <iostream>

//Header Guards -- helps bankaccount not get defined more than once
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
// always put header guard on class


class BankAccount
{
friend void friend_display_balance(BankAccount account);
friend std::ostream& operator<<(std::ostream& out, const BankAccount& account);
friend std::istream& operator>>(std::istream& in, BankAccount& account);

public:
    BankAccount(){balance = get_balance_from_db();}//Default synthesized constructor -- creates it by default only if we dont have any other constructors!
    BankAccount(int b) : balance(b){/*empty function code*/}
    virtual int get_balance() const;//telling C++ we will provide function code later
    virtual void deposit(int amount) final;
    virtual void withdraw(int amount) final;





private:   //only class has access to private
    int balance;
    int get_balance_from_db();


};

#endif

//free function
void display_balance(const BankAccount& account);//by value or copy
BankAccount get_account();
