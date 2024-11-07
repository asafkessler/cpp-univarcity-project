#include <iostream>
#include <string>

using namespace std;

typedef enum
{
	RED = 0,
	GREEN = 1,
	BLUE = 2
} Color;

class Car
{
private:
	Color color;
	string firm;
	int year;
	string *plateNo = NULL;

public:
	~Car()
	{
		//if (plateNo != NULL){
		//	delete plateNo;
		//}
	}
	Car()
	{
		this->year = 2017;
		//plateNo = new string("55-234-56");
	}
	Car(Color newColor, string newFirm, int newYear):
		color(newColor), firm(newFirm), year(newYear)
	{
		//setColor(newColor);
		//setFirm(newFirm);
		//setYear(newYear);
		//plateNo = new string("55-234-56");
	}
	Car(const Car & rhs):color(rhs.color), firm(rhs.firm), year(rhs.year)
	{
		plateNo = new string(*rhs.plateNo);
	}


	Color getColor()
	{
		return this->color;
	}

	void setColor(Color color)
	{
		this->color = color;
	}

	string getFirm()
	{
		return this->firm;
	}

	void setFirm(string firm)
	{
		if (firm.size() > 0){
			this->firm = firm;
		}
		else{
			cout << "Not a valid firm";
		}
	}

	int getYear()
	{
		return this->year;
	}

	void setYear(int year)
	{
		if (year >= 1900 && year <= 2018)
		{
			this->year = year;
		}
		else
		{
			cout << "Not a valid year";
		}
	}


	//void setPlate(string src)
	//{
	//	if (this->plateNo != NULL){
	//		delete(this->plateNo);
	//	}
	//	this->plateNo = new string(src);

	//}

	//void setPlate(string *src)
	//{
	//	if (this->plateNo != NULL){
	//		delete(this->plateNo);
	//	}
	//	this->plateNo = new string(*src);

	//}

	void print()
	{
		cout << "Color: " << this->getColor() << endl;
		cout << "Firm: " << this->getFirm() << endl;
		cout << "Firm: " << this->getYear() << endl;
		cout << "----------------" << endl;
	}
};


void factory()
{
	Car *c1 = new Car(Color::RED, "Ford", 2016);
	c1->print();
	delete(c1);
	Car c2(Color::BLUE, "Mazda", 2016);
	c2.print();

	Car c3(c2);

	int yyy = 654;
}

int main()
{

	factory();



	int yyy = 543;
}