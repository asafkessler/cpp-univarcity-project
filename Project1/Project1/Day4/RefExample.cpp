#include <iostream>

using namespace std;

void swap3(int & ra, int & rb)
{
	int temp = ra;
	ra = rb;
	rb = temp;
}
//swap2(&a, &b);
void swap2(int *pi, int *pj)
{
	int temp = *pi;
	*pi = *pj;
	*pj = temp;
}
void swap1(int i, int j)
{
	int temp = i;
	i = j;
	j = temp;
}

int & badFunction()
{
	int *px = new int(45);
	return *px;
}

int & badFunction2()
{
	int x = 67;
	return x;
}

int & badFunction3()
{
	int x = 67;
	return x;
}

int  xyz()
{
	int s = 54;
	int s1 = 54;
	int s2 = 54;
	int s3 = 54;
	int s4 = 54;
	int s5 = 54;

	return 5;
}


int main()
{
	int *ppppp = badFunction3();
	xyz();

	int x = 5;
	int & y = x;

	cout << "Initially, x = " << x << " y = " << y << endl;
	y = 10;
	cout << "Value of y chaned to " << y << endl;
	cout << "And x is " << x << endl;

	int a = 10, b = 20;
	swap1(a, b);
	swap2(&a, &b);

	a = 10;
	b = 20;
	swap3(a, b);

	
	int bb = 5;
	int cc = 3;
	int & dd = bb;

	dd = cc;//What changes is the value of bb
	dd = 10;

	int & ee = bb;
	ee = 10;

	int *px = NULL;
	int & aaaa = *px;
	cout << aaaa << endl;
	int *pbbbb = new int(5);
	int* & cccc = pbbbb;//reference to pointer



	

	int  ytry = 654;

	getchar();

	return 0;
}

