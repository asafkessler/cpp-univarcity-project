#ifndef _COMPLEX_NUMBER
#define _COMPLEX_NUMBER

#include <iostream>
#include <string>
using namespace std;

class ComplexNumber
{
private: // to reach the class data members with out getters and setters they should be public
	double realpart;
	double imaginarypart;

// if there is no constractor cant do new
public:
	ComplexNumber(); // i put just the decleretion of our class methods.
	ComplexNumber(double newRealpart, double newImaginarypart);
	ComplexNumber(const ComplexNumber & rhs);
	~ComplexNumber();
	int getRealNumber();
	int getImaginarypart();
	void setRealNumber(double realNumber);
	void setImaginarypart(double imaginarypart);
	void print();
}; 

/*
	operator overloding : + , ++ , = , - , --  for classes, what it means and how to use it.
	one of the default operators which are very importent for any class
	is = - the assingment operetor.
	OF COURSE that there is operetors which we cant create an overlowded operetor 
	for them like ? & ....
*/


/*
const ComplexNumber operator+(const ComplexNumber &rhs)const
{
ComplexNumber result(this->realPart + rhs.realPart,
this->imaginaryPart + rhs.imaginaryPart);

return result;
}
*/
#endif