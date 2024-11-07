// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	//ofstream is used for output
	//can open instead more general fstream

	ofstream myfile("example.txt");
	if (myfile.is_open())
	{
		myfile << "This is a line.\n";
		myfile << "This is another line.\n";
		myfile.close();
	}
	else cout << "Unable to open file";
	return 0;
}
