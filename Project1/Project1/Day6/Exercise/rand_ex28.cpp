#include <iostream>
using namespace std;

#include <stdlib.h>
#include <time.h>

int main()
{
	char alphabets[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char rString[20];

	srand(time(NULL));

	int i = 0;
	while (i<20) {
		int temp = rand() % 26;
		rString[i] = alphabets[temp];
		i++;
	}

	for (i = 0; i<20; i++)
		cout << rString[i];

	return 0;
}
