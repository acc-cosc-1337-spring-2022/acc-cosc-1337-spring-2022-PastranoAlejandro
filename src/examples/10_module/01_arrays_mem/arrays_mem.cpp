//write code for for stack_array and display each element to screen
#include "arrays_mem.h"
using std::cout;


void use_stack_array()
{
    const auto SIZE = 3;//create constant integer and let c++ decide
    int numbers[SIZE]{1};//telling c++ we want to allocate three slots on the stack array thats stored on the stack memeory
//empty curly brace sets to zero

    for(auto i=0; i< SIZE; i++)
    {
        cout<<numbers[i]<<"\n";



    }
}

void array_months()
{
    const auto NUMBER_OF_MONTHS = 3;
    int month_numbers[NUMBER_OF_MONTHS]{1, 2 ,3};
    std::string month_names[NUMBER_OF_MONTHS]{"Jan", "Feb", "Mar"};

    for(auto i = 0; i < NUMBER_OF_MONTHS; i++)
    {
        cout<<month_numbers[i]<<" "<<month_names[i]<<"\n";
    }




}

void arrays_and_pointers()
{
    const int SIZE = 3;
    int numbers[SIZE]{1,2,3};

    cout<<numbers<<"\n";//address of the first element 

    int* ptr = numbers;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";

    *ptr++;//iterate the pointer
    cout<<*ptr<<"\n";

    *ptr--;//goes back
    cout<<*ptr<<"\n";



}
void display_array(int* nums, const int SIZE)
{
    for (auto i=0; i < SIZE; ++i)
    {
        cout<<nums[i]<<"\n";

    }
}

void populate_times_table(int times_table[][COLS], const int ROWS)
{
    for(auto i = 0; i < ROWS; i ++)
    {
        for(auto j =0; j < COLS; j++)
        {
            times_table[i][j] = (i+1) * (j+1);
        }
    }
    
    
}





void display_times_table(int times_table[][COLS], const int ROWS)
{
    for(auto i =0; i < ROWS; i++)
    {
        for(auto j =0; j<COLS; j++)
        {

            cout<<std::setw(5)<<times_table[i][j];
        }
        cout<<"\n";
    }


}