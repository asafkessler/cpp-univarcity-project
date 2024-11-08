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
  Person(string s) : name(s)
  {
    cout << "In the 1-argument constructor" << endl; 
  }
  Person()
  {
    cout << "In the no-argument constructor" << endl; 
  }
  ~Person()
  {
    cout << "In the destructor" << endl;
  }
  string getName()
  {
    return name;
  }

};


int main()
{
  vector<Person> personVector(4);    
  personVector[0] = Person("Omer");
  personVector[1] = Person("Ido");
  personVector[2] = Person("Tal");
  personVector[3] = Person("Yossi");


  personVector.push_back(Person("Moshe"));
  personVector.push_back(Person("David"));
  personVector.push_back(Person("Isaac"));

  cout<<personVector.capacity()<<std::endl;
  cout<<personVector.size()<<endl;

  //for(int i=0; i<personVector.size(); ++i){
  //  cout << "Element #" << i << " has value " << personVector[i].getName() << endl;
  //}


  vector<Person>::iterator personIterator;

  for(personIterator = personVector.begin(); 
      personIterator != personVector.end();
      personIterator++)
    {
      cout << personIterator->getName() << endl;
      cout << (*personIterator).getName() << endl;
    }

  // THe power of iterators! 
  personVector.erase(personVector.begin(), personVector.end());  

  /*
  vector<int> myIntVector;
  vector<int>::iterator myIntVectorIterator;
  myIntVectorIterator = myIntVector.begin() + 2;

  vector<int>::iterator myIntVectorIterator;
  myIntVector.erase(myIntVectorIterator.begin(), myIntVectorIterator.end());
  */

}
