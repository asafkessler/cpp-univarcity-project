#include <iostream>
#include "Car.h"
//#include "Engine.h"

using namespace std;

int main()
{
	Car c1( RED, "Ford", 2016, "43-645-65");
	c1.print();

	Engine e1(TYPE::GAS, 16, 500);
	Car c2( RED, "Ford", 2016, "43-645-65", e1);
	c2.print();

	Car *pC3 = new Car(RED, "Toyota", 2014, "43-645-55");
	pC3->print();
	delete pC3;

	Wheel galgal =  pC3->getWheel(2);


	getchar();
}