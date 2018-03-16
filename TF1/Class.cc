#include <iostream>
#include <string>


#include "Student.h"
#include "Class.h"

using namespace std;

Classe::Classe(string cn, int max){
  name = cn;
  if (max > 1000){
    cout << "The maximum number of students is 1000" << endl;
  }
  else {
    max_amount_of_students = max;
  }
  students_enrolled[max];
  index = 0;
}

string Classe::textbfName() const{
  return name;
}

int Classe::MaxNumberOfStudents() const{
  return max_amount_of_students;
}

int Classe::NumStudents() const{
  return index;

}
int Classe::AddStudent(Student * student){
  if (index >= max_amount_of_students){
    return -1;
  }
  else {
    students_enrolled[index] = *student;
    //cout << "Student " << &students_enrolled[index] <<endl;
    index = index + 1;
    return index;
  }

}
void Classe::GetStudent(int student_index){
  //cout << "Student " << *students_enrolled[student_index] <<endl;
  cout << "Name of student: " << students_enrolled[student_index].Name() << endl;
  cout << "Date of birth: " << students_enrolled[student_index].Birthday() << endl;
  //return &students_enrolled[student_index];
}
