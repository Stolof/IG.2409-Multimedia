#include <iostream>
#include <string>


#include "Student.h"
#include "Class.h"

using namespace std;

Classe::Classe(string cn, int max){
  name = cn;
  if (max > 1000){
    int newmax;
    cout << "The maximum number of students is 1000" << endl;
    exit(1);
  }
  else {
    max_amount_of_students = max;
    // students_enrolled[max_amount_of_students]; // warining
  }
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
    students_enrolled[index] = student;
    index = index + 1;
    return index;
  }

}
Student * Classe::GetStudent(int student_index) const{
  return students_enrolled[student_index];
}
