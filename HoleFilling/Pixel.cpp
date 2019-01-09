#include "Pixel.h"

Pixel::Pixel()
{
}

Pixel::Pixel(size_t x, size_t y, float color) : coord(x,y)
{
	this->color = color;
}

Coordinate Pixel::GetCoordinate()
{
	return coord;
}

void Pixel::SetCoordinate(size_t x, size_t y)
{
	coord.SetRow(x);
	coord.SetCol(y);
}



float Pixel::GetColor()
{
	return color;
}

void Pixel::SetColor(float value)
{
	color = value;
}

Pixel::~Pixel()
{
}
