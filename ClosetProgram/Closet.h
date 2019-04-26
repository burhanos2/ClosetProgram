#pragma once
#include <list>
#include "Drawer.h"

class Closet
{
public:
	Closet();
	~Closet();

	Closet(
		int _capacity,
		float _sizeX, float _sizeY, float _sizeZ,
		std::string _color,
		float _locationX, float _locationY, float _locationZ
	);


	bool Open();
	bool Close();


	float GetSizeX();
	float GetSizeY();
	float GetSizeZ();

	std::string GetColor();
	int GetCapacity();

	float GetLocationX();
	float GetLocationY();
	float GetLocationZ();

	void SelectDrawer(int i);

private:
	bool isOpen;	
	std::list<Drawer> Drawers{};
	float locationX;
	float locationY;
	float locationZ;
	
	std::string currentColor;
	int capacity;

protected:
	float sizeX;
	float sizeY;
	float sizeZ;

};

