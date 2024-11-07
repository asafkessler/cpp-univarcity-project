#include <iostream>
#include <string>
using namespace std;


#include<vector>



void ex_auto()
{

	std::vector<int> vect;
	vect.push_back(1);
	vect.push_back(12);
	vect.push_back(14);
	vect.push_back(16);

	//for (
	//	std::vector<int>::iterator it = vect.begin();
	//	it != vect.end();
	//++it
	//	)
	//{
	//	std::cout << *it;
	//}

	for (auto it = vect.begin(); it != vect.end(); ++it)
	{
		std::cout << *it << endl;
	}
}



int xmain()
{
	ex_auto();
	return 0;
}



