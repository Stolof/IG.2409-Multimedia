#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(void)
{
Mat source, M, result;

// Reading the image
source = imread("../van_gogh.jpg", IMREAD_COLOR);

Point2f center(source.cols/2, source.rows/2);
double rotationAngle=30;
double scale=1;

// Getting the matrix which will define the rotation
M = getRotationMatrix2D(center, rotationAngle, scale);

// Rotating the source and storing in result
cv::warpAffine(source, result, M, result.size());

// Create windows for display
namedWindow("Original", WINDOW_AUTOSIZE);
namedWindow("Rotated", WINDOW_AUTOSIZE);

// Display images
imshow("Rotated", result);
imshow("Original", source);

waitKey(0); // wait for 0 to be pressed
}
