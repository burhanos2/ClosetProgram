// ClosetProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//existing library includes
#include "pch.h"
#include <iostream>
#include <string>
//own library includes
#include "Closet.h"
#include "Drawer.h"
//
//void FillCloset(std::list<Drawer> list)
//{
//	for (int i = list.max_size; i < list.max_size; i++)
//	{
//	}
//}

int main()
{
	std::string color1 = "white";
	std::string color2 = "blue";
	std::string color3 = "black";
	Closet _closet1(6, 2.3f, 5.0f, 5.0f, color1, 1.0f, 1.0f, 1.0f);
	Closet _closet2(4, 5.0f, 5.0f, 5.0f, color2, 1.0f, 1.2f, 1.5f);
	Closet _closet3(6, 5.0f, 5.0f, 5.0f, color3, 1.0f, 1.0f, 1.0f);


	std::cout << _closet2._drawers.size() << std::endl;
	return 0;
}

