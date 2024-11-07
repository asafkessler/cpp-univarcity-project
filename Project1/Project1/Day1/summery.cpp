#include <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

#define NUM_OF_LETTERS	26
static const int NUM_OF_DIGITS = 9;

int main()
{
	//This is my program
	

	/*cout << "Hello world " << NUM_OF_LETTERS <<  ", " << NUM_OF_DIGITS << endl;

	cout << "The size of bool is " << sizeof(bool) << endl;
	cout << "The size of char is " << sizeof(char) << endl;
	cout << "The size of short is " << sizeof(short) << endl;
	cout << "The size of int is " << sizeof(int) << endl;
	cout << "The size of long is " << sizeof(long) << endl;
	cout << "The size of long long is " << sizeof(long long) << endl;
	cout << "The size of float is " << sizeof(float) << endl;
	cout << "The size of double is " << sizeof(double) << endl;*/

	/*int a = 1;
	int b = 4;
	int c = 0;

	a = a / b;
	int d = b % 3;*/

	/*cout << "Enter your name: " << endl;
	string name;
	cin.getline >> name;
	cout << "You are the king " << name << endl;

	cout << "Please enter two numbers" << endl;
	int num1, num2;
	cin >> num1;
	cin >> num2;

	int xorNum1Num2 = num1 ^ num2;
	cout << "The xor of the numbers is: " << xorNum1Num2;*/

	// AVG
	/*const int NUM_OF_NUMBERS = 5;
	int sum = 0;
	int tmp = 0;
	double avg = 0;

	cout << "Enter " << NUM_OF_NUMBERS << " numbers" << endl;
	for (int i = 0; i < NUM_OF_NUMBERS; i++) {
		cout << "Enter number num " << i + 1 << endl;
		cin >> tmp;
		sum += tmp;
	}

	avg = sum / 5;
	cout << "The average of the " << NUM_OF_NUMBERS << " numbers is: " << avg << endl;*/
	
	/*int age = 0;
	const int MIN_AGE_PUB = 18;
	const int MAX_AGE_PUB = 50;
	const int EXIT = 0;
	cout << "Bouncer: Hi Bro, what is your fuc**** age ???" << endl;
	cout << "The boy said: \nPlease enter the boy's age, enter " << EXIT << " to exit" << endl;
	cin >> age;

	while (age != EXIT) {
		if (age < 18) {
			cout << "Go home kido" << endl;
		}
		else if (age < MAX_AGE_PUB) {
			cout << "Come in" << endl;
		}
		else {
			cout << "Sear, this pub is under " << MAX_AGE_PUB << " you can go to the other pub" << endl;
		}

		cout << "Bouncer: Hi Bro, what is your fuc**** age ???" << endl;
		cout << "The boy said: \nPlease enter the boy's age, enter " << EXIT << " to exit" << endl;
		cin >> age;
	}*/
	//
	//// get all the primaries number till 1000
	//int sum = 0;
	//int count = 0;
	//bool isPrimary;
	//for (int i = 2; i <= 1000; i++) {
	//	isPrimary = true;
	//	sum = 0;
	//	for (int j = 2; j <= sqrt(i); j++) {
	//		if (i % j == 0) {
	//			isPrimary = false;
	//			break;
	//		}
	//	}

	//	if (isPrimary) {
	//		cout << i << " is primary num" << endl;
	//		count++;
	//	}
	//	
	//}

	//cout << count << " primary numbers" << endl;

	// SWITCH ARRAY
	/*const int ARRAY_LENGTH = 4;
	int array[ARRAY_LENGTH];
	int tmp = 0;

	for (int i = 0; i < ARRAY_LENGTH; i++) {
		array[i] = i;
	}

	cout << "Array before" << endl;
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		cout << "array[" << i << "] is: " << array[i] << endl;
	}

	for (int i = 0; i < ARRAY_LENGTH /2 ; i++) {
		tmp = array[i];
		array[i] = array[ARRAY_LENGTH - i - 1];
		array[ARRAY_LENGTH - i - 1] = tmp;
	}

	cout << "Array After switch" << endl;
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		cout << "array[" << i << "] is: " << array[i] << endl;
	} */


	// SWITCH (RANDOM) ARRAY
	const int ARRAY_LENGTH = 4;
	const int MIN_RAND = 1;
	const int MAX_RAND = 1000;
	int array[ARRAY_LENGTH];
	int tmp = 0;

	srand((unsigned)time(0));

	for (int i = 0; i < ARRAY_LENGTH; i++) {
		array[i] = MIN_RAND + (rand() % (MAX_RAND - MIN_RAND + 1));
	}

	cout << "Array before" << endl;
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		cout << "array[" << i << "] is: " << array[i] << endl;
	}

	for (int i = 0; i < ARRAY_LENGTH /2 ; i++) {
		tmp = array[i];
		array[i] = array[ARRAY_LENGTH - i - 1];
		array[ARRAY_LENGTH - i - 1] = tmp;
	}

	cout << "Array After switch" << endl;
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		cout << "array[" << i << "] is: " << array[i] << endl;
	} 

	getchar();
	getchar();
	
	return 1;
}


