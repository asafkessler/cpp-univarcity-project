#include <iostream>
#include "Guitar.h"
#include "Piano.h"

// old C
typedef struct{
	string name;
	double calories;
	string flavor;
}FOOD;

int mainxxxx()
{
	int x = 5;
	int & y = x; //'y' is a reference to integer
	y += 10;
	int *p = &x; //'p' is a pointer to integer
	*p += 20;

	Guitar *pg = new Guitar();
	Guitar & g = *pg;





	//Guitar g1;

	//Guitar *pG2 = new Guitar(Guitar::COLOR::RED, 150, 4);

	//g1.print();
	//cout << "================" << endl;
	//pG2->print();

	//delete pG2;
	//pG2 = NULL;
	////delete pG2;

	//Piano *pPiano = new Piano();

	//pPiano->print();

	//delete pPiano;

	//int *pI = new int(45);
	//delete[] pI;

	getchar();

	return 0;

}


