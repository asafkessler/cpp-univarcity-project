#include <iostream>
#include <string>
using namespace std;

int main() {

	// simple task 1
	string userName = "";
	int	   userAge;
	int	   userFirstNumber;
	int	   userSecondNumber;

	cout << "Type in your name and age please" << endl;
	cin >> userName;
	cin >> userAge;

	cout << "simple task 1";
	cout << "______________";
	cout << "***** Welcome to YOUR AGE GAME ******\n" << endl;
	cout << "***** " << userName << "  if you forgot your age is :" << userAge << endl;

	// simple task 2
	cout << "Type in two numbers please" << endl;
	cin >> userFirstNumber;
	cin >> userSecondNumber;

	cout << "simple task 2" << endl;
	cout << "______________" << endl;
	cout << "the numbers XOR is : " << (userFirstNumber ^ userSecondNumber) << endl;

	// simple task 3
	const int NUMBER_AMOUNT = 5;
	int numberIndex1, numberIndex2, numberIndex3, numberIndex4, numberIndex5;
	double numbersAvg = 0;
	cout << "Type 5 numbers" << endl;
	cin >> numberIndex1;
	cin >> numberIndex2;
	cin >> numberIndex3;
	cin >> numberIndex4;
	cin >> numberIndex5;
	numbersAvg = numberIndex1 + numberIndex2 + numberIndex3 + numberIndex4 + numberIndex5;
	numbersAvg = numbersAvg / (double)NUMBER_AMOUNT;

	cout << "simple task 3" << endl;
	cout << "______________" << endl;
	cout << "numbers avg :" << numbersAvg << endl;

	// simple task 4
	const int youngAgeRestriction = 18;
	const int oldAgeRestriction = 50;
	int	   agePersone;

	cout << "***** Welcome to OUR AWESOME BAR ***** \n But first what is your age please" << endl;
	cin >> agePersone;

	if (agePersone >= youngAgeRestriction && agePersone < oldAgeRestriction) {
		cout << "have a great time !" << endl;
	}
	else if (agePersone >= oldAgeRestriction) {
		cout << "we are sorry.... you are too old" << endl;
	}
	else {
		cout << "we are sorry.... you are not allowed to get in" << endl;
	}

	getchar();
	getchar();
}