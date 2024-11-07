#include <iostream>
#include <string>
using namespace std;

#define NUM_OF_LETTERS	26
static const int NUM_OF_DIGITS = 9;

int main()
{
	

	//Compound assignment

	int a = 1, b = 3;

	a += b;// -= *= /= &=
	a &= b;

	if (b > 3){
		cout << "big" << endl;
	}
	else{
		cout << "small" << endl;
	}


	//b > 3 ? cout << "big" : cout << "small";

	cout << (b > 3) ?"big" :"small";
	cout << endl;



	//getchar();
	getchar();
	return 1;
}

	
