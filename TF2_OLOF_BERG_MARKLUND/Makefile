all: clean gray_student crop_and_resize rotate_students video_read video_write

gray_student:
	g++ -std=c++1y -o save_grey_students.o -c save_grey_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o grayimage save_grey_students.o `pkg-config --cflags --libs opencv`


crop_and_resize:
		g++ -std=c++1y -o cropAndResize_students.o -c cropAndResize_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
		g++ -o carimage cropAndResize_students.o `pkg-config --cflags --libs opencv`

rotate_students:
		g++ -std=c++1y -o rotate_students.o -c rotate_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
		g++ -o rotateimage rotate_students.o `pkg-config --cflags --libs opencv`

video_read:
		g++ -std=c++1y -o videoRead_students.o -c videoRead_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
		g++ -o videoread videoRead_students.o `pkg-config --cflags --libs opencv`

video_write:
		g++ -std=c++1y -o videoWrite_students.o -c videoWrite_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
		g++ -o videowrite videoWrite_students.o `pkg-config --cflags --libs opencv`

clean:
	rm -f *.o grayimage carimage rotateimage videoread videowrite
