#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


//dynamaic allocation

int main()
{
	int amount;

	int numbers[5];

	cout << "How many numbers do you want?" << endl;
	cin >> amount;
	srand((unsigned)(time(0)));	


	int *p = new int[amount];
	delete[]p;

	if (p != NULL)
	{
		const int MAX = 1000;
		const int MIN = 1;
		for (int i = 0; i < amount; i++)
		{
			int x = rand();
			p[i] = x % (MAX - MIN + 1) + MIN;
		}
		for (int i = 0; i < amount; i++)
		{
			cout << "p [" << i << "] = " << p[i] << endl;
		}
	}
	else{
		cout << "Not enough memory" << endl;
	}

	{
		int *p = new int;
		*p = 123;
		cout << "p=" << p << " *p=" << *p << endl;
		delete p;

	}

	delete[]p;

	getchar();

	return 1;
}

	