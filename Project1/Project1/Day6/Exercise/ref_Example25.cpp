#include <iostream>
#include <string>
using namespace std;


int main()
{

  // Create a pointer to an int, initialize to NULL
  int * x = NULL;
  // Create a reference to that variable: call it reference #1
  int& y = *x;//STRANGE BUT OK
  // try printing the value - an error will result from dereferencing a NULL pointer
  cout << y << endl;

}
