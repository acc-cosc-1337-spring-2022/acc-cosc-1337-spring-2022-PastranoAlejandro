//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"

using std::unique_ptr; using std::make_unique;
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	/*Shape* circle= new Circle();
	circle->draw();
	Shape* line = new Line();
	line ->draw();

	delete circle;
	delete line;// because we just created old regular pointers and not unique ones


	unique_ptr<Shape> circle1 = make_unique<Circle>();
	circle1->draw();*/
	/*Circle circles[3];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();//one array out of three circles objects
	Shape* circles = new Circle[3];
	circles[0].draw();*/
	/*Shape* shapes = new Shape*[3];//pointer of pointer
	shapes[0] = new Circle();
	shapes[1] = new Line();
	shapes[2] = new Circle();*/






	return 0;
}