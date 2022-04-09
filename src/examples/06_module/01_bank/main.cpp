#include "atm.h"
#include "checking_account.h"
#include<iostream>
#include<time.h>
#include<memory>

using std::cout; using std::cin; using std::unique_ptr; using std::make_unique;


int main()
{
	srand (time(NULL));//random generator 

	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);//point to instance of bank account
	cout<<account->get_balance();//Bankaccount getbalance function exectued 

	
	/*BankAccount account;
	display_balance(account);
	friend_display_balance(account);
	cout<<account;

	cin>>account;
	cout<<account;

	
	int menu_option;
	char cont;

	do
	{



	
	std::cout<<"\nACC Bank\n";
	std::cout<<"1 - Balance\n";
	std::cout<<"2 - Deposit\n";
	std::cout<<"3 - Withdraw\n";
	std::cin>>menu_option;

	
	switch(static_cast<atm_menu>(menu_option-1))//-1 because index for enum starts at 0 static_cast just a class for enum but for readiblity for later cleans up code basically
	{
		case atm_menu::balance:
			atm.display_balance();
			break;
		case atm_menu::deposit:
			atm.make_deposit();
			break;
		case atm_menu::withdraw:
			atm.make_withdraw();
			break;
		default:
			std::cout<<"Invalid Selection";

	}
		std::cout<<"Continue type y \n";	
		std::cin>>cont;
	}while(cont == 'y' || cont == 'Y');	






	
	/*BankAccount account; //creating variable 
	cout<<"Account: "<<account.get_balance()<<"\n";

	BankAccount account1(100); //creating another variable
	cout<<"Account1: "<<account1.get_balance()<<"\n";

	display_balance(account);
	BankAccount account3 = get_account(); 
	display_balance(account3);*/


	return 0;
}