#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num =5;
	int& num_ref = num;

	cout<<"Num Value: "<<num<<"\n";
	cout<<"Num memory address: "<<&num<<"\n";
	cout<<"Num Value via num_ref: "<<num_ref<<"\n";
	cout<<"Num ref using & operator: "<<&num_ref<<"\n";

	num_ref = 10;

	cout<<"Num Value: "<<num<<"\n";
	cout<<"Num Value via num_ref: "<<num_ref<<"\n";

	int num4 = 1000;
	num_ref = num4;
	cout<<"Num4 Value via num_ref: "<<num_ref<<"\n";//still referencing same memory just changes value
	cout<<"Num ref using & operator: "<<&num_ref<<"\n";//same location as before just overides the value

	cout<<"Num4 memory address: "<<&num4<<"\n";


	int num1 = 20;
	int* num1_ptr = &num1;//not dynamic memory

	cout<<"Num1: "<<num1<<"\n";
	cout<<"Num1 memory location: "<<&num1<<"\n";
	cout<<"Num1 value via num1_ptr: "<<num1_ptr<<"\n";//why didnt display value
	cout<<"Num1 value via num1_ptr: "<<*num1_ptr<<"\n";//need to put * to display value
	cout<<"Num1_ptr memory location: "<<&num1_ptr<<"\n";

	int num2 = 100;
	num1_ptr = &num2;
	cout<<"Num2 value via num1_ptr: "<<*num1_ptr<<"\n";//need to put * to display value



	return 0;
}