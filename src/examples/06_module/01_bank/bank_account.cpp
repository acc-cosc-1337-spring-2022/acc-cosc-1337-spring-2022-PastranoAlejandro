//bank_account.cpp
#include "bank_account.h"

int BankAccount::get_balance() const//so noone can change the balance, unless your absolutely sure you need to modify just const it
{
    return balance;

}

int BankAccount::get_balance_from_db()
{
    return rand() % 10000 + 1; //random number
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

//free function outside of class scope
void display_balance(const BankAccount& account)
{
    
    std::cout<<"Free function balance: "<<account.get_balance()<<"\n";


}

BankAccount get_account()
{
    BankAccount a;
    return a;

}

//friend function
void friend_display_balance(BankAccount account)
{
    
    std::cout<<"Friend Function balance: "<<account.get_balance();

}

//overload operator
std::ostream& operator<<(std::ostream& out, const BankAccount& account)
{
    out<<"Operator overload balance: "<< account.balance;

    return out;
}


std::istream& operator>>(std::istream& in, BankAccount& account)
{
    int amount;
    std::cout<<"Enter Amount: ";
    in>>amount;
    account.deposit(amount);

    return in;
}
