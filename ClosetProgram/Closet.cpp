#include "pch.h"
#include "Closet.h"


Closet::Closet()
{
}


Closet::~Closet()
{
}

Closet::Closet(int& _capacity, float& _sizeX, float& _sizeY, float& _sizeZ, std::string& _color, float& _locX, float& _locY, float& _locZ)
{
	sizeX = _sizeX;
	sizeY = _sizeY;
	sizeZ = _sizeZ;

	color = _color;
	capacity = _capacity;

	locationX = _locX;
	locationY = _locY;
	locationZ = _locZ;
}
