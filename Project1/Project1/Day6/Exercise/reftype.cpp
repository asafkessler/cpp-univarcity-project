#include <iostream>
#include <string>

using namespace std;
/*reference variables */
int main()
{
    string name_2 = "lala";
    string name = "Agnes";

    cout << "Value of Variable: " << name << " addres of Variable is: " << &name << endl;

    string & nr_6 = name;

	int uu = 76;
	int & yy = uu;
	yy = 88;


    cout << "Value of Variable: " << nr_6 << " addres of Variable is: " << &nr_6 << endl;

    //nr_6 = name_2;
    nr_6 = "Scott";
    name = "Scott";

    cout << "Value of Variable: " << nr_6 << " addres of Variable is: " << &nr_6 << endl;


    cout << "Value of Variable: " << name << " addres of Variable is: " << &name << endl;

    cout << "Value of Variable: " << nr_6 << " addres of Variable is: " << &nr_6 << endl;

    /*
        Ref. var. must be initialized when created
        Ref var can't change associations / connections
        Ref var must be the same type as assocaited variable
    */

    return 0;
}
