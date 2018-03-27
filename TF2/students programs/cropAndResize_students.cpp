#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(void)
{
Mat source, scaleD, scaleU;

// Read source image
source = imread("../van_gogh.jpg", IMREAD_COLOR);

// Scaling factors
double scaleX = 0.6;
double scaleY = 0.6;

// Scaling down the image 0.6 times
resize(source, scaleD, Size(round(scaleX*source.cols),round(scaleY*source.rows)), scaleX, scaleY, INTER_LINEAR);
imwrite("scaleD.jpg", scaleD);
// Scaling up the image 1.8 times
resize(source, scaleU, Size(round(3*scaleX*source.cols),round(3*scaleY*source.rows)), scaleX, scaleY, INTER_LINEAR);
imwrite("scaleU.jpg", scaleU);


//Cropped image
Mat crop = source(Range(20, 150),Range(30, 200));
imwrite("crop.jpg", crop);

//Display windows and show for all four images
namedWindow("SOURCE", WINDOW_AUTOSIZE);
imshow("SOURCE", source);

namedWindow("SCALED_DOWN", WINDOW_AUTOSIZE);
imshow("SCALED_DOWN", scaleD);

namedWindow("SCALED_UP", WINDOW_AUTOSIZE);
imshow("SCALED_UP", scaleU);

namedWindow("CROPPED", WINDOW_AUTOSIZE);
imshow("CROPPED", crop);

waitKey(0);                         // wait for 0 to be pressed

}
