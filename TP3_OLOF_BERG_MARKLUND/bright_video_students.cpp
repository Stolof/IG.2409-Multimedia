#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv){
    //open the video file for reading
    VideoCapture cap("chaplin.mp4");

    // if not success, exit program
    if(!cap.isOpened()){
      cout << "Error opening video stream or file" << endl;
      return -1;
    }

    //Defining window names
    String original = "Soruce";
    String brightPlus50 = "Brightness plus 50";
    String brightPlus100 = "Brightness plus 100";
    String brightMinus50 = "Brightness minus 50";
    String brightMinus100 = "Brightness minus 100";

    //Create and open windows for above window names
    namedWindow(original, WINDOW_AUTOSIZE);
    namedWindow(brightPlus50, WINDOW_AUTOSIZE);
    namedWindow(brightPlus100, WINDOW_AUTOSIZE);
    namedWindow(brightMinus50, WINDOW_AUTOSIZE);
    namedWindow(brightMinus100, WINDOW_AUTOSIZE);

    while (true)
    {
        Mat frame;

         // read a new frame from video
         cap >> frame;

         //Breaking the while loop at the end of the video
         if(!cap.read(frame)){
           std::cout << "End of video reached" << endl;
           break;
         }

        //increase the brightness by 50
        Mat m1,m2,m3,m4;
        int rtype = -1;
        double alpha = 1;
        double beta = 50;
        frame.convertTo(m1,rtype,alpha,beta);

        //increase the brightness by 100
        frame.convertTo(m2,rtype,alpha,100);

        //decrease the brightness by 50
        frame.convertTo(m3,rtype,alpha,-beta);

        //decrease the brightness by 100
        frame.convertTo(m4,rtype,alpha,-100);

        //Show above frames inside the created windows.
        imshow(original, frame);
        imshow(brightPlus50, m1);
        imshow(brightPlus100, m2);
        imshow(brightMinus50, m3);
        imshow(brightMinus100, m4);
        //wait for for 10 ms until any key is pressed.
        //If the 'Esc' key is pressed, break the while loop.
        //If the any other key is pressed, continue the loop
        //If any key is not pressed withing 10 ms, continue the loop
        if (waitKey(10) == 27){
            cout << "Esc key is pressed by user. Stoppig the video" << endl;
            break;
        }
    }

    return 0;
}
