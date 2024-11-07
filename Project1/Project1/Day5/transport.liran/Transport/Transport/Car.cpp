#include "Car.h"


int Car::counter = 0;

	Car::Car(){
		counter++;
		color = DEFUALT_COLOR;
		year = DEFUALT_YEAR;
		firm = DEFUALT_FIRM;
		this->pEngine = new Engine();
		for (int i = 0; i < 4; i++)
		{
			*(pWheel + i) = new Wheel();
		}
		*(pWheel + 4) = new Wheel();
		pWheel[4]->setAirPressuer(30);
		
	}
	Car::Car(Car::Colors m_color, int m_year, string m_firm) :
		color(m_color), year(m_year), firm(m_firm)
	{
		counter++;
		this->pEngine = new Engine();

		for (int i = 0; i < 5; i++)
		{
			//*(pWheel + i) = new Wheel();
			pWheel[i] = new Wheel();

		}
		//*(pWheel + 4) = new Wheel();
		pWheel[4]->setAirPressuer(30);

		if (year <= 1990){
			year = 1990;
		}

		if (m_firm.size() <= 0){
			firm = "";
		}

	}
	Car::Car(Car::Colors m_color, int m_year, string m_firm, const Engine & m_engine) :
		color(m_color), year(m_year), firm(m_firm)
	{
		counter++;
		this->pEngine = new Engine(m_engine);

		if (year <= 1990){
			year = 1990;
		}

		if (m_firm.size() <= 0){
			firm = "";
		}

	}
	Car::Car(const Car & rhs) :color(rhs.color), year(rhs.year), firm(rhs.firm)
	{
		counter++;
		this->pEngine = new Engine(*(rhs.pEngine));
		for (int i = 0; i < 5; i++)
		{
			this->pWheel[i] = new Wheel(*(rhs.pWheel[i]));
		}
	}

	///////// SET /////////////
	void Car::setColor(Colors color)
	{
		this->color = color;
	}
	void Car::setYear(int year) 
	{
		if (year >= 1990){
			this->year = year;
		}
		else{
			this->year = 0;
		}
	}
	void Car::setFirm(string firm) {
		if (firm.size() > 0){
			this->firm = firm;
		}
		else{
			this->firm = "";
		}
	}
	void Car::setcounter(int m_counter)
	{
		if (m_counter > 0)
		{
			counter = m_counter;
		}
		else
		{
			counter = 0;
		}
	}
	void Car::setEngine(const Engine & rEngine)
	{
		if (this->pEngine != NULL){
			delete(pEngine);
		}
		this->pEngine = new Engine(rEngine);
	}
	void Car::setWheel(int wheelNum,const Wheel & rWheel)
	{
		if (this->pWheel[wheelNum] != NULL){
			delete(pWheel[wheelNum]);
			}
		this->pWheel[wheelNum] = new Wheel(rWheel);
		
	}
	
	

	//////// GET ///////////
	Car::Colors Car::getColor() const{
		return this->color;
	}
	int Car::getYear() const{
		return this->year;
	}
	string Car::getFirm() const{
		if (firm.size() > 0)
			return this->firm;
		else
			return "Null";
	}
	int Car::getcounter()
	{
		return counter;
	}
	Engine & Car::getEngine() const
	{
		return *(this->pEngine);
	}
	Wheel & Car::getWheel(int wheelNum) const
	{
		return *(this->pWheel[wheelNum]);
	}
	

	//////// FUNC /////////////
	void Car::printAll() const{
		cout << "Car: " << endl;
		cout << "Firm: " << this->getFirm() << endl;
		cout << "Year: " << this->getYear() << endl;
		cout << "Color: " << this->stringColor(getColor()) << endl;
		cout << "Engine: "<<endl; this->pEngine->printAll();
		printWheels();
		cout << "--------------------" << endl;
		
		
	}
	void Car::printWheels() const
	{
		cout << "Wheels: " << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "Wheel " << i << ": "; this->pWheel[i]->printAll();
			
		}
	}
	string Car::stringColor(Car::Colors color) const{
		switch (color)
		{
		case Car::Colors::Black:
			return "Black";
			break;
		case Car::Colors::Yellow:
			return "Yellow";
			break;
		case Car::Colors::Blue:
			return "Blue";
			break;
		case Car::Colors::White:
			return "White";
			break;
		default:
			return "No color";
			break;
		}
	}

	Car::~Car()
	{
		counter--;
		if (this->pEngine != NULL)
		{
			delete(this->pEngine);
		}
		for (int i = 0; i < 5; i++)
		{
			if (this->pWheel[i] != NULL)
			{
				delete(this->pWheel[i]);
			}
		}
		delete[] pWheel;
		
	}

