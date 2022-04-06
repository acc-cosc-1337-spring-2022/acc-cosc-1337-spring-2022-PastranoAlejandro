//checking_account.cpp
#include "checking_account.h"


int CheckingAccount::get_balance() const
{
    //return balance we do not have access to balance because it is private variable in bank account class
    return BankAccount::get_balance() + 5;

}