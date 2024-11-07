#include <iostream>
#include <string>
using namespace std;


int main()
{

  int x = 5;
  int& y = 5;//ERROR
  const int& y = 5;

  cout << "x = " << x << " y = " << y << endl;

}
