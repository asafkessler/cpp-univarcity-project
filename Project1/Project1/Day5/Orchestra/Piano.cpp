#include "Piano.h"

Piano::Piano() :price(100), color(WHITE)
{
	pFirm = new string("Yamaha");
}
Piano::Piano(Piano::COLOR c, double p) : price(p), color(c)
{
	pFirm = new string("Yamaha");
}
Piano::~Piano()
{
	if (pFirm != NULL){
		delete pFirm;
		pFirm = NULL;
	}
}
void Piano::setColor(Piano::COLOR c)
{
	this->color = c;
}

Piano::COLOR Piano::getColor()
{
	return this->color;
}
void Piano::setPrice(double p)
{
	this->price = p;
}
double Piano::getPrice()
{
	return this->price;
}
void Piano::print()
{
	cout << "Piano: " << "Color: " << color << endl;
}