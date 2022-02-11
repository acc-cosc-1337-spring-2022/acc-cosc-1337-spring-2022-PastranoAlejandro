#include "expressions.h"

//constant 

const double tax_rate = 0.0675;
//its 0.0675 because it was orginally a percentage which is now a decimal or a double


//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//tax amount function

double get_sales_tax_amount(double meal_amount)
{
	return tax_rate * meal_amount;	
}

//tip amount function
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}

