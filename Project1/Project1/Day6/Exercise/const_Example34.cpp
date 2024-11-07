#include <iostream>
#include <string>
using namespace std;



class Student
{
private:
  mutable string studentName;
public:
  Student(const char* name) : studentName(name)
  {
    cout << "Initialized string to: " << studentName << endl;
  }

  void print() const
  {
    cout << "StudentName:" << studentName << endl;
    // This member function is marked const, so it can not modify an member data - 
    // UNLESS that member data is marked mutable.
    studentName = string("Kally");
    cout << "Oh, btw, now StudentName:" << studentName << endl;
  }
};

int main()
{
  const char name[50] = "Yossi";
  Student student(name);
  student.print();
  cout << "Exiting the program - last line of code. Bye!"<<endl;
  return 0;
}
