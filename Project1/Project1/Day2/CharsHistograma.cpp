#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int  asciiArray[256];
	char charArray[256];

	for (int i = 0; i < 256; i++) {
		asciiArray[i] = 0;
		charArray[i] = 0;
	}
	
	char currentChar;

	ifstream myFile("Z:/_CPP_18_01_07/public/Asaf Kessler/Project1/Project1/emp.txt");
	if (myFile.is_open())
	{
		while (myFile.get(currentChar))
		{
			asciiArray[currentChar]++;
		}
		myFile.close();
	}

	for (int i = 0; i < 256; i++) {
		if (asciiArray[i] != 0) {
			charArray[i] = i;
		}
	}

	for (int i = 0; i < 256; i++) {
		if (charArray[i] == 0) {
			break;
		}
		else {
			cout << charArray[i];
		}
	}

	getchar();
	getchar();
}

