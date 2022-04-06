//checking_account.h
#include "bank_account.h"


#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount//inherits functinality from bankaccount class
{
public:
    CheckingAccount(){} //intially c++ creates default construtor, default needed to exectue code without parameter
    CheckingAccount(int b) : BankAccount(b) {;}//execute the bankaccount constructor
    int get_balance() const;


};







#endif