#include "Image.h"


Image::Image(size_t rows, size_t columns)
{
	this->rows = rows;
	this->columns = columns;

	pixels = new Pixel* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		pixels[i] = new Pixel[columns];
	}

}

Image::~Image()
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] pixels[i];
	}
	delete[] pixels;
}



Pixel ** Image::GetPixels()
{
	return pixels;
}

Pixel* Image::GetPixel(size_t x, size_t y)
{
	if (x < rows && y < columns)
		return &pixels[x][y];

	return nullptr;
}
