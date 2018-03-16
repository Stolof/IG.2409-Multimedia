#include <iostream>
//#include <cstring>
#include<string>


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
int Classe::AddStudent(Student * student){ // Pointer fuck up
  if (index >= max_amount_of_students){
    return -1;
  }
  else {
    students_enrolled[index] = *student;
    index = index + 1;
    return index;
  }

}
Student Classe::GetStudent(int student_index){
  return students_enrolled[student_index];
}
