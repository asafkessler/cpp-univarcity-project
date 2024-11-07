#ifndef _DOG
#define _DOG

#include <iostream>
#include <string>
using namespace std;

class Dog {

private: // defining the security measures.
	int	age;
	double weight;
	string name;
	string *pChipValue = NULL; // WE WILL DELETE every pointer we init in out class

public:
	//static variable declaration
	const static int numberOfLegs;
	static int counterOfDogs;
	const  string defaultChipNumber;

public:

	Dog(const Dog & rhs);
	//  not all the extended methods are built ... this in not yet been fully built. 
	Dog(int newAge, double newWeight, string newName);// the constructor is part of building all the 'this', the constructor it self knowing the object fields address, couse using it the object just starting being built
	Dog();// the constructor is part of building all the 'this', the constructor it self knowing the object fields address, couse using it the object just starting being built
	~Dog();// called by the delete function

	int getAge();
	double getWeight();
	string getName();
	string & getByRefernce();
	string getByValue();
	void setAge(int newAge);
	void setWeight(double newWeight);
	void setName(string newName);
	void setPointerValue(string src);
	void print();
};

#endif // !_DOG