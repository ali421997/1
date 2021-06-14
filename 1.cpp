#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(void){

	string imagePath = "number_zero.jpg";

	Mat testImage = imread(imagePath, 0);

	cout << testImage;

	return(0);

}
