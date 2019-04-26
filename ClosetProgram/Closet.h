#pragma once
#include <string>
#include <list>
#include "Drawer.h"

class Closet
{
public:
	Closet();
	~Closet();

	Closet(const int& _capacity,
		const float& _sizeX, const float& _sizeY, const float& _sizeZ,
		const std::string& _color,
		const float& _locX, const float& _locY, const float& _locZ);

	float sizeX;
	float sizeY;
	float sizeZ;
	
	
	std::string color;
	int capacity;

	float locationX;
	float locationY;
	float locationZ;

	std::list<Drawer> _drawers;

};

