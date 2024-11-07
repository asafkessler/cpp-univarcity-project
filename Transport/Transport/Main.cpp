#include <iostream>
#include <string>
using namespace std;
#include "Car.h"

int main() {
	
	Car myCar1(Color::Blue, "MerB", 2017);
	Car myCar2();
	Car myCar3(Color::Red, "BMW", 2017, "7ASAF888");

	string *s1 = myCar3.getByRefernce();
	string s2 = myCar3.getByValue();

	myCar1.setPointerValue(s1);
	cout << myCar1.getByValue() << endl;

	getchar();
	getchar();
}
