#ifndef _CAR
#define _CAR

#include <iostream>
#include <string>
#include "Engine.h"
#include "Wheel.h"

#define DEFUALT_YEAR 1990
#define DEFUALT_FIRM "Ford"
#define DEFUALT_COLOR Car::Black
#define DEFAULT_PLATE_NUMBER "111-22-333"


using namespace std;
	


class Car
{
public:
	static int counter;


public:
	typedef enum { Null, Yellow, Blue, Black, White }Colors;
	Car();
	Car(Car::Colors m_color, int m_year, string m_firm  );
	Car(Car::Colors m_color, int m_year, string m_firm, const Engine & m_engine);
	Car(const Car & rhs);
	

	//////// GET ///////
	Car::Colors getColor() const;
	string getFirm() const;
	int getYear() const;
	static int getcounter();
	Engine & getEngine() const;
	Wheel & getWheel(int wheelNum) const;



	/////// SET //////
	void setFirm(string firm) ;
	void setYear(int Year);
	void setColor(Car::Colors color);
	static void setcounter(int m_counter);
	void setEngine(const Engine & rEngine);
	void setWheel(int wheelNum, const Wheel & rWheel);


	///// func /////
	void printAll() const;
	

	~Car();

private:
	Car::Colors color;
	int year;
	string firm;
	Engine *pEngine;
	Wheel *pWheel[5];


	////// FUNC ///////
	string stringColor(Car::Colors color) const;
	void Car::printWheels() const;
	

	

};

#endif