#include "vector.h"

using std::cout;
Vector::Vector() : size(0)
{



}


Vector::Vector(std::size_t s) : size(s), elements{new int[s]()}//create dynamic array of size s
{
    cout<<"Constructor(s)-create memory"<<elements<<"\n";

}



Vector::~Vector()//always be called when class being removed from memory, we create in function scope to assure it gets deleted
{
    cout<<"Destructor-delete memory at"<<elements<<"\n";
    delete[] elements;//needed brackets because it is an array

}

//FREE FUNCTIONS - not part of class
void use_stack_vector()
{
    Vector v(3); //constructor Vector9s) is executed, dynamic memory created

}

void use_heap_vector()
{
    Vector* v = new Vector(3);//create dynamic memory(vector), once your using the word new your telling c++ you got this, so you have to delete yourself
    //use memory
    delete v;//delete memory, if you dont delete memory youe eseintally create memory leak


}


Vector get_vector()
{
    Vector v(3);
    return v;

}


/*
Copy Constructor - constructor designed to copy everything but somewhat unique 
1 Initialize size for v1 from v
2 Initialize memory for v1
3 Copy elements from v to v1

*/

Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
{
    cout<<"Execute copy constructor"<<elements<<"\n";

    for(std::size_t i =0; i<v.size; ++i)
    {
        elements[i] = v.elements[i];
    }

}

/*
1- Get v.elements memory
2- Get size from v
3- Point v.elements to nothing(nullptr); set v size to 0
*/

Vector::Vector(Vector&& v)//this will be v1
: size{v.size}, elements{v.elements}
{
    cout<<"Move constructor"<<elements<<"\n";
    v.size = 0;
    v.elements = nullptr;


}

/*
1- clear orginal dynamic memory from v(eliminate memory leak)
2- point elements to v.elements
3- get size from v
4- point v.elements to nullptr
5- set v.size to 0


*/

Vector& Vector::operator=(Vector&& v)
{
    cout<<"Move assignment delete memory"<<elements<<"\n";
    delete elements;
    elements = v.elements;
    cout<<"Move assignment "<<elements<<"\n";
    size = v.size;
    v.elements = nullptr;
    v.size = 0;
    return *this;

}