#include "PixelValueAlgorithm.h"

float PixelValueAlgorithm::calculatePixelValue(PixelConnectivity connectivity, Image img, Pixel pixel)
{
	
}

PixelValueAlgorithm::PixelValueAlgorithm()
{
}


PixelValueAlgorithm::~PixelValueAlgorithm()
{
}

std::vector<Pixel>  PixelValueAlgorithm::get4connectedBoundary(Pixel pixel, Image img)
{
	std::vector<Pixel> result;
	size_t x = pixel.GetCoordinate().GetRow();
	size_t y = pixel.GetCoordinate().GetCol();

	result.push_back(img.GetPixels()[x][y + 1]);
	result.push_back(img.GetPixels()[x][y - 1]);
	result.push_back(img.GetPixels()[x +1][y]);
	result.push_back(img.GetPixels()[x - 1][y]);

	return result;
}

std::vector<Pixel> PixelValueAlgorithm::get8connectedBoundary(Pixel pixel, Image img)
{
	std::vector<Pixel> result;
	size_t x = pixel.GetCoordinate().GetRow();
	size_t y = pixel.GetCoordinate().GetCol();

	result.push_back(img.GetPixels()[x][y + 1]);
	result.push_back(img.GetPixels()[x][y - 1]);
	result.push_back(img.GetPixels()[x + 1][y]);
	result.push_back(img.GetPixels()[x - 1][y]);
	result.push_back(img.GetPixels()[x + 1][y + 1]);
	result.push_back(img.GetPixels()[x + 1][y - 1]);
	result.push_back(img.GetPixels()[x - 1][y + 1]);
	result.push_back(img.GetPixels()[x - 1][y - 1]);

	return result;
}
