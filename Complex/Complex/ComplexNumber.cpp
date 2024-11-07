#include "ComplexNumber.h"

ComplexNumber::~ComplexNumber() {
}

ComplexNumber::ComplexNumber() {
}

ComplexNumber::ComplexNumber(double newRealpart, double newImaginarypart) :
realpart(newRealpart), imaginarypart(newImaginarypart)
{
	// 1)
	//this->realpart = newRealpart;
	//this->imaginarypart = newImaginarypart;

	// 2)
	//realpart = newRealpart;
	//imaginarypart = newImaginarypart;

	// 3)
	//setRealNumber(newRealpart);
	//setImaginarypart(newImaginarypart);
}

ComplexNumber::ComplexNumber(const ComplexNumber & rhs) :
realpart(rhs.realpart), imaginarypart(rhs.imaginarypart)
{

}

int ComplexNumber::getRealNumber() {
	return (this->realpart);
}

int ComplexNumber::getImaginarypart() {
	return (this->imaginarypart);
}

void ComplexNumber::setRealNumber(double realNumber) {
	if (realNumber < 0) {
		while (realNumber < 0) {
			cout << "Type realNumber again, bigger then 0" << endl;
			cin >> realNumber;
		}
		this->realpart = realNumber;
	}
	else {
		this->realpart = realNumber;
	}
}

void ComplexNumber::setImaginarypart(double imaginarypart) { // where i do input tests -> IN THE SETTERS 
	if (imaginarypart < 0) {
		while (imaginarypart < 0) {
			cout << "Type imaginarypart again, bigger then 0" << endl;
			cin >> imaginarypart;
		}
		this->imaginarypart = imaginarypart;
	}
	else {
		this->imaginarypart = imaginarypart;
	}
}

void ComplexNumber::print()
{
	cout << "RealNumber: " << this->getRealNumber() << endl;
	cout << "Imaginarypart: " << this->getImaginarypart() << endl;
	cout << "----------------" << endl;
}


