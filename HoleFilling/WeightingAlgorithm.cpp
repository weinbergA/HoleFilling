#include "WeightingAlgorithm.h"
#include <cmath>

float WeightingAlgorithm::GetPixelsWeighting(Pixel p1, Pixel p2, int z, int epsilon)
{
	float euclideanDistance = p1.GetCoordinate().GetEuclideanDistance(p2.GetCoordinate();
	double powZ = pow(euclideanDistance, z);
	return 1 / (powZ + epsilon);
}
