/*
 Main file to display every function made
*/

#include <iostream>

#include "Student.h"
#include "Class.h"
#include "io.h"

using namespace std;

int main() {

  Classe * newclass = EnterClass();
  PrintClass(*newclass);

  Student * newstudent = EnterStudent();
  PrintStudent(*newstudent);



  return 0;
}
