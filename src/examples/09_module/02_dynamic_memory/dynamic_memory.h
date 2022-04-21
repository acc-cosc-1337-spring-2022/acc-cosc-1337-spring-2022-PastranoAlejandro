//Create allocate and release function
#include<iostream>
#include<memory>

void use_dynamic_memory(const int num);
int* get_dynamic_memory(const int num);
void limit_dynamic_memory_scope(const int num);
int* get_dynamic_array(const int num);
void delete_dynamic_array(int* array);//get pointer that points to dynamic array and delete it 
void use_dyanmic_array(const int num);