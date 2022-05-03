#include<cstddef>//for std::size_t very large int
#include<iostream>
#include<memory>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector();//default constructor with no parameters gives 0
    Vector(const Vector& v);//Rule 1 of 3 of legacy C++ Rule of 3
    Vector& operator = (const Vector& v);//copy assignment Rule 2 of 3 legacy C++ Rule of 3
    Vector(std::size_t s);//vector that accepts very large int
    Vector(Vector&& v);//Rule 4 of 5 for Rule of 5 - modern c++
    Vector& operator=(Vector&& v);//Rule 5 of 5 - modern c++
    std::size_t Size()const{return size;}
    int& operator[](std::size_t i) const{return elements[i];}//read cout<<v[0]
    int& operator[](std::size_t i) {return elements[i];}//write v[0]
    ~Vector();//destructor deletes memory , Rule 3 of 3 legacy c++




private:
    std::size_t size; //track vector size, stack variable size because it isnt pointer
    int* elements;   //dynamic array of ints


};


//free functions - NOT PART OF CLASS
void use_stack_vector();
void use_heap_vector();
Vector get_vector();










#endif