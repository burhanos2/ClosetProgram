#include "pch.h"
#include "Drawer.h"
#include <iostream>

Drawer::Drawer()
{
}


Drawer::~Drawer()
{
}

Drawer::Drawer(const int& _capacity, const float& _sizeX, const float& _sizeY, const float& _sizeZ, const std::string& _color)
{
	sizeX = _sizeX;
	sizeY = _sizeY;
	sizeZ = _sizeZ;
	capacity = _capacity;
	color = _color;
}

void Drawer::ShowContents()
{
	std::list<std::string>::iterator it;
	for (it = contents.begin(); it != contents.end(); ++it) 
	{
		std::cout << *it;
	}
}
