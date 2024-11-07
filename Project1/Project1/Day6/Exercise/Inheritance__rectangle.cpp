#include "Inheritance__Shape.h"
#include "Inheritance__Triangle.h"
#include "Inheritance__Rectangle.h"
#include "Inheritance__Square.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle(float width, float length){
	width = width;
	length = length;
}

float Rectangle::get_area(){
	return width*length;
}

float Rectangle::get_perimeter(){
	return 2 * (length + width);
}
