#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
 char* imageName = argv[1];
 Mat image;
 image = imread(imageName, IMREAD_COLOR); // Read the agr as file, with color.
 if( argc != 2 || !image.data )
 {
   printf( " No image data \n " );
   return -1;
 }

 Mat gray_image;

cvtColor(image, gray_image, COLOR_BGR2GRAY);        //Make a gray image

imwrite("newfileGray.jpg" ,gray_image);             //Write the file

namedWindow("color_image_window", WINDOW_AUTOSIZE); //Make window
imshow("color_image_window", image);                //Open image in window

namedWindow("gray_image_window", WINDOW_AUTOSIZE);
imshow("gray_image_window", gray_image);
waitKey(0);                                         // wait for 0 to be pressed

 return 0;
}
