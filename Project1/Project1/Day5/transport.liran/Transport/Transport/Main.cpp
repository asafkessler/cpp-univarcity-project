#include <iostream>

#include "Car.h"
using namespace std;





int main()
{

	Car c1(Car::Colors::Black, 2012, "Ford");

	c1.printAll();

	Car *c2=new Car();
	c2->printAll();

	Car *c3 = new Car(*c2);
	c3->setWheel(4,c1.getWheel(1));
	c3->printAll();

	Wheel w1 = c3->getWheel(2);


	delete(c2);
	delete(c3);

	

	

	getchar();

	return 1;
}

