#include "pch.h"
#include "Closet.h"

Closet::Closet()
{
}


Closet::~Closet()
{
}

Closet::Closet(const int& _capacity, const float& _sizeX, const float& _sizeY, const float& _sizeZ, const std::string& _color, const float& _locX, const float& _locY, const float& _locZ)
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

void Closet::FillCloset(int drawerCapacity, std::string drawerColor, std::vector<std::string> _contentOfDrawer)
{
	for (int i = 0; i < capacity; i++)
	{
		Drawer drawer(drawerCapacity, (sizeX / capacity), (sizeY / capacity), (sizeZ / capacity), drawerColor); // int cap, float x, float y ,float z, string color
		drawer.contents.push_back (_contentOfDrawer.at(i));
		drawers.push_back(drawer);
	}
	drawers.resize(capacity);
}
