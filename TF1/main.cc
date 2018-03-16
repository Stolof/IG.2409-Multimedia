/*
 Main file to display every function made
 Need to kill the pointer...
*/

#include <iostream>

#include "Student.h"
#include "Class.h"
#include "io.h"

using namespace std;

int main() {

  Classe * newclass = EnterClass();
  cout << "Name of class: " << newclass->textbfName() << endl;
  cout << "Max number of students: " << newclass->MaxNumberOfStudents() <<endl;
  cout << "Number of enrolled students: " << newclass->NumStudents() <<endl;

  Student * newstudent = EnterStudent();

  cout << "The name of the student: " << newstudent->Name() <<endl;
  cout << "The date of birth: " << newstudent->Birthday() << endl;

  //Classe cls1("XML", 20);
  //cls1.AddStudent(newstudent);
  //PrintClass(cls1);

  char studname[4];
  studname[0] = 'O';
  studname[1] = 'l';
  studname[2] = 'o';
  studname[3] = 'f';
  Student std1(studname, 19950529);
  PrintStudent(std1);


  return 0;
}
