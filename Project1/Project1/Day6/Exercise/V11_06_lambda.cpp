#include <iostream>
#include <string>

using namespace std;


//Step 2
void test(void (*pFunc)())
{
	pFunc();
}


int main()
{


	//cout << "This is lambda" << endl;

	//[](){cout << "This is lambda" << endl; }
	auto func = [](){cout << "This is lambda" << endl; };

	func();

	//step 2
	test(func);
	test([](){cout << "This is lambda" << endl; });


}
