
#ifndef _CAR_H
#define _CAR_H

#include <iostream>
#include <string>
#include "Engine.h"


using namespace std;

typedef enum {
	RED = 1, BLUE = 2, YELLOW = 3
} COLOR;

#define DEFAULT_COLOR RED
#define DEFAULT_FIRM "Ford"
#define DEFAULT_YEAR 1910
#define DEFAULT_PLATE_NUMBER "111-22-333"



class Wheel{
	double psi;
public:
	Wheel(double p):psi(p){}
};

class Car {
public:
	static const int numOfWheels = 5;
private:
	COLOR color;
	string firm;
	int year;
	string* plateNo;
	Engine *pEngine = NULL;

	Wheel *wheels[numOfWheels];

	static int counter;


	int letters[26];
public:
	Wheel & getWheel(int i)const {
		return *(this->wheels[i]);
	}
	Car(COLOR color, string firm, int year, string plateNo, const Engine & eng);
	Car(COLOR color, string firm, int year, string plateNo);
	Car();
	Car(const Car& other);
	~Car();

	Engine & getEngine()const;
	void setEngine(const Engine & eng);

	COLOR getColor() const;
	void setColor(COLOR color);

	string getFirm() const;
	void setFirm(string firm);

	int getYear() const;
	void setYear(int year);

	void setPlateNo(string* plateNo);
	string* getPlateNo() const;

	void print() const;

	static const int getNumOfWheels();
	static int getCounter();
	static void setCounter(int counter);
	static void incCounter();
	static void decCounter();
};

#endif