//arrays_mem.h - stack array example
#include<iostream>
#include<iomanip>
#include<string>

const int ROWS = 10;
const int COLS= 10;

//function prototype for stack_array
void use_stack_array();
void array_months();//how developers back then had to work with data structures
void arrays_and_pointers();
void display_array(int* nums, const int SIZE);
//two dimensonal arrays
void populate_times_table(int times_table[][COLS], const int ROWS);
void display_times_table(int times_table[][COLS], const int ROWS);