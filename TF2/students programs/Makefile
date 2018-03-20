all: first_opencv

first_opencv: clean
	g++ -std=c++1y -o first_opencv.o -c save_grey_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o grayimage first_opencv.o `pkg-config --cflags --libs opencv`
clean:
	rm -f *.o grayimage
