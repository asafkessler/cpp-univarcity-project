
#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Shape{

public:
	Rectangle(float width, float length);
	float get_area();
	float get_perimeter();

private:
	float width, length;

};

#endif 
