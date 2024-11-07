#include <iostream>
#include <string>
using namespace std;
#include "ComplexNumber.h"

int main() {

	ComplexNumber myCN(3, 5);
	myCN.print();

	
	ComplexNumber *pmyCN1 = new ComplexNumber(10, 10);
	ComplexNumber *pmyCN2 = new ComplexNumber(10, 20);
	
	getchar();
	getchar();
}