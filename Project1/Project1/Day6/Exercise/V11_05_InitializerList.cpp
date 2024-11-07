#include <iostream>
#include <string>
//!!
#include <initializer_list>

using namespace std;

class Test{
public:
	Test(initializer_list<string> texts){
		for (auto s : texts)
		{
			cout << s << endl;
		}
	}
};

class Test2{
	int id{ 4 };
	Test ttt{ "asd" };
	string name;
public:
	Test2(int idd) : id(idd){
		name = "ruth";
	}
	Test2() {
		name = "ruth";
	}
	void print(){
		cout << name << endl;
	}
};


int main()
{
	Test t{ "apple", "orange", "banana" };

	Test2 t2;
	t2.print();

}
