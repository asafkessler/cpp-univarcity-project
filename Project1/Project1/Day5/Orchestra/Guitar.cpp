#include "Guitar.h"

//static variable definition
int Guitar::counter = 0;
const double Guitar::e = 2.71;

Guitar::Guitar() :price(100), color(Guitar::COLOR::WHITE), numOfStrings(6)
{
	counter++;
	pfirm = new string("fender");
}
Guitar::Guitar(Guitar::COLOR c, double p, int nos, string f) : 
	price(p), color(c), numOfStrings(nos)
{
	counter++;

	pfirm = new string(f);
}

Guitar::Guitar(  const Guitar & rhs) : 
	color(rhs.color), price(rhs.price), numOfStrings(rhs.numOfStrings)
{
	//pfirm = rhs.pfirm; BAD!!!! shallow copy

	pfirm = new string(   *(rhs.pfirm)      );   //GOOD deep copy
	counter++;
}

Guitar::~Guitar()
{
	counter--;
	if (this->pfirm){
		delete pfirm;
	}
}
void Guitar::setColor(Guitar::COLOR c)
{
	this->color = c;
}

Guitar::COLOR Guitar::getColor()
{
	return this->color;
}
void Guitar::setPrice(double p) 
{
	this->price = p;
}
double Guitar::getPrice()
{
	return this->price;
}
void Guitar::print()
{
	cout << "Guitar: " << "Color: " << color << ", " << numOfStrings << 
		" strings" <<endl;
}

int Guitar::getCounter()
{
	return Guitar::counter;
}
void Guitar::setCounter(int c)
{
	Guitar::counter = c;
}


void Guitar::setFirm(string s)
{
	if (this->pfirm != NULL){
		delete this->pfirm;
	}
	this->pfirm = new string(s);
}
string & Guitar::getFirm()
{
	return *(this->pfirm);
}
