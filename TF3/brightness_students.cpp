#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
    // Read the image file
    char* imageName = argv[1];
    Mat source, m1, m2, m3, m4;

    source = imread(imageName, IMREAD_COLOR);

    // Check for failure
    if(source.empty()){
      cout << "Error opening the file" << endl;
      return -1;
    }

    double alpha = 1;    // contrast
    double beta = 50;    // brightness
    int rtype = -1 ;     // -1 for same type as input


     //increase the brightness by 50
     source.convertTo(m1,rtype, alpha,beta);

     //increase the brightness by 100
     source.convertTo(m2,rtype, alpha,100);

     //decrease the brightness by 50
     source.convertTo(m3,rtype, alpha,-50);

     //decrease the brightness by 100
     source.convertTo(m4,rtype, alpha,-100);

    //Defining window names for above images ???
    String original = "Soruce";
    String brightPlus50 = "Brightness plus 50";
    String brightPlus100 = "Brightness plus 100";
    String brightMinus50 = "Brightness minus 50";
    String brightMinus100 = "Brightness minus 100";

    //Create and open windows for above images
    namedWindow(original, WINDOW_AUTOSIZE);
    namedWindow(brightPlus50, WINDOW_AUTOSIZE);
    namedWindow(brightPlus100, WINDOW_AUTOSIZE);
    namedWindow(brightMinus50, WINDOW_AUTOSIZE);
    namedWindow(brightMinus100, WINDOW_AUTOSIZE);

    //Show above images inside the created windows.
    imshow(original, source);
    imshow(brightPlus50, m1);
    imshow(brightPlus100, m2);
    imshow(brightMinus50, m3);
    imshow(brightMinus100, m4);

     // Wait for any key stroke
     waitKey();

  //destroy all open windows
  destroyAllWindows();


    return 0;
}
