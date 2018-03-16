#include <iostream>
#include <string>

#include "io.h"
#include "Student.h"
#include "Class.h"

using namespace std;
// acces a objects member with ptr* = &obj
// ptr->myPrint()
//Only non-const objects can call non-const functions.
// A constant object can't call regular functions.
// Hence, for a constant object to work you need a constant function.
void PrintStudent(const Student &s){
  int birthDay = s.Birthday();
  cout << "The name of the student is:" << s.Name() << " The date of birst is"
   << birthDay <<endl;
};
void PrintClass(const Classe &c){
  cout << "The class" << c.textbfName() << " Max students "<<
  c.MaxNumberOfStudents() << " students enrolled " <<  c.NumStudents() <<endl;
}

Student * EnterStudent(){
  //char* namestudent;
  //char* name;
  char name[127];
  int dob;

  cout << "Enter students name" << endl;
  cin >> name;
  cout << "Enter students date of birth" << endl;
  cin >> dob;
  //namestudent = new char[20];
  //namestudent = name;

  Student *student = new Student(name, dob);
  //Student newstudent(namestudent, dob);
  return student;
}

Classe * EnterClass(){
  string classname;
  int max;
  int numberofstudents;
  std::cout << "Enter the name of the class" << '\n';
  cin >> classname;
  std::cout << "Enter the max number of students" << '\n';
  cin >> max;

  Classe newclass(classname, max);
  Classe * classn;
  *classn = newclass;

  std::cout << "How many student " << '\n';
  cin >> numberofstudents;

  for(int i = 0; i < numberofstudents; i++){
    Student *s = EnterStudent();
    newclass.AddStudent(s);
  }
  return classn;

}
