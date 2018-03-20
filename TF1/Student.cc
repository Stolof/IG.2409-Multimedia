#include <iostream>

#include "Student.h"

using namespace std;

Student::Student(char sn[], int bod){
  *name = sn;
  date_of_birth = bod;
}

 const char* Student::Name() {
  return *name;
}

int Student::Birthday() const{
  return date_of_birth % 10000;
}
