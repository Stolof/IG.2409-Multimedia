all: bright_contr bright_stud bright_video contr_stud contr_video rotate_video

bright_contr: clean
	g++ -std=c++1y -o bright_contr_students.o -c bright_contr_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o bright_contr bright_contr_students.o `pkg-config --cflags --libs opencv`

bright_stud: clean
	g++ -std=c++1y -o brightness_students.o -c brightness_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o bright_stud brightness_students.o `pkg-config --cflags --libs opencv`

bright_video: clean
	g++ -std=c++1y -o bright_video_students.o -c bright_video_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o bright_video bright_video_students.o `pkg-config --cflags --libs opencv`

contr_stud: clean
	g++ -std=c++1y -o contrast_image_students.o -c contrast_image_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o contr_stud contrast_image_students.o `pkg-config --cflags --libs opencv`

contr_video: clean
	g++ -std=c++1y -o contrast_video_students.o -c contrast_video_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o contr_video contrast_video_students.o `pkg-config --cflags --libs opencv`

rotate_video: clean
	g++ -std=c++1y -o rotate_video_students.o -c rotate_video_students.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o rotate_video rotate_video_students.o `pkg-config --cflags --libs opencv`

clean:
	rm -f *.o bright_contr bright_stud bright_video contr_stud contr_video rotate_video
