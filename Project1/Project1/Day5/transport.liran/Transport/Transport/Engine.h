#ifndef _ENGINE
#define _ENGINE

#include <iostream>
#include <string>

using namespace std;

#define DEFUALT_TYPE Engine::Disel
#define DEFUALT_HORES_POWER 80

class Engine
{
public:
	static int counter;


public:
	typedef enum{ None,Disel,Soler,Electric }Type;
	Engine();
	Engine(Engine::Type m_type,int m_horsePower);
	Engine(const Engine & rhs);


	//////// SET ///////
	void setType(Engine::Type type);
	void setHorsePower(int horsePower);

	/////// GET //////
	Engine::Type getType() const;
	int getHorsePower() const;

	///// func /////
	void printAll() const;
	string typeToString(Engine::Type type) const;


	~Engine();

private:
	Engine::Type type;
	int horsePower;



};

#endif