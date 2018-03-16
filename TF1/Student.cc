#include <iostream>

#include "Student.h"

using namespace std;

Student::Student(char sn[], int bod){
  *name = sn;
  date_of_birth = bod;
}

char* Student::Name() const {
  return *name;
}

int Student::Birthday() const{
  return date_of_birth % 10000;
}
/*
int main() {
  char studentname[5];

  studentname[0] = 'O';
  studentname[1] = 'l';
  studentname[2] = 'o';
  studentname[3] = 'f';

  Student st1(studentname, 19940529);
  cout << "The name of the student is: " << st1.Name() <<endl;
  cout << "The date of birst is: " << st1.Birthday() << endl;
  return 0;
}
*/
