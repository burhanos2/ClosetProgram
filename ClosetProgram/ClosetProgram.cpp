// ClosetProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//existing library includes
#include "pch.h"
#include <iostream>
#include <string>
//own library includes
#include "Closet.h"
#include "Drawer.h"


int main()
{
	std::string color1 = "white";
	std::string color2 = "blue";
	Closet _closet1(6, 5.0f, 5.0f, 5.0f, color1, 1.0f, 1.0f, 1.0f);
	Closet _closet2(4);

	return 0;
}

