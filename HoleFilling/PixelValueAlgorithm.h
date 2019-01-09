#pragma once
#include "IpixelValue.h"
#include <vector>

class PixelValueAlgorithm: IpixelValue
{

public:

	///Calculate the color value for pixel by its boundary
	float calculatePixelValue(PixelConnectivity connectivity, Image img, Pixel pixel);
	PixelValueAlgorithm();
	~PixelValueAlgorithm();

private:
	/***helpers functions***/
	std::vector<Pixel> get4connectedBoundary(Pixel pixel, Image img);
	std::vector<Pixel> get8connectedBoundary(Pixel pixel, Image img);
};

