#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    //open the video file for reading
    VideoCapture cap("chaplin.mp4");

    // if not success, exit program
    if(!cap.isOpened()){
      cout << "Error opening video stream or file" << endl;
      return -1;
    }

    //Defining window names for above images
    String orignalName = "Source";
    String constrast2 = "Constrast 2";
    String constrast4 = "Constrast 4";
    String constrast05 = "Constrast 0.5";
    String constrast025 = "Constrast 0.25";

    //Create and open windows for above images
    namedWindow(orignalName, WINDOW_AUTOSIZE);
    namedWindow(constrast2, WINDOW_AUTOSIZE);
    namedWindow(constrast4, WINDOW_AUTOSIZE);
    namedWindow(constrast05, WINDOW_AUTOSIZE);
    namedWindow(constrast025, WINDOW_AUTOSIZE);


    while (true)
    {
         // read a new frame from video
         Mat frame, m1, m2, m3, m4;
         cap >> frame;
         //Breaking the while loop at the end of the video
        bool bSuccess = cap.read(frame);
        if (bSuccess == false)
        {
            cout << "Found the end of the video" << endl;
            break;
        }

       //increase the contrast by 2
       int rtype = -1;
       double alpha = 2;
       double beta = 0;
       frame.convertTo(m1,rtype, alpha,beta);

       //increase the contrast by 4
       frame.convertTo(m2,rtype, alpha*2,beta);

       //decrease the contrast by 0.5
       frame.convertTo(m3,rtype, 0.5,beta);

       //decrease the contrast by 0.25
       frame.convertTo(m4,rtype, 0.25,beta);

       //Show above images inside the created windows.
       imshow(orignalName,frame);
       imshow(constrast2,m1);
       imshow(constrast4,m2);
       imshow(constrast05,m3);
       imshow(constrast025,m4);

        //wait for for 10 ms until any key is pressed.
        //If the 'Esc' key is pressed, break the while loop.
        //If the any other key is pressed, continue the loop
        //If any key is not pressed withing 10 ms, continue the loop
        if (waitKey(10) == 27)
        {
            cout << "Esc key is pressed by user. Stoppig the video" << endl;
            break;
        }
    }

    return 0;
}
