#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = 5;
	int & y = x;//'y' is a reference to integer -> it is a const pointer with uppgrades
	// reference will always point to the same object. we dont need to delete it, because we cant put new to it!
	y += 10; 

	int *p = &x; //'p' is a pointer to integer
	*p += 20;

	string s1 = "asaf";
	string *ps1 = new string(s1);

	getchar();
	getchar();
}


