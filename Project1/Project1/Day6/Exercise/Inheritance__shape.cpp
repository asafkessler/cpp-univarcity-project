#include "Inheritance__shape.h"
#include "Inheritance__Triangle.h"
#include "Inheritance__Rectangle.h"
#include "Inheritance__Square.h"
#include <iostream>

using namespace std;


Shape::Shape(){
	area = 0;
	perimeter = 0;
}

float Shape::get_area(){
	return area;
}
