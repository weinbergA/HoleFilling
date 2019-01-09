#pragma once
#include "Pixel.h"

class Iweighting
{
	virtual float getPixelsWeighting(Pixel p1, Pixel p2, int z, int epsilon) = 0;
};
