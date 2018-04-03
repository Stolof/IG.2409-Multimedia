//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    // open the video file for reading
    VideoCapture cap("chaplin.mp4");

    // if not success, exit program
    if(!cap.isOpened()){
      cout << "Error opening video stream or file" << endl;
      return -1;
    }

     //define original and rotate window name
     String orignal = "Origanl window";
     String rotated = "Rotated window";

     namedWindow(orignal, WINDOW_AUTOSIZE);
     namedWindow(rotated, WINDOW_AUTOSIZE);


    int iAngle = 180;

    // Create trackbar

    // value position of the tracker pointed by the angle
    int maxAngle = 360;
    // TrackbarCallback onChange = 0,
    createTrackbar("Rotationbar", rotated, &iAngle, maxAngle);

    while (true)
    {
      // read a new frame from video
      Mat frame, rotate, M;

      //if not success, break loop or if end of video
        bool bSuccess = cap.read(frame);
        if (!bSuccess){
                       cout << "Cannot read the frame from video file or end of video file" << endl;
                       break;
        }

        //show the two video
        imshow(orignal,frame);

        //get the affine transformation matrix 2D
        Point2f center(frame.cols/2, frame.rows/2);
        double scale = 1;
        M = getRotationMatrix2D(center, (iAngle - 180), scale);

        // Rotate the image using warpAffine
        warpAffine(frame, rotate, M, rotate.size());

        //show the rotate frame
        imshow(rotated,rotate);

        //wait for 'esc' key press for 30 ms. If 'esc' key is pressed, break loop
        if (waitKey(30) == 27){
            cout << "Esc key is pressed by user. Stoppig the video" << endl;
            break;
        }
    }

    return 0;
}
