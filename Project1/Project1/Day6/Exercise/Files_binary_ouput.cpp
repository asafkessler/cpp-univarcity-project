// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Person
{
	char name[50];
	int age;
	char phone[24];
};

int main()
{
	//Person me = { "Robert", 28, "364-2534" };
	//Person book[30];
	//int x = 123;
	//double fx = 34.54;
	//ofstream outfile;
	//outfile.open("junk.dat", ios::binary | ios::out);
	//outfile.write((const char *)&x, sizeof(int)); // sizeof can take a type
	//outfile.write((const char *)&fx, sizeof(fx)); // or it can take a variable name
	//outfile.write((const char *)&me, sizeof(me));
	//outfile.write((const char *)book, 30 * sizeof(Person));
	//outfile.close();

		int x;
		ifstream infile;
		infile.open("junk.dat", ios::binary | ios::in);
		infile.read((char *)&x, sizeof(int));

		int yy = 654;
	}

