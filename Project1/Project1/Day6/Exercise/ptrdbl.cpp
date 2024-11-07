#include <iostream>

using namespace std;



int main()
{
	double *way_1[5];//No new no delete!!!
	for (int i = 0; i < 5; i++){
		//Initialze the array to  point to real stuff
		way_1[i] = new double(i * i);//Initialize each item to point
	}
	for (int i = 0; i < 5; i++){
		cout << *(way_1[i]) << ", " << endl;
	}
	for (int i = 0; i < 5; i++){
		delete way_1[i];//delete each item
	}
	///////////////////////////////////////////////
	double **way_2 = new double*[5];

	for (int i = 0; i < 5; i++){
		way_2[i] = new double(i* i);
	}
	for (int i = 0; i < 5; i++){
		cout << *(way_2[i]) << ", " << endl;
	}
	for (int i = 0; i < 5; i++){
		delete way_2[i];
	}
	delete [] way_2;
}


