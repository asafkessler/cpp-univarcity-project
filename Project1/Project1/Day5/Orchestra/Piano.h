#ifndef _Piano
#define _Piano

#include <iostream>
using namespace std;

class Piano{
public:
	typedef enum{ BLUE, WHITE }COLOR;
private:
	Piano::COLOR color;
	double price;
	string *pFirm = NULL;

public:
	Piano();
	Piano(Piano::COLOR c, double p);
	~Piano();
	void setColor(Piano::COLOR c);
	Piano::COLOR getColor();
	void setPrice(double p);
	double getPrice();
	void print();

};

#endif