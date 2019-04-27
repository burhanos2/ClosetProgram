#pragma once
#include <string>
#include <list>

class Drawer
{
public:
	Drawer();
	~Drawer();

	Drawer(const int& _capacity, 
			const float& _sizeX, const float& _sizeY, const float& _sizeZ,
			const std::string& _color);

	float sizeX;
	float sizeY;
	float sizeZ;
	int capacity;
	std::string color;


	std::list<std::string> contents; // for sokken la, contents = socks

	void ShowContents();

	void FillDrawer();
};

