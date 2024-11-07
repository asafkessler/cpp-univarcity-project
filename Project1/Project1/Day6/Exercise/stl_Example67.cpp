#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Person
{
private:
  string name;
public:
  Person(string s) : name(s) {   cout << "In the 1-argument constructor" << endl;  }
  Person() {   cout << "In the no-argument constructor" << endl;  }
  ~Person() {   cout << "In the destructor" << endl;
  }
  string getName()
  {
    return name;
  }
};


int main()
{
	size_t size = 4;
	/*
	vector<string> stringVector(size);
	stringVector[0] = "Omer";
	stringVector[1] = "Ido";
	stringVector[2] = "Tal";
	stringVector[3] = "Yossi";

	stringVector.push_back("Moshe");
	cout<<stringVector.capacity()<<std::endl;
	cout<<stringVector.size()<<endl;

	for(int i=0; i<stringVector.size(); ++i){
	cout << "Element #" << i << " has value " << stringVector[i] << endl;
	}*/

	
	vector<Person> personVector(size);
	personVector[0] = Person("Omer");
		personVector[1] = Person("Ido");
		personVector[2] = Person("Tal");
		personVector[3] = Person("Yossi");


		personVector.push_back(Person("Moshe"));
		cout << personVector.capacity() << std::endl;
		cout << personVector.size() << endl;

		for (int i = 0; i < personVector.size(); ++i){
			cout << "Element #" << i << " has value " << personVector[i].getName() << endl;
		}



}
