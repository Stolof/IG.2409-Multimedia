#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    // Read the image file
    char* imageName = argv[1];
    Mat source, m1, m2, m3, m4;

    source = imread(imageName, IMREAD_COLOR);

    // Check for failure
    if(source.empty()){
      cout << "Error opening the file" << endl;
      return -1;
    }

    //increase the contrast by 2
    int rtype = -1;
    double alpha = 2;
    double beta = 0;
    source.convertTo(m1,rtype, alpha,beta);

    //increase the contrast by 4
    source.convertTo(m2,rtype, alpha*2,beta);

    //decrease the contrast by 0.5
    source.convertTo(m3,rtype, 0.5,beta);

     //decrease the contrast by 0.25
     source.convertTo(m4,rtype, 0.25,beta);

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

    //Show above images inside the created windows.
    imshow(orignalName,source);
    imshow(constrast2,m1);
    imshow(constrast4,m2);
    imshow(constrast05,m3);
    imshow(constrast025,m4);

     // Wait for any key stroke
     waitKey(0);
    //destroy all open windows
    destroyAllWindows();

    return 0;
}
