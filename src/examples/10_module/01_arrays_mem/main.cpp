#include"arrays_mem.h"


int main() 
{
	//use_stack_array();
	// array_months(); 

	//arrays_and_pointers();

    /*const int SIZE = 3;
    int numbers[SIZE]{1,2,3};
	display_array(numbers, SIZE);*/

	int times_table[ROWS][COLS];

	populate_times_table(times_table , ROWS);
	display_array(times_table, ROWS);



	

	return 0;

}