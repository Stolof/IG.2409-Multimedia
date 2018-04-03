#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main( int argc, char** argv )
{
                           /*< Simple contrast control */
                           /*< Simple brightness control */
    //reading the image and creating a new image matrix
   Mat source;
   source = imread("./eco.jpg", IMREAD_COLOR);

    //asking for alpha [1.0-3.0] and beta values [0-100]
    double alpha = 0;    // contrast
    int beta = 0;       // brightness
    while (true){
      cout << "Enter alpha value between 1.0 - 3.0 " << endl;
      cin >> alpha;
      cout << "Enter beta value between 1 - 100 " << endl;
      cin >> beta;
      if ( 1 <= beta && 100 >= beta  && 1.0 <= alpha && 3.0 >= alpha){
        break;
      }
    }

    Mat new_image = Mat::zeros(source.size(), source.type());
    for( int x = 0 ; x < source.cols ; ++x) {
        for( int y = 0 ; y < source.rows ; ++y ) {
            for( int c = 0 ; c < 3; ++c ) {
                new_image.at<Vec3b>(y,x)[c] =
                saturate_cast<uchar>( alpha*( source.at<Vec3b>(y,x)[c] ) + beta );
           }
        }
    }

    //create windows
    namedWindow("Source", WINDOW_AUTOSIZE);
    namedWindow("New image", WINDOW_AUTOSIZE);


    //show original and new image
    imshow("Source", source);
    imshow("New image", new_image);


    waitKey();
    return 0;
}
