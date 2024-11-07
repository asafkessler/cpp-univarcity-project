#include <iostream>
#include <string>
using namespace std;
#include "Dog.h"

int main() {

	// created on the stack using the setters
	Dog dog3;
	dog3.setAge(3);
	dog3.setWeight(2.2);
	dog3.setName("awesome");
	
	// created using the constructor
	Dog dog1(8, 4.5, "asaf");// this is how i create an object on the stack 
	Dog *dog2 = new Dog(4, 8.7, "ido"); // this is how i create an object on the heap
	delete dog2; // מחיקה של מצביע לזיכרון מוחק את הזיכרון ? לא קיים זיכרון בהיפ ללא מצביע?

	getchar();
	getchar();
}
