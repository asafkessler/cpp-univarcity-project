#include <iostream>
using namespace std;

// Global variables
#define MY_DEFINED_VAR	1
int MY_GLOBAL_INT = 2;
const int MY_GLOBAL_CONST = 3;
static const int MY_GLOBAL_STATIC = 4;

// Sub 1 - Variables

// Natural numbers
bool myBoolean = false; //1 byte 
char myChar = 'a';   //1 byte
short myShourt = 1234; //2 bytes -32768 -> 32767
int myIntegar = 53525;  //4 bytes -2GB -> 2GB
long myLong = 654364; //4 bytes
long long myLongLong = 543;  //8 bytes
	
// Real numbers 
float myFlout = 2.4;  //4 bytes
double myDouble = 56.8; //8 bytes

// Sub 2 - Operators

// Unary operators
int mySecondNumber = 0;
int myFirstNumber = mySecondNumber++;// get the value and then increase the value ++mySecondNumber; increase the value and then get the value

// Bitwise operators 
int a = 26;    //00011010
int b = 4;     //00000100
int c = a | b; //00011110 = 30
int d = a & b; //00000000 // ���� 1 �� ���� ������ ��� ����� �����
int e = a ^ b; //00011110 = 30
int f = ~a; // ���� �� ������ 

// �������� ����� �� ����� ������ ��� �� ������ ������ ��� ����� 0

// An importent lesson need to be on linker - and it ways...

// ������ �� ���� ������ ������ ������ �� �� ������ ��� ����� ������ ������ 

// ������ �������� ������� ������� ������ �� �� ������ � STACK 
// ����� ������� ��������� ������� �� �� ������ � Heap 
int array[2];// ����� �� �� ������ ������ ������ �������  
// ���� �� ����� �� ������ ���� �� ���... ����� ������ ����� ���� ���� ����� ����� ��� 
// ����� ������ � �� ���� ���� ��� ���� ��� ��� ���� �� ������ ��� ���� ������� �� ����� ���� ����� ����� ���� ���� ����� ������ ���� ���� ����� �� �� ���� ��� ����� ����� ��� ���� ���� �������
// ����� �������� � & ��� ������ �� ������ �� ���� ������ ������� 
int arrayLength = sizeof(array) / 4; //  ���� ��������� ��� ��� ������ ��� �� ����� ����� 

// shift f9 ����� ����� �������
// debug windows
