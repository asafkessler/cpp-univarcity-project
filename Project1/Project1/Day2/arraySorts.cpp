#include <iostream>
#include <random>
#include <ctime>
using namespace std;

typedef enum{
	buttomflag = 1,
	topflag = 1000
}flags; // doesnt really work as data members

// method decletation 

int main() {
	
	const int array_length = 10;
	int myarray[array_length];

	srand(time(0)); // giving the random function an random key

	// setting the values of the array - stack memory
	for (int index = 0; index < array_length; index++) {
		myarray[index] = rand() % flags::topflag + flags::buttomflag;
	}

	for (int index = 0; index < array_length; index++) {
		cout << "value " << myarray[index] << endl;
	}


	// mix betweeen insertion sort and bubble sort
	//int currentvalue = 0;
	//int nextvalue = 0;
	//int saverindex = 0;
	//for (int firstindex = 1; firstindex < array_length; firstindex++) {
	//	currentvalue = myarray[firstindex];
	//	saverindex = firstindex;
	//	for (int secondindex = firstindex - 1; secondindex >= 0 && myarray[secondindex] > currentvalue ; secondindex--){
	//		nextvalue = myarray[secondindex];
	//		myarray[secondindex] = currentvalue;
	//		myarray[saverindex] = nextvalue;
	//		saverindex--;
	//	}
	//}

	// real insertion sort
	int traceBackPlace = 0;
	int currValuePlaceHolder = 0;
	
	for (int currValuePlace = 1; currValuePlace < array_length; currValuePlace++) {
		currValuePlaceHolder = currValuePlace;
		while (traceBackPlace >= 0 && myarray[traceBackPlace] > myarray[currValuePlace]) {
			myarray[traceBackPlace + 1] = myarray[traceBackPlace];
			traceBackPlace--;
		}
		myarray[traceBackPlace] = myarray[currValuePlace]; // In this sorting method we have to swich element and not replace them. 
	}

	// print sorted array
	for (int index = 0; index < array_length; index++) {
		cout << "value " << myarray[index] << endl;
	}


	// real bubble sort
	

	// quick sort
	

	getchar();
	getchar();
}

