#pragma once
#include <string>
#include <list>
#include "Drawer.h"

class Closet
{
public:
	Closet();
	~Closet();

	Closet(int& _capacity, float& _sizeX, float& _sizeY, float& _sizeZ, std::string& _color, float& _locX, float& _locY, float& _locZ);

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

