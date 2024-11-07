#ifndef _CAR
#define _CAR
#include <iostream>
#include <string>
using namespace std;

typedef enum{
	Red = 1,
	Green,
	Blue,
}Color;

class Car {

private:
	int	carYear;
	Color carColor;
	string carFirm;
	string *pCarPlait = NULL;

	// הסינטקס הנכון להגדרה של רמת הבטיחות של פונקציה היא שימוש באופרטור נקודותיים
public:

	~Car();
	Car(Color newColor, string firm, int year, string object);
	Car();
	Car(Color newColor, string firm, int year);// להשתמש בשמות לא זהים לדאטא ממברס
	Car(const Car & rhs);
	int getYear();
	Color getColor();
	string getFirm();
	string* getByRefernce();
	string getByValue();
	void setFirm(string firm);
	void setYear(int newYear);
	void setColor(Color color);
	void setPointer(string &pNewCarPlait);
	void setPointerValue(string *src);
	void print();

};

#endif // !_CAR
