#include "Dog.h"

//static variable definition
int Dog::counterOfDogs= 0;
const int Dog::numberOfLegs = 4;
const string defaultChipNumber = "aThY78";

Dog::Dog(const Dog & rhs) : age(rhs.age), weight(rhs.weight), name(rhs.name)
{
	pChipValue = new string(*(rhs.pChipValue));
}

Dog::Dog(int newAge, double newWeight, string newName) :
age(newAge), weight(newWeight), name(newName)
{

}

Dog::Dog() {
	age = 0;
	pChipValue = new string();
}

Dog::~Dog() {
	if (pChipValue != NULL) {
		delete pChipValue;
	}
}


int Dog::getAge() {
	return this->age;
}
double Dog::getWeight() {
	return this->weight;
}
string Dog::getName() {
	return this->name;
}
string & Dog::getByRefernce() {
	return *(this->pChipValue);
}

void Dog::setAge(int newAge) {
	if (newAge < 0) {
		while (newAge < 0) {
			cout << "your age in illegal, it have to be bigger then 0" << endl;
			cin >> newAge;
		}
		this->age = newAge;
	}
	else {
		this->age = newAge;
	}
}
void Dog::setWeight(double newWeight) {
	if (newWeight < 0) {
		while (newWeight < 0) {
			cout << "your weight in illegal, it have to be bigger then 0" << endl;
			cin >> newWeight;
		}
		this->weight = newWeight;
	}
	else {
		this->weight = newWeight;
	}
}
void Dog::setName(string newName) {
	if (newName.length() < 0) {
		while (newName.size() < 0) {
			cout << "your weight in illegal, it have to be bigger then 0" << endl;
			cin >> newName;
		}
		this->name = newName;
	}
	else {
		this->name = newName;
	}
}

void Dog::setPointerValue(string src) {
	if (this->pChipValue != NULL){
		delete(this->pChipValue);
	}
	this->pChipValue = new string(src);
}

void Dog::print()
{
	cout << "Color: " << this->getAge() << endl;
	cout << "Firm: " << this->getWeight() << endl;
	cout << "Year: " << this->getName() << endl;
	cout << "CarPlait: " << this->getByValue() << endl;
	cout << "----------------" << endl;
}


