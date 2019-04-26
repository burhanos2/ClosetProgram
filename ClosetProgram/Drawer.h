#pragma once
#include <string>
#include <list>

class Drawer
{
public:
	Drawer();
	~Drawer();

	Drawer(int& _capacity, float& _sizeX, float& _sizeY, float& _sizeZ, std::string& _color);

	float sizeX;
	float sizeY;
	float sizeZ;
	int capacity;
	std::string color;


	std::list<std::string> _contents;
		
	void ShowContents();
};

