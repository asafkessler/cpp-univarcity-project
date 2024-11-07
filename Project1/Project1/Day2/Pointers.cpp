#include <iostream>
#include <string>
using namespace std;

/*
	Pointers are original variables 
	which holds an address of otheer value in the memory
*/

int main() {
	
	// Beginner mode 
	
	int myVariable1 = 10;
	int myVariable2 = 20;

	int *pVar1 = &myVariable1; // to dicler a pointer we have to use *.
	int *pVar2 = &myVariable2;

	cout << pVar1 << ", " << *pVar1 << ", " << myVariable1 << ", " << &myVariable1 << endl;
	cout << pVar2 << ", " << *pVar2 << ", " << myVariable2 << ", " << &myVariable2 << endl;

	pVar1 = pVar2; // setting addresses dont need *.
	pVar2 = pVar1; // הייתי צריך לשמור בצד לפני ההסמה

	cout << pVar1 << ", " << *pVar1 << ", " << myVariable1 << ", " << &myVariable1 << endl;
	cout << pVar2 << ", " << *pVar2 << ", " << myVariable2 << ", " << &myVariable2 << endl;

	// constant pointers

	int const *pPointer1;			// we cant change the object which the pointer points to.
	const int *pPointer2;		  // we cant change the value using the pointer, but the object is not locked.
	const int const *pPointer3;  // total constant Pointer.

	// pointer to pointer

	int myVar = 10;
	int *pToMyVar = &myVar;
	int **pToMyVarPointer = &pToMyVar;

	cout << myVar << ", " << *pToMyVar << ", " << **pToMyVarPointer << endl;

	**pToMyVarPointer = 20;

	cout << "need to be 20 :" << myVar << endl;

	getchar();
	getchar();
}