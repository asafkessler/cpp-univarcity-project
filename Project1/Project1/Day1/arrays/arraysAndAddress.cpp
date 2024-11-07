#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;

static const int SIZE_OF_ARRAY = 4;


int main()
{
	const int START_RAND = 1;
	const int END_RAND = 100;

	srand((unsigned)time(0)); // ��� ���� ������ ���� ����� ��� ����� ���� ��� ����� �� ������� �����������

	long array[SIZE_OF_ARRAY]; //  �� ��� �� ���� ������ ���� ����� ��� ���� ��� �� ������� ��� ��� �� ����� �� ����� ���� ��� �� ������ ��� �������� 

	//// ����� ������ �� ����� ����� 
	//cout << "array[0] = " << array[0] << ", address: " << &array[0] << endl;
	
	// ���� ����� ������� �� ����� ���� �������� �� ������ ��� �������� � ����� ����� ����� ������� ���� ������ 
	// ���� ���� ������ ��� ����� ���� , ��� ����� ������ ����� ���� ����� �� ����� ������ ��� ��� ��� ���� �� 
	//����� ���� ���� ������ , ����� ����� � ���� �� ����� ������ �������� ������ � ����� 

	// setting the array variables
	for (int cellIndex = 0; cellIndex < SIZE_OF_ARRAY; cellIndex++) {
		array[cellIndex] = rand() % END_RAND + START_RAND;
	}

	// printing the array variables
	for (int cellIndex = 0; cellIndex < SIZE_OF_ARRAY; cellIndex++) {
		cout << "var in place " << (cellIndex + 1) << " :" << array[cellIndex] << endl << endl;
	}
	
	// printing the arrayh variables
	for (int cellIndex = SIZE_OF_ARRAY - 1; cellIndex >= 0; cellIndex--) {
		cout << "var in place " << (cellIndex + 1) << " :" << array[cellIndex] << endl << endl;
	}
	
	getchar();
}
