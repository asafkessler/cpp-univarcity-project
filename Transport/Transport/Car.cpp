#include "Car.h"


Car::~Car() { // will be called when cleaning the new objects from the class
	if (pCarPlait != NULL) {
		delete pCarPlait;
	}
}

Car::Car() {

}

Car::Car(Color newColor, string firm, int year) :
carColor(newColor), carFirm(firm), carYear(year)// להשתמש בשמות לא זהים לדאטא ממברס
{
	pCarPlait = new string("awesome1997");
}

Car::Car(const Car & rhs) : carYear(rhs.carYear), carColor(rhs.carColor), carFirm(rhs.carFirm)
{
	pCarPlait = new string(*rhs.pCarPlait);
}

Car::Car(Color newColor, string firm, int year, string object):
carColor(newColor), carFirm(firm), carYear(year)
{
	pCarPlait = new string(object);
}


int Car::getYear() {
	return this->carYear;
}

Color Car::getColor() {
	return this->carColor;
}

string Car::getFirm() {
	return this->carFirm;
}

string* Car::getByRefernce() {
	return this->pCarPlait;
}
string Car::getByValue() {
	return (*pCarPlait);// לא נוכל להשתמש ב 'זה' כאן בגלל שהוא לא אחד מה דאטא ממברס
}

void Car::setFirm(string firm)
{
	if (firm.size() > 0){
		this->carFirm = firm;
	}
	else{
		cout << "Not a valid firm";
	}
}

void Car::setYear(int newYear)
{
	if (newYear >= 1900 && newYear <= 2018)
	{
		this->carYear = newYear;
	}
	else
	{
		cout << "Not a valid year";
	}
}

void Car::setColor(Color color) {
	if (color > Color::Blue) {
		cout << "we dont have your color" << endl;
	}
	else {
		this->carColor = color;
	}
}

void Car::setPointer(string &pNewCarPlait) {
	this->pCarPlait = &pNewCarPlait;
}

void Car::setPointerValue(string *src) {
	if (this->pCarPlait != NULL){
		delete(this->pCarPlait);
	}
	this->pCarPlait = new string(*src);
}

void Car::print()
{
	cout << "Color: " << this->getColor() << endl;
	cout << "Firm: " << this->getFirm() << endl;
	cout << "Year: " << this->getYear() << endl;
	cout << "CarPlait: " << this->getByValue() << endl;
	cout << "----------------" << endl;
}
