#include "Engine.h"

Engine::Engine(TYPE type, int cyl, int hp) : type(type), cyl(cyl), hp(hp) 
{
}

Engine::Engine() : type(DEFAULT_TYPE), cyl(DEFAULT_CYL), hp(DEFAULT_HP) 
{
}

Engine::Engine(const Engine& other) : type(other.type), cyl(other.cyl), hp(other.hp) 
{
}

Engine::~Engine()
{
}

TYPE Engine::getType() const {
	return this->type;
}

void Engine::setType(TYPE type) {
	this->type = type;
}
int Engine::getCyl() const 
{
	return this->cyl;
}

void Engine::setCyl(int cyl) 
{
		this->cyl = cyl;
}

int Engine::getHp() const
{
	return this->hp;
}

void Engine::setHp(int hp)
{
	this->cyl = hp;
}

void Engine::print() const 
{
cout << "Engine type is: "<<getType()<<"No. of Cylinders: " << getCyl() << ", No. of Horse Powers: " << getHp() << endl;
}