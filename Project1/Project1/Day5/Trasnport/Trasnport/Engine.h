#ifndef _Engine_H
#define _Engine_H

#include <iostream>
#include <string>

using namespace std;

typedef enum {
	GAS = 1, ELECTRIC = 2
} TYPE;

#define DEFAULT_TYPE GAS
#define DEFAULT_CYL 50
#define DEFAULT_HP 100

class Engine {
private:
	TYPE type;
	int cyl;
	int hp;

public:
	Engine(TYPE type, int cyl, int hp);
	Engine();
	Engine(const Engine& other);
	~Engine();

	TYPE getType() const;
	void setType(TYPE color);

	int getCyl() const;
	void setCyl(int cyl);

	int getHp() const;
	void setHp(int hp);

	void print() const;
};

#endif