#include <iostream>
/*
Write function prototype for pass_by_val_and_ref with
a value int and ref int parameter.
*/



/*
Write function prototype for pass_by_const_ref with
const int reference parameter
*/
void static_var();

void static_var1();

double get_total(double amount, double rate=.0825);//default parameter has to be the last one 

double get_totals(double amount, double num=.5, double rate=.0825);//aslong as they are to the far right its okay, dont make the compiler guess

double get_weekly_pay(double salary);
double get_weekly_pay(double hours, double rate);//cplpl uses the parameters to differentate the functions