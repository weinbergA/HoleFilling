#include "Coordinate.h"
#include <math.h>


Coordinate::Coordinate()
{
}

Coordinate::Coordinate(size_t row, size_t col)
{
	this->row = row;
	this->col = col;
}

size_t Coordinate::GetRow()
{
	return row;
}

size_t Coordinate::GetCol()
{
	return col;
}

void Coordinate::SetRow(size_t row)
{
	this->row = row;
}

void Coordinate::SetCol(size_t col)
{
	this->col = col;
}

float Coordinate::GetEuclideanDistance(Coordinate other)
{
	double xDifference = pow(GetRow() - other.GetRow(), 2);
	double yDifference = pow(GetCol() - other.GetCol(), 2);
	return sqrt(xDifference + yDifference);
}



Coordinate::~Coordinate()
{
}
