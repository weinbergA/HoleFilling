#pragma once
#include "Iweighting.h"

class WeightingAlgorithm: public Iweighting
{
public:
	float GetPixelsWeighting(Pixel p1, Pixel p2, int z, int epsilon);
};
