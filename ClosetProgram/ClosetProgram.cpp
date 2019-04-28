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
	// closet 1
	Closet _closet1(6, 2.3f, 1.7f, 2.0f, "white", 1.2f, 1.0f, 1.0f);
	_closet1.FillCloset(1, "oakBrown",
						{"socks", "dress shirts" , "pants" , "ties" , "tee-shirts" , "underwear" });

	// closet 2
	Closet _closet2(5, 0.5f, 0.5f, 1.0f, "skyBlue", 1 + _closet1.locationX, 1 + _closet1.locationY, 1 + _closet1.locationZ);
	_closet2.FillCloset(1, "white",
						{"socks" , "dress shirts" , "pants" , "watches" , "jewelry" });

	// closet 3
	Closet _closet3(6, 5.0f, 5.0f, 3.0f, "black", 1 + _closet2.locationX, 1 + _closet2.locationY, 1 + _closet2.locationZ);
	_closet3.FillCloset(1, "gray", 
						{"socks", "dress shirts" , "pants" , "teachers" , "students", "parents" });


	//couts
	std::cout << "closet one has: " << _closet1.drawers.size() << " drawers \n";
	std::cout << "closet two has: " << _closet2.drawers.size() << " drawers \n";
	std::cout << "closet three has: " << _closet3.drawers.size() << " drawers \n";

	std::cin.get();
	return 0;
}

#pragma region drawer content requirements
/*
--
Beginner (1 kast)
1 kast is volledig voor kleding met de volgende lade:
`
0 - Sokken la
1 - Overhemden la
2 - Broeken la
3 - Stropdassen la
4 - Shirten la
5 - Ondergoed la
`
--
Gevorderde (2kasten)
1 kast is half kleding half objecten:
`
0 - Sokken la
1 - Overhemden la
2 - Broeken la
3 - Horloge la
4 - Sieraden la
`
--
Beheerst (3 kasten)
1 kast is half kleding half mensen:
`
0 - Sokken la
1 - Overhemden la
2 - Broeken la
3 - Leraren la
4 - Studenten la
5 - Ouderen la
`
*/
#pragma endregion
