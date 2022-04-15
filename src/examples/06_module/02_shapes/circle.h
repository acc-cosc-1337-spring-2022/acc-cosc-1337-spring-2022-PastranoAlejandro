//circle.h
#include "shape.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape
{
public:
    void draw() override{std::cout<<"Draw Cirlce\n"};//if circle does not override circle is an abstract class instead of a concrete

};



#endif