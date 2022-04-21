#include<memory>
#include "dynamic_memory.h"

using std::cout; using std::unique_ptr; using std::make_unique;
//unique ptrs lets the coder not need to delete it
int main() 
{
	/*int* num = new int(5);//create dynamic memory 
	cout<<"Raw/Naked Pointer Value: "<<*num<<"\n";//use memory
	delete num;//delete memory
	num = nullptr;

	unique_ptr<int> num1 = make_unique<int>(10);
	cout<<"\nnum1 value: "<<*num1;*/
	//use_dynamic_memory(3);
	//limit_dynamic_memory_scope(3);
	use_dyanmic_array(3);
	cout<<"Exited Function\n";



	return 0;
}