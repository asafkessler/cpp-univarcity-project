#include <iostream>

using namespace std;


void func1()
{
	int i = 2;
	cout << "func1 i " << ++i << endl;
}

void func2()
{
	static int i = 2;
	cout << "func1 i " << ++i << endl;
}

int main()
{

	func1();
	func2();

	func1();
	func2();

	func1();
	func2();

	func1();
	func2();

	getchar();
	return 2;
}