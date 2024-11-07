#include <iostream>
#include "Guitar.h"
#include "Piano.h"

// old C
typedef struct{
	string name;
	double calories;
	string flavor;
}FOOD;

int main()
{

	Guitar myGuitar1(Guitar::COLOR::RED, 200, 6);
	Guitar myGuitar2(myGuitar1);
	myGuitar2.setPrice(300);


	//int x = 5;
	//int & y = x; //'y' is a reference to integer
	//y += 10;
	//int *p = &x; //'p' is a pointer to integer
	//*p += 20;

	Guitar *pg = new Guitar();
	//Guitar & g = *pg;





	Guitar g1;

	Guitar *pG2 = new Guitar(Guitar::COLOR::RED, 150, 4);

	g1.print();
	cout << "================" << endl;
	pG2->print();

	delete pG2;
	pG2 = NULL;

	Guitar *pG4 = new Guitar(g1);
	pG4->setColor(Guitar::COLOR::ORANGE);


	Piano *pPiano = new Piano();

	pPiano->print();

	delete pPiano;

	cout << "Guitars: " << Guitar::counter << endl;
	cout << "e: " << Guitar::e << endl;


	Guitar::setCounter(12342);

	cout << "=============================\n";

	Guitar g12(Guitar::COLOR::ORANGE, 150, 4, "Yamaha");
	Guitar g13 = g12;





	getchar();

	return 0;

}


