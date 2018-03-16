#include <iostream>

#include "Student.h"
#include "Class.h"
#include "io.h"

using namespace std;

int main() {
  // the Arrow(->) is for accessing some thing beyond a pointer
  char studname[5];

  studname[0] = 'o';
  studname[1] = 'l';
  studname[2] = 'o';
  studname[3] = 'F';

  //Student std(studname, 19940529);
  Student* newstudent = new Student(studname, 19940529);


  //newstudent = &std;
  cout << "The name of the student is: " << newstudent->Name() <<endl;
  cout << "The date of birst is " << newstudent->Birthday() << endl;
  //Student *stdpntr;
  //*stdpntr = st1;

  //Classe cl1("multimedia", 50);
  //cl1.textbfName();
  //cl1.MaxNumberOfStudents();
  //cl1.NumStudents();
  //cl1.AddStudent(stdpntr);
  //cl1.GetStudent(0);

  //PrintClass(cl1);
  //PrintStudent(st1);
  //EnterStudent();
  //EnterClass();

  return 0;
}
