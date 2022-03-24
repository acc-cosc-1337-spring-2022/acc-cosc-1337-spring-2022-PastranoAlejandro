//bank_account.cpp
#include "bank_account.h"

int BankAccount::get_balance() const//so noone can change the balance, unless your absolutely sure you need to modify just const it
{
    return balance;

}

int BankAccount::get_balance_from_db()
{
    return rand() % 1000 + 1; //random number
}

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    

    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;

    }
}