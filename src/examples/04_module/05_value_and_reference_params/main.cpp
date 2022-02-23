#include<iostream>
using std::cout;

int main() 
{
	auto num = 5;//int variable
	int &num_ref = num;// int reference variable maybe like a clone

	cout<<num<<"\n";
	cout<<num_ref<<"\n";

	num_ref = 10;//changes the num value but same location cannot change the address

	cout<<num<<"\n";
	cout<<num_ref<<"\n";


	return 0;
}