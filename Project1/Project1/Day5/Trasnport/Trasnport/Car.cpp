
#include "Car.h"

const int Car::numOfWheels;

Car::Car(COLOR color, string firm, int year, string plateNo, const Engine & eng) : 
	color(color), firm(firm), year(year) 
{
	if (firm.size() == 0) {
		this->firm = DEFAULT_FIRM;
	}
	if (year <= 1900) {
		this->year = DEFAULT_YEAR;
	}
	this->plateNo = new string(plateNo);
	this->pEngine = new Engine(eng);

	for (int i = 0; i < 5; i++)
	{
		this->wheels[i] = new Wheel(30);
	}
}

Car::Car(COLOR color, string firm, int year, string plateNo) : 
	color(color), firm(firm), year(year) 
{
	if (firm.size() == 0) {
		this->firm = DEFAULT_FIRM;
	}
	if (year <= 1900) {
		this->year = DEFAULT_YEAR;
	}
	this->plateNo = new string(plateNo);
	this->pEngine = new Engine();
}

Car::Car() : color(DEFAULT_COLOR), firm(DEFAULT_FIRM), year(DEFAULT_YEAR) {
	this->plateNo = new string(DEFAULT_PLATE_NUMBER);
	this->pEngine = new Engine(TYPE::GAS, 4, 120);
}

Car::Car(const Car& other) : color(other.color), firm(other.firm), year(other.year) 
{
	this->plateNo = new string(*other.plateNo);
	this->pEngine = new Engine(*(other.pEngine));
}

Car::~Car(){
	if (this->plateNo != NULL) {
		delete this->plateNo;
	}
	if (this->pEngine != NULL) {
		delete this->pEngine;
	}
}

COLOR Car::getColor() const {
	return this->color;
}

void Car::setColor(COLOR color) {
	this->color = color;
}

string Car::getFirm() const {
	return this->firm;
}

void Car::setFirm(string firm) {
	if (firm.size() > 0) {
		this->firm = firm;
	}
}

int Car::getYear() const {
	return this->year;
}

void Car::setYear(int year) {
	if (year >= 1900) {
		this->year = year;
	}
}

string* Car::getPlateNo() const{
	return this->plateNo;
}

void Car::setPlateNo(string* plateNo) {
	if (this->plateNo != NULL) {
		delete(this->plateNo);
	}
	this->plateNo = new string(*plateNo);
}

Engine & Car::getEngine() const{
	return *(this->pEngine);

}

void Car::setEngine(const Engine & eng)
{
	if (this->pEngine != NULL) {
		delete(this->pEngine);
	}
	this->pEngine = new Engine(eng);
}

void Car::print() const {
	string plate;
	if (this->plateNo != NULL) {
		plate = *this->plateNo;
	}
	cout << "Firm: " << this->getFirm() << ", year: " << this->getYear() << ", color: " << this->color
		<< ", plate number: " << plate << endl;


	this->pEngine->print();
}

// static variables and functions
const int Car::numOfWheels = 4;

const int Car::getNumOfWheels() {
	return Car::numOfWheels;
}

int Car::counter = 0;

int Car::getCounter() {
	return Car::counter;
}

void Car::setCounter(int counter) {
	Car::counter = counter;
}

void Car::incCounter() {
	Car::counter++;
}

void Car::decCounter() {
	Car::counter--;
}

