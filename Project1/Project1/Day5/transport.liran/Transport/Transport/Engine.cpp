#include "Engine.h"


int Engine::counter = 0;;



Engine::Engine()
{
	counter++;
	this->type = DEFUALT_TYPE;
	this->horsePower = DEFUALT_HORES_POWER;
}
Engine::Engine(Engine::Type m_type, int m_horsePower) :
type(m_type), horsePower(m_horsePower)
{
	counter++;
}
Engine::Engine(const Engine & rhs):
type(rhs.type), horsePower(rhs.horsePower)
{
	counter++;
}


//////// SET ///////
void Engine::setType(Engine::Type type)
{
	this->type = type;
}
void Engine::setHorsePower(int horsePower)
{
	if (horsePower < 0){
		horsePower = 0;
		return;
	}
	this->horsePower = horsePower;
}

/////// GET //////
Engine::Type Engine::getType() const
{
	return this->type;
}
int Engine::getHorsePower() const
{
	return this->horsePower;
}

///// func /////
void Engine::printAll() const
{
	cout << "Type: " << typeToString(getType()) << endl;
	cout << "Horse Power: " << getHorsePower() << endl;
	
}

string Engine::typeToString(Engine::Type type) const
{
	switch (type)
	{
	case Engine::Type::Disel:
		return "Disel";
		break;
	case Engine::Type::Soler:
		return "Soler";
		break;
	case Engine::Type::Electric:
		return "Electric";
		break;
	default:
		return "None";
		break;
	}
}


Engine::~Engine()
{
	counter--;
}






