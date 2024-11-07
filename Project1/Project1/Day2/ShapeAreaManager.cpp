#include <iostream>
#include <string>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>

const int OPTIONS_NUMBNER = 5;

typedef enum{
	Square = 1,
	Triangle, 
	Rectangle,
	Circle,
	Exit
}Shapes;

int printShapeAreaMenu(int *puserAction, string *pshapeAreaFunction);
void getSideOfShapeFromUser(string function, int *squareSide);
void colcAreaSquare(int side);
void colcAreaTriangle(int side, int height);
void colcAreaCircle(int radius);
void colcAreaRectangle(int side1, int side2);

int main() {
	
	const string askUser = "Hello, Type the side size of the ";
	string shapeAreaFunction[OPTIONS_NUMBNER] = { "Square", "Triangle", "Rectangle", "Circle", "Exit" };
	int userAction = 0;
	
	while (userAction != Shapes::Exit) {
		
		printShapeAreaMenu(&userAction, shapeAreaFunction);
		switch (userAction) {
		case (Shapes::Square) : {
			int squareSide;
			getSideOfShapeFromUser(askUser + shapeAreaFunction[Shapes::Square - 1], &squareSide);
			colcAreaSquare(squareSide);
			break;
		}
		case (Shapes::Triangle) : {
			int triangleSide;
			getSideOfShapeFromUser(askUser + shapeAreaFunction[Shapes::Triangle - 1], &triangleSide);

			string askUserHeight = askUser.substr(0, 16) + "height " + askUser.substr(21);
			int triangleheight;
			getSideOfShapeFromUser(askUserHeight + shapeAreaFunction[Shapes::Triangle - 1], &triangleheight);

			colcAreaTriangle(triangleSide, triangleheight);
			break;
		}
		case (Shapes::Rectangle) : {
			int rectangleSide1;
			getSideOfShapeFromUser(askUser + shapeAreaFunction[Shapes::Rectangle - 1], &rectangleSide1);

			string askUserDiffSide = askUser.substr(0, 16) + "second " + askUser.substr(16);
			int rectangleSide2;
			getSideOfShapeFromUser(askUserDiffSide + shapeAreaFunction[Shapes::Rectangle - 1], &rectangleSide2);

			colcAreaRectangle(rectangleSide1, rectangleSide2);
			break;
		}
		case (Shapes::Circle) : {
			string askUserRadius = askUser.substr(0, 16) + "radius " + askUser.substr(21);
			int circleRadius;
			getSideOfShapeFromUser(askUserRadius + shapeAreaFunction[Shapes::Circle - 1], &circleRadius);
			colcAreaCircle(circleRadius);
			break;
		}
		default:
			cout << "Bye Bye" << endl;
			break;
		}
	}
	
	getchar();
	getchar();

}

int printShapeAreaMenu(int *puserAction, string *pshapeAreaFunction) {
	cout << "***** Welcome to OUR AWESOME Program ***** \n" << endl;
	cout << "___________________________________________ \n" << endl;
	cout << "This program let you culc the area of diffrent shapes, Let's begin\n" << endl;

	for (int index = 0; index < OPTIONS_NUMBNER; index++) {
		cout << "# Type " << (index + 1) << " to colc the area of a " << pshapeAreaFunction[index] << endl;
	}

	cin >> *puserAction;
	return (*puserAction);
}

void colcAreaSquare(int side) {
	cout << (side * side) << endl;
}

void colcAreaTriangle(int side, int height) {
	string answer = to_string((double)(side * height) / 2);
	cout << (answer) << endl;
	
	printf("%f",  + "\n");
}

void colcAreaCircle(int radius) {
	string answer = to_string(M_PI * pow(radius, 2));
	cout << (answer) << endl;
}

void colcAreaRectangle(int side1, int side2){
	cout << (side1 * side2) << endl;
}

void getSideOfShapeFromUser(string function, int *squareSide) {
	cout << function << endl;
	cin >> *squareSide;
}
