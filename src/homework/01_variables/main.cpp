#include "variables.h"
#include<iostream>
//write include statements


//write namespace using statement for cout
using std::cout;  using std::cin;



int main()
{
	
	int num;
	cout<<"Enter a number to be multiplied: ";
	cin>>num;
	int result;
	result = multiply_numbers(num);
	cout<<"Here is the product: "<<result<<"\n";
	
	int num1;
	num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Here is the product but with 4 as the number entered: "<<result;


	return 0;
}
