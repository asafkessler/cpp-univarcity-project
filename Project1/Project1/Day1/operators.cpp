#include <iostream>
using namespace std;

#define NUM_OF_LETTERS	26
static const int NUM_OF_DIGITS = 9;

int main()
{

	int myNumber = 9;
	//char  Char = 'e';

	int a = 1, b = 4, c = 0;

	//Arithtmetic operators
	a = b + c;
	a = b - c;
	a = b * c;
	a = a / b;
	a = 1;
	int d = 20 % 7;

	//Unary operators
	a = ++b;
	a = b++;
	a = b + 1;
	c = d--;
	c = --d;

	//Comparison operators
	bool r;
	r = (a == b);
	a <= b;
	a <  b;
	a >= b;
	a > b;
	a != b;

	//Logical Operators
	bool a = true;
	bool b = false;
	c = a && b;
	c = a || b;
	c = (a || b) && b;
	c = !a;

	// Bitwise
	int a = 26;    //00011010
	int b = 4;     //00000100
	int c = a | b; //00011110 = 30
	int d = a & b; //00000000
	int e = a ^ b; //00011110 = 30
	int f = ~a;





	
	getchar(); 
	
	return 1;
}


