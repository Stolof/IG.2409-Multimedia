#ifndef __Student__
#define __Student__

class Student{
private:
   const char *name[127]; // points to a array with char
  int date_of_birth;

public:
  Student(char sn[], int dob);
  const char* Name();
  int Birthday() const;

};

#endif
