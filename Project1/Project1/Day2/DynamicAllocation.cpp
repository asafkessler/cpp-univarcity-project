#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;


int main() {

	//  dynamic allocation - now we in a dimanic way save place in the memory

	int amountNumbers;

	cout << "How many numbers you wish to have in your array ? " << endl;
	cin >> amountNumbers;

	int arr[6]; // an array which is saved on the stack

	int *numbersArray = new int[amountNumbers]; // we allocat memory by using the new operetor
												// the cool thing is that the array is a pointer 
												// to the first cell, when we 
	// חשבונאות של פוינטרים הוא ידע לזוז לפי הסוג של האיברים שהוא מצביע אליהם 

	// Checking that the stack memory wasn't finished and we didnt get a null address
	if (numbersArray != NULL) {
		cout << "there is no space left in the stack" << endl;
	} else {
		srand(time(0));

		for (int i = 0; i < amountNumbers; i++) {
			numbersArray[i] = rand() % 10 + 1;
		}

		for (int i = 0; i < amountNumbers; i++) {
			cout << numbersArray[i] << endl;
		}
		
		// deleting an array - need to save the original address to delete all the array.
		delete[] numbersArray;
	}

	// deleting an object
	int *kid = new int;
	*kid = 67;
	delete kid;

	// be careful deleting pointers !

	getchar();
	getchar();

}
