#include "Inheritance__Shape.h"
#include "Inheritance__Triangle.h"
#include "Inheritance__Rectangle.h"
#include "Inheritance__Square.h"
#include <iostream>

using namespace std;


Triangle::Triangle(float base, float height){
	base = base;
	height = height;
}

float Triangle::get_area(){
	return (0.5*base*height);
}
