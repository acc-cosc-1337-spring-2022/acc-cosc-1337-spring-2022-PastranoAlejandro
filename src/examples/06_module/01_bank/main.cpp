#include"bank_account.h"
#include<iostream>
#include<time.h>
using std::cout;


int main()
{
	srand (time(NULL));
	
	BankAccount account; //creating variable 
	cout<<"Account: "<<account.get_balance()<<"\n";

	BankAccount account1(100); //creating another variable
	cout<<"Account1: "<<account1.get_balance()<<"\n";

	return 0;
}