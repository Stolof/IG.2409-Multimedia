CC=g++ -std=c++11 -Wall -Wextra -Werror -Wno-sign-compare -O2

clean:
	rm -f student class io main

main:
	rm -f student class io main
	g++ -o main *.cc

student.o:
	rm -f student
	g++ -o student -c student.cc

class.o:
	rm -f class
	g++ -o class -c class.cc

io.o:
	rm -f io
	g++ -o io -c class.cc
