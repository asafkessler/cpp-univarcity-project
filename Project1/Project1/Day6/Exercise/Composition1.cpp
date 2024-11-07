#include<iostream>
#include<string>

using namespace std;

class Engine

{
private:
	int cylinders;
	int horsePower;
public:
	Engine(int c, int h){
		cylinders = c;
		horsePower = h;
	}
	Engine()
	{
		cylinders = 4;
		horsePower = 120;
	}
	int getCylinders(){ return cylinders; }
	int gethorsePower(){ return horsePower; }
	void setCylinders(int c){ cylinders = c; }
	void sethorsePower(int h){ horsePower = h; }

};

class Car

{
private:
	Engine engine;
	string company;
	string color;
public:

	Car(string c, string firm){
		color = c;
		company = firm;
	}

	void show_details()
	{
		cout << "Compnay is : " << company << endl;
		cout << "Color is : " << color << endl;
		cout << "Engine horse power is : " << engine.gethorsePower();
	}

};

int main()
{
	Car c("Red", "Toyota");
	c.show_details();
	return 0;

}