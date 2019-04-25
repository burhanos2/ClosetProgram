#include "pch.h"
#include "Drawer.h"


Drawer::Drawer(int _capacity, std::string _color)
{
	currentColor = _color;
	capacity = _capacity;
}

Drawer::~Drawer()
{
}

void Drawer::ShowContents()
{

}

#pragma region setters
void Drawer::SetSizeX(float sizeOfClosetX, int closetCap)
{
	sizeX = sizeOfClosetX / closetCap;
}

void Drawer::SetSizeY(float sizeOfClosetY, int closetCap)
{
	sizeY = sizeOfClosetY / closetCap;
}

void Drawer::SetSizeZ(float sizeOfClosetZ, int closetCap)
{
	sizeZ = sizeOfClosetZ / closetCap;
}
#pragma endregion