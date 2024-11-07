#include <iostream>
#include <string>
using namespace std;

int main()
{
	size_t t = string::npos;

	string firstName = "Joseph", lastName = "Kally", fullName, nickname = "Yosi";
	//cout << "Please type in your name" << endl;
	//cin >> firstName;
	//cout << "Please type in your last name" << endl;
	//cin >> lastName;
	//cout << "Please enter your nickname" << endl;
	//cin >> nickname;
	fullName = firstName + " " + lastName;
	cout << "Hello " << fullName << endl;

	cout << "length os first name: " << firstName.size() << endl;
	firstName.length();

	string substring = lastName.substr(0, 3);
	cout << substring << endl;

	firstName.erase(0, 3);
	cout << firstName << endl;

	firstName.insert(0, "Yos");
	cout << firstName << endl;

	string cppString("new string");
	char *cString = new char[11];
	strcpy_s(cString, 11, cppString.c_str());
	
	getchar();
	getchar();

	return 1;
}

	