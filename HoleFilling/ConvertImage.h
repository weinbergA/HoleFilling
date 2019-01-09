#pragma once
#include "Image.h"
#include<stdio.h>
#include <cstring>
#include<opencv2/opencv.hpp>

class ConvertImage
{
	
public:
	Image GetImage(std::string path);
	ConvertImage();
	~ConvertImage();
};

