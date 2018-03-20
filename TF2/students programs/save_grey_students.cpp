#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
 char* imageName = argv[1];
 Mat image;
 image = imread(imageName, CV_LOAD_IMAGE_COLOR); // added

 if( argc != 2 || !image.data )
 {
   printf( " No image data \n " );
   return -1;
 }

 Mat gray_image; // might need to add some things here.
 /*...
    ...
    ...
    ...*/
cvtColor(image, gray_image, COLOR_BGR2GRAY);
imwrite("newfileGray" ,gray_image);
// winname
namedWindow("color_image_window", WINDOW_AUTOSIZE);
imshow("color_image_window", image);

namedWindow("gray_image_window", WINDOW_AUTOSIZE);
imshow("gray_image_window", gray_image);
waitKey(0);

 return 0;
}
