#pragma once
#include<opencv2/opencv.hpp>
#include "Image.h"
using namespace cv;

class ImageConverter
{
public:
	static Image getImage(Mat img, Mat mask);
	
};

