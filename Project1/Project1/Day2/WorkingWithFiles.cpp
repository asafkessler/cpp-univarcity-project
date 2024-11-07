#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string readFile(ifstream my);
int main() {
	
	ifstream myFile("Z:\\_CPP_18_01_07\\public\\Asaf Kessler\\Project1\\Project1\\emp.txt");

	// text file read
	string fileData;

	if (!myFile.is_open()) {
		cout << "There is a problem opening your file" << endl;
	} else {
		getline(myFile, fileData);
		cout << fileData << endl;
		myFile.close;
	}

	//text file write 
	string line;
	ifstream myFile("Z:/_CPP_18_01_07/_yossi_kally/example2.txt");
	if (myFile.is_open())
	{
		while (getline(myFile, line))
		{
			cout << line << endl;
		}
		myFile.close();
	}


	getchar();

}
	