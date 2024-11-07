#include <iostream>
#include <string>

using namespace std;


//Step 2
void test(void(*pFunc)(string), string ss)
{
	pFunc(ss);

}

//Step 3
double test2(double(*pFunc)(string), string ss)
{
	double dddd = pFunc(ss);

	return dddd;

}


int main()
{

	auto func = [](string name){cout << "This is lambda " << name << endl; };

	func("Yossi");

	test(func, "Harry");


	//Trailing return type
	auto func2 = [](string name)->double{cout << "This is lambda " << name << endl; return 3.0; };

	double dd = test2(func2, "Sarah");


}
