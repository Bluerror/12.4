#include <opencv2/opencv.hpp>
#include "funtions.h"

using namespace cv;
using namespace std;

int main()
{

	double start = static_cast<double>(cvGetTickCount());
	cv::Mat src = imread("C://Users//Lenovo//source//repos//12.4//ai.jpg", 0);
	ifftDemo();
	cv::Mat dst;
	imshow("dst", dst);
	cv::Mat src1 = imread("C://Users//Lenovo//source//repos//12.4//ma.jpg", 0);
	ifftDemo();
	cv::Mat dst1; 
	imshow("dst1", dst1);

	cv::Mat final;

	
	add(dst, dst1,final);
	imshow("final", final);
	

	waitKey(0);
	return 0;
}
