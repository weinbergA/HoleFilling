#pragma once
#include "Pixel.h"
#include "Image.h"

enum PixelConnectivity
{
	connected_4 = 4,
	connected_8 = 8
};

class IpixelValue
{
	virtual float calculatePixelValue(PixelConnectivity connectivity, Image img, Pixel pixel) = 0;
};
