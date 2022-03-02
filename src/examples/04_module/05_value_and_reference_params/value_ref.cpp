#include "value_ref.h"

/*
Write function code for pass_by_val_and_ref with
a value int num1 and ref int num2 parameter.
The function assigns 20 to num1 and 50 to num2

@param int val
@param int& val

@return does not return a value
*/



/*
Function pass_by_const_ref 

Try to assign a value to num1, generates error.
@param const int& num

@return does not return a value
*/
void static_var()
{
    static int cnt = 0;
    std::cout<<"cnt"<<cnt<<"\n";
    cnt++;
    std::cout<<"cnt"<<cnt<<"\n";

}
void static_var1()
{
    static int cnt = 0;
    std::cout<<"cnt"<<cnt<<"\n";
    cnt++;
    std::cout<<"cnt"<<cnt<<"\n"; 
}

double get_total(double amount, double rate)
{
    return amount * rate;
}

double get_totals(double amount, double num, double rate)
{
    return amount * num * rate;
}

double get_weekly_pay(double salary)
{
    return salary / 52;
}
double get_weekly_pay(double hours, double rate)
{
    return hours * rate;
}