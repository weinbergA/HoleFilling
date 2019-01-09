#pragma once
#include "Pixel.h"

class Image
{
public:
	///Create an image by numbers of rows and cols
	Image(size_t rows, size_t columns);

	///Delete image ind free its memory
	~Image();

	///Get the pixels of the image
	Pixel ** GetPixels();

	///Get a specific pixel from image
	Pixel* GetPixel(size_t x, size_t y);

private:
	Pixel** pixels;
	size_t rows;
	size_t columns;
};
