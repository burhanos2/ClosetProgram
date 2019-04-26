#include "pch.h"
#include "Drawer.h"


Drawer::Drawer()
{
}


Drawer::~Drawer()
{
}

Drawer::Drawer(int& _capacity, float& _sizeX, float& _sizeY, float& _sizeZ, std::string& _color)
{
	sizeX = _sizeX;
	sizeY = _sizeY;
	sizeZ = _sizeZ;
	capacity = _capacity;
	color = _color;
}

void Drawer::ShowContents()
{
}
