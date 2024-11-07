#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


//dynamaic allocation

int main()
{


	const int NSTRINGS = 5;
	string text[NSTRINGS] = { "one", "two", "three", "four", "five" };
	int i = sizeof(text[0]);
	string *pText = text;

	pText += 3;
	cout << *pText << endl;

	pText -= 2;
	cout << *pText << endl;

	/////////
	string *pEnd = &text[NSTRINGS];
	pText = text;
	while (pText != pEnd)
	{
		cout << *pText << endl;
		pText++;
	}
	////////////

	long numElemnts = (long)(pEnd - &text[0]);

	cout << numElemnts << endl;




	getchar();

	return 1;
}

	