#include"vec.h"
#include<string>
#include<vector>

using std::vector;


void loop_string_w_for_range(std::string str)
{
    str = "JOE";
}
void loop_string_w_for_range_ref(std::string& str)
{
    str = "JOE";

    for(auto& ch: str)//iterating by value
    {
        ch = 'z';


    }

}
void my_function(int& num1, int num2)
{
    num1 = 50;
    num2 = 100;
}



void loop_vector_w_index(std::vector<int> nums)
{
    for(int i=0; i < nums.size(); i++)
    {
        nums[i] = -1;

    }
}

/*
Function loop_vector_w_index 
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67

@param none


*/



/*
Function loop_vector_w_index_val 
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>
*/



/*
Function loop_vector_w_index_ref
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>&
*/


/*
Write code for function loop_vector_w_index_const_ref
Displays the incoming parameter vector numbers to screen use indexed loop

@param const vector<int>&
*/

