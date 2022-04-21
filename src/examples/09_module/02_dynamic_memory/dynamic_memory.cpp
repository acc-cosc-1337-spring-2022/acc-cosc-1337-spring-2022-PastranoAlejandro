#include "dynamic_memory.h"
using std::cout; using std::shared_ptr;
//
void use_dynamic_memory(const int num)
{
    int* num_ptr = new int(num);//create dynamic memory array of num elements
    num_ptr[0] = 1;
    num_ptr[1] = 2;
    num_ptr[2] = 3;


    cout<<num_ptr[0]<<"\n";
    delete num_ptr;

    

}

int* get_dynamic_memory(const int num)
{
    return new int(num);//create and return dynamic memory

}

void limit_dynamic_memory_scope(const int num)
{
    int* nums = get_dynamic_memory(num);
    nums[0] = 5;
    cout<<nums[0]<<"\n";
    delete nums;




}

int* get_dynamic_array(const int num)
{
    cout<<"Create memory\n";
    return new int(num);

}


void delete_dynamic_array(int* array)
{
    cout<<"Delete memory\n";
    delete array;


}


void use_dyanmic_array(const int num)
{
    shared_ptr<int[]>nums(get_dynamic_array(num), delete_dynamic_array);//shared ptr delete its it for you

    nums[0] = 10;
    cout<<nums[0]<<"\n";
    cout<<"Exiting use dynamic array function......\n";



}
