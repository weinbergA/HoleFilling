#pragma once
class Coordinate
{
public:
	///Create a coordinate
	Coordinate();

	///Create a coordinate with the values of x and y
	Coordinate(size_t row, size_t col);

	~Coordinate();

	///Get x value
	size_t GetRow();

	///Get y value
	size_t GetCol();

	///Set x value
	void SetRow(size_t x);

	///Set y value
	void SetCol(size_t y);

	///Get Euclidean Distance from other coordinate
	float GetEuclideanDistance(Coordinate other);

private:
	size_t row;
	size_t col;
};

