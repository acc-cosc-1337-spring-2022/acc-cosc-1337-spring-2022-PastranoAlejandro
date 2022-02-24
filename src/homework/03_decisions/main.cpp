#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"


int main() 
{
	string user_input;
	cout<<"MAIN MENU"<<"\n";
	cout<<"\n"<<"1 - Letter grade using if"<<"\n";
	cout<<"2 - Letter grade using switch"<<"\n";
	cout<<"3 - Exit"<<"\n";
	cin>>user_input;

	int grade;

	if(user_input == "1")
	{
		cout<<"You have selected to get a letter grade using if"<<"\n";
		cout<<"Enter a number between 0 and 100: "<<"\n";
		cin>>grade;
		cout<<get_letter_grade_using_if(grade)<<" Is your letter grade"<<"\n";


	}
	if(user_input == "2")
	{
		cout<<"You have selected to get a letter grade using switch"<<"\n";
		cout<<"Enter a number between 0 and 100: "<<"\n";
		cin>>grade;
		cout<<get_letter_grade_using_switch(grade)<<" Is your letter grade"<<"\n";
	}
	if(user_input =="3")
	{
		cout<<"Exiting the program"<<"\n";

	}
	return 0;
}