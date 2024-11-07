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

	srand((unsigned)time(0)); // הוא מקבל איזשהו אידי עליון הוא מסתמך כאשר הוא מייצר את המספרים הרנדומאליים

	long array[SIZE_OF_ARRAY]; //  מה שכל כך נפלא ליראות בעצם שבשפה הזו מערך הוא לא אובייקט אלא הוא רק אורגן של ערכים ולכן הוא לא מייחצן שום פונקציות 

	//// פנייה לכתובת של האיבר במערך 
	//cout << "array[0] = " << array[0] << ", address: " << &array[0] << endl;
	
	// כאשר אנחנו מגדירים את המערך שלנו כגלובאלי כל הערכים שלו מאותחלים ל אפסים וכאשר אנחנו מאתחלים אותו מקומית 
	// לתוך בלוק ספציפי הוא יתמלא בזבל , זאת אומרת זיכרון מבוזר מתוך עובדה זו אנחנו מגיעים לכך שכל פעם נאפס את 
	//המערך שלנו לערך מסויים , מדהים לראות ש באמת כל משתנה שנגדיר כגלובאלי יאותחל ב אפסים 

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
