#include <iostream>  
#include <string.h>  
#include <typeinfo>  


using namespace std;




int main() {
	string value;

	decltype(value) n = "Yossi";

	cout << typeid(value).name() << endl;
	cout << typeid(n).name() << endl;


}
