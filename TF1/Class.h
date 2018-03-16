#ifndef __CLASS__
#define __CLASS__


#include<iostream> // is this needed?
#include<string>

#include "Student.h"

using namespace std;

class Classe{

private:
  string name;
  int max_amount_of_students;

public:
  int index;
  Student students_enrolled[];
  Classe(string cn, int max);
  string textbfName() const;
  int MaxNumberOfStudents() const;
  int NumStudents() const;
  int AddStudent(Student * student);
  void GetStudent(int student_index);

};
#endif
