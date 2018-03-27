#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main(){

  // Create a VideoCapture object and use camera to capture the video
  VideoCapture capture(0);

  // Check if camera opened successfully
  if(!capture.isOpened()){
    cout << "Error opening video stream or file" << endl;
    return -1;
  }

  // Default resolutions of the frame are obtained.The default resolutions are system dependent.
  int frame_width = capture.get(CV_CAP_PROP_FRAME_WIDTH);
  int frame_height = capture.get(CV_CAP_PROP_FRAME_HEIGHT);
  int fps = 10;
  int fcc = CV_FOURCC('M','J','P','G');
  Size s(frame_width,frame_height);

  // Define the codec and create VideoWriter object.The output is stored in 'outcpp.avi' file.
  VideoWriter video("outcpp.avi", fcc, fps, s, 1);

  while(1){

    Mat frame;
    // Capture frame-by-frame
    capture >> frame;
    // If the frame is empty, break immediately
    if(frame.empty()){
      break;
    }
    // Write the frame into the file 'outcpp.avi'
    video.write(frame);
    //imwrite("outcpp.avi",frame);

    // Display the resulting frame
    imshow("Video Result", frame);
    waitKey(1);

    // Press  ESC on keyboard to  exit
    char c=(char)waitKey(25);
    if(c==27)
      break;
  }

  // When everything done, release the video capture and write object
 capture.release();

  // Closes all the frames
  destroyAllWindows();

  return 0;
}
