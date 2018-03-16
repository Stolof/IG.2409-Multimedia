#ifndef __Student__
#define __Student__

class Student{
private:
  char *name[127]; // points to a array with char
  int date_of_birth;

public:
  Student(char sn[], int dob);
  char* Name() const;
  int Birthday() const;

};

#endif
