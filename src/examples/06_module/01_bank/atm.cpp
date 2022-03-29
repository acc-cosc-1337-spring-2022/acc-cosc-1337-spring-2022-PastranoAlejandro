//atm.cpp
#include "atm.h"

void ATM::display_balance()const
{

    std::cout<<"Balance: "<<account.get_balance()<<"\n";


}

void ATM::make_deposit()
{
    int amount;
    std::cout<<"\nEnter deposit amount: ";
    std::cin>>amount;

    account.deposit(amount);
}

void ATM::make_withdraw()
{
    int amount;
    std::cout<<"\nEnter withdraw amount: ";
    std::cin>>amount;
    account.withdraw(amount);
}