#ifndef __Student__
#define __Student__

class Student{
private:
  char name[128]; // I get warning
  int date_of_birth;

public:
  Student(char sn[], int dob);
  const char* Name();
  int Birthday() const;

};

#endif
