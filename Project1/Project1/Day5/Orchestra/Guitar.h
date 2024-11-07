#ifndef _GUITAR
#define _GUITAR

#include <iostream>
using namespace std;

class Guitar{//Dog
public:
	typedef enum{RED = 5, BLUE, WHITE, ORANGE}COLOR;
private:
	Guitar::COLOR color;
	double price;
	int numOfStrings;
	string *pfirm;
	
public:
	//static variable declaration
	static int counter;
	const static double e;

public:
	Guitar();
	Guitar(Guitar::COLOR c, double p, int nos, string f);
	Guitar(const Guitar & rhs);
	~Guitar();
	void setColor(Guitar::COLOR c);
	Guitar::COLOR getColor();
	void setPrice(double p);
	double getPrice();
	void print();

	void setFirm(string s);
	string & getFirm();


	static int getCounter();
	static void setCounter(int c);

};

#endif