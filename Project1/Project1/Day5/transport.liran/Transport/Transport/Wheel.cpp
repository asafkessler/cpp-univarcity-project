

#include "Wheel.h"

int Wheel::counter = 0;;



Wheel::Wheel()
{
	counter++;
	this->airPressuer = DEFUALT_AIRPRESSUER;
	this->dimanition = DEFUALT_DIMINATION;
}
Wheel::Wheel(int m_dimanition, int m_airPressuer) :
dimanition(m_dimanition), airPressuer(m_airPressuer)
{
	counter++;
}
Wheel::Wheel(const Wheel & rhs) :
dimanition(rhs.dimanition), airPressuer(rhs.airPressuer)
{
	counter++;
}


//////// SET ///////
void Wheel::setDimanition(int dimanition)
{
	if (dimanition < 0){
		this->dimanition = 0;
		return;
	}
	this->dimanition = dimanition;
}
void Wheel::setAirPressuer(int airPressuer)
{
	if (airPressuer < 0){
		this->airPressuer = 0;
		return;
	}
	this->airPressuer = airPressuer;
}


/////// GET //////
int Wheel::getDimanition() const
{
	return this->dimanition;
}
int Wheel::getAirPressuer() const
{
	return this->airPressuer;
}

///// func /////
void Wheel::printAll() const
{
	cout << "Dimanition " << this->getDimanition() ;
	cout << " AirPressuer " << this->getAirPressuer() << endl;
}



Wheel::~Wheel()
{
	counter--;
}





