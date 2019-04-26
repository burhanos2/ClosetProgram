#include "pch.h"
#include "Closet.h"

Closet::Closet(int _capacity, float _sizeX, float _sizeY, float _sizeZ, std::string _color, float _locationX, float _locationY, float _locationZ)
{
	capacity = _capacity;

	sizeX = _sizeX;
	sizeY = _sizeY;
	sizeZ = _sizeZ;

	currentColor = _color;

	locationX = _locationX;
	locationY = _locationY;
	locationZ = _locationZ;

	std::list<Drawer> drawers = {};
	drawers.resize(capacity);
}

Closet::Closet()
{}
Closet::~Closet()
{
}


bool Closet::Open()
{
	return false;
}

bool Closet::Close()
{
	return false;
}

void Closet::SelectDrawer(int i)
{
}

//getters hier
#pragma region Getters
float Closet::GetSizeX()
{
	return sizeX;
}

float Closet::GetSizeY()
{
	return sizeY;
}

float Closet::GetSizeZ()
{
	return sizeZ;
}

std::string Closet::GetColor()
{
	return currentColor;
}

int Closet::GetCapacity()
{
	return capacity;
}

float Closet::GetLocationX()
{
	return locationX;
}

float Closet::GetLocationY()
{
	return locationY;
}

float Closet::GetLocationZ()
{
	return locationZ;
}
#pragma endregion

