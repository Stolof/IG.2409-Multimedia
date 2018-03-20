#include <iostream>
#include <string.h>

#include "Student.h"

using namespace std;

Student::Student(char *sn, int bod){
  strcpy(name , sn);
  name[127] = 0;
  date_of_birth = bod;
}

const char* Student::Name() {
  return name;
}

int Student::Birthday() const{
  return date_of_birth % 10000;
}
