#pragma once
#include <string>

class Drawer
{
public:
	Drawer(int _capacity, std::string _color);
	~Drawer();

	void ShowContents();

	void SetSizeX(float sizeOfClosetX, int closetCap);
	void SetSizeY(float sizeOfClosetY, int closetCap);
	void SetSizeZ(float sizeOfClosetZ, int closetCap);
	
private:
	float sizeX;
	float sizeY;
	float sizeZ;

	//enum Color {red, blue, green, yellow, white, black, orange, purple};
	std::string currentColor;
	int capacity;


};

