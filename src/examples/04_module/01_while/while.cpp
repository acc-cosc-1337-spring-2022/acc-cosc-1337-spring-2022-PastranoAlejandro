#include "while.h"
#include<string>
#include<iostream>
//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30
int sum_of_squares(int num)
{
    auto sum = 0;

    while(num > 0)
    {
        sum = sum + num * num;//sum+= would also work for the addition

        num = num -1;//counting backwards can also use num-- which will result in same result
    }

    return sum;

}


//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/
//void function will just display
void display(std::string str)
{
    auto index = 0;
    
    
    while(index < str.size())
    {
        //will just use std::string since just using once
        std::cout<<str[index]<<"\n";
        index++;


    }

}


