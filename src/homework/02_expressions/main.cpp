//write include statements
#include "../src/homework/02_expressions/expressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;  using std::cin;

/*
My main function
*/
int main()
{
	//double variables for the function
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	//captures input from user and asigns to meal amount
	cout<<"Enter meal amount: ";
	cin>>meal_amount;
	
	//assigning the tax amount variable
	tax_amount = get_sales_tax_amount(meal_amount);

	//captures input from user and assigns to tip rate
	cout<<"Enter tip rate: ";
	cin>>tip_rate;
	
	//assigning the tip amount variable
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	
	//assigning the total variable
	total = tip_amount + tax_amount + meal_amount;
	
	
	
	//seperates reciept from user input
	cout<<"----------------------"<<"\n";

	//reciept
	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";
	return 0;
}
