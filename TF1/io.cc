#include <iostream>
#include <string>

#include "io.h"
#include "Student.h"
#include "Class.h"

using namespace std;

void PrintStudent(const Student &s1){ // maybe remove the s
  Student s = s1;
  const char* n;
  n = s.Name();
  cout << "The name of the student is: " << n << ", The students birthday: "
   << s.Birthday() <<endl;
}

void PrintClass(const Classe &c){

  cout << "The class " << c.textbfName() << ", Max students "<<
  c.MaxNumberOfStudents() << ", students enrolled " <<  c.NumStudents() <<endl;

  for(int i = 0; i < c.NumStudents(); i++){
    cout << "student number: " << (i + 1) << endl;
    Student *sp = c.GetStudent(i);
    PrintStudent(*sp); // trouble in paradise

  }

}

Student * EnterStudent(){
  char name[127];
  int dob;

  cout << "Enter students name" << endl;
  cin >> name;
  cout << "Enter students date of birth" << endl;
  cin >> dob;
  Student *student = new Student(name, dob);

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

  Classe * classn = new Classe(classname, max);
  cout << "How many student " << endl;
  cin >> numberofstudents;

  for(int i = 0; i < numberofstudents; i++){
    Student *s = EnterStudent();
    classn->AddStudent(s);
  }

  return classn;

}
