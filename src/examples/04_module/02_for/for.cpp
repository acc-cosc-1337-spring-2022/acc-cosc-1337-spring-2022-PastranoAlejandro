#include "for.h"
//iostream already in header file so you dont need to include here

//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/
void display_numbers(int num)
{
    for(int i = 0; i < num; i++)
    {
        std::cout<<i + 1<<"\n";
    }

}

void display(std::string str)
{
    for(int i=0; i < str.size(); i++)
    {
        std::cout<<str[i]<<"\n";

    }

}
