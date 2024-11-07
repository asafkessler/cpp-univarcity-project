#include <iostream>
#include <string>
using namespace std;


//POINTERs are ordinary variables!!!
//     ... that store addresses

int main()
{

	int var = 5;
	int a = 20;
	int *p;

	p = &var;
	var += 5;
	*p  += 5;

	int ** p_to_p = &p;

	**p_to_p = 77;
	cout << p << ", " << *p << ", " << var << ", " << &var << endl;
	int * const p_const = &a;
	//p_const = &var;
	a = 10;
	*p_const = 20;

	const int * p_const_data = &a;
	p_const_data = &var;
	//*p_const_data = 34;
	a = 45;

	const int * const p_total_const = &var;

	getchar();

	return 1;
}

	