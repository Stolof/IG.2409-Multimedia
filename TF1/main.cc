/*
 Main file to display every function made
*/

#include <iostream>

#include "Student.h"
#include "Class.h"
#include "io.h"

using namespace std;

int main() {
  char studname[4];

  studname[0] = 'O';
  studname[1] = 'l';
  studname[2] = 'o';
  studname[3] = 'f';

  Student* newstudent = new Student(studname, 19940529);

  cout << "The name of the student: " << newstudent->Name() <<endl;
  cout << "The date of birth: " << newstudent->Birthday() << endl;

  Classe* newclass = new Classe("multimedia", 50);

  cout << "Name of class: " << newclass->textbfName() << endl;
  cout << "Max number of students: " << newclass->MaxNumberOfStudents() <<endl;
  cout << "Number of enrolled students: " << newclass->NumStudents() <<endl;
  newclass->AddStudent(newstudent);
  cout << "Added student: " << newclass->NumStudents() <<endl;
  newclass->GetStudent(0);

  Student std1(studname, 19950529);
  Classe class1("XML", 20);

  //PrintClass(std1);
  //PrintStudent(class1);
  //newstudent = EnterStudent();
  //cout << "Name of class: " << newstudent->Name() << endl;
  //newclass = EnterClass();
  //cout << "Name of class: " << newclass->textbfName() << endl;


  return 0;
}
