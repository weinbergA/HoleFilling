#pragma once
#include "Coordinate.h"

class Pixel
{
public:
	///Create a pixel
	Pixel();

	///Create a pixel by given its position and color
	Pixel(size_t x, size_t y, float color);

	///Get pixel coordinate
	Coordinate GetCoordinate();

	///Sex pixel coordinate
	void SetCoordinate(size_t x, size_t y);

	///Get pixel color
	float GetColor();

	///Set pixel color value
	void SetColor(float value);

	~Pixel();
private:
	Coordinate coord;
	float color;
};
