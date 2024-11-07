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
int d = a & b; //00000000 // נותן 1 רק כאשר קיימים בני ביטים שווים
int e = a ^ b; //00011110 = 30
int f = ~a; // הופך את הביטים 

// פונקציית המיינ לא צריכה להחזיר ערך כי מאחורי הקלעים היא תחזיר 0

// An importent lesson need to be on linker - and it ways...

// מערכים הם הדבר הראשון שאנחנו פוגשים בו גם כתובות מול ערכים וניהול זיכרון 

// משתנים שמוגדרים כמשתנים לוקליים נשמרים לי על זיכרון ה STACK 
// בשונה ממשתנים גלובאליים שנשמרים לי על זיכרון ה Heap 
int array[2];// מחזיק לי את הכתובת לאייבר מסויים בזיכרון  
// אסור לי לכתוב על זיכרון שהוא לא שלי... סביבת העבודה תעצור אותי ברגע שאנסה לעשות זאת 
// אנחנו עובדים ב סי פלאס פלאס שבו מערך הוא רצף בנוי של זיכרון לכל איבר בזיכרון יש כתובת מאין רפרנס לאותו איבר וככה אנחנו יכולים לגשת אליו עובדה זו לא משנה שכל המידע נימצא אחד אחרי השני בזיכרון
// נשתמש באופרטור ה & כדי להוציא את הכתובת של איבר מסויים בזיכרון 
int arrayLength = sizeof(array) / 4; //  בגלל שהפונקציה סיז אופ מחזירה לנו את מיספר הבתים 

// shift f9 לחלון הערכה למשתנים
// debug windows
