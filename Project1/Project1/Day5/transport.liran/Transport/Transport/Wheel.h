#ifndef _WHEEL
#define _WHEEL

#include <iostream>
#include <string>

using namespace std;

#define DEFUALT_DIMINATION 25
#define DEFUALT_AIRPRESSUER 34
#define DEFUALT_AIRPRESSUER_RESERVED 30

class Wheel
{
public:
	static int counter;


public:
	Wheel();
	Wheel(int m_dimanition,int m_airPressuer);
	Wheel(const Wheel & rhs);


	//////// SET ///////
	void setDimanition(int dimanition);
	void setAirPressuer(int airPressuer);


	/////// GET //////
	int getDimanition() const;
	int getAirPressuer() const;

	///// func /////
	void printAll() const;



	~Wheel();

private:
	int dimanition;
	int airPressuer;



};

#endif