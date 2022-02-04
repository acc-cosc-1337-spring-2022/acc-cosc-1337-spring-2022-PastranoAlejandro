//write include statements
#include "input.h"
#include<iostream>


//write namespace using statements
using std::cout;  using std::cin;

/*
Capture units and rate values from keyboard.
Call the get_total function by passing units and rates variables to it.
Save the get_total return value to a variable named total.
Display the total:

Total: 100

*/
int main() 
{
	int units; //like setting empty variable in python
	double rate, total;
	
	cout<<"Enter units: ";
	cin>>units; //capture whole number from user
	cout<<"Enter rate :";
	cin>>rate; //get data from user


	total =  get_total(units, rate);

	cout<<"Total : "<<total<<"\n";

	return 0;
}