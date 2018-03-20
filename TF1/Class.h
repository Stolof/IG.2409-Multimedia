#ifndef __CLASS__
#define __CLASS__

#include "Student.h"

using namespace std;

class Classe{

private:
  string name;
  int max_amount_of_students;

public:
  int index;
  Student * students_enrolled[];
  Classe(string cn, int max);
  string textbfName() const;
  int MaxNumberOfStudents() const;
  int NumStudents() const;
  int AddStudent(Student * student);
  Student * GetStudent(int student_index) const;

};
#endif
