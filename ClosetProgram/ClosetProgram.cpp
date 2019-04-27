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
	_closet1.FillCloset(2, "oakBrown");

	// closet 2
	Closet _closet2(4, 0.5f, 0.5f, 1.0f, "skyBlue", 1 + _closet1.locationX, 1 + _closet1.locationY, 1 + _closet1.locationZ);
	_closet2.FillCloset(2, "white");

	// closet 3
	Closet _closet3(6, 5.0f, 5.0f, 3.0f, "black", 1 + _closet2.locationX, 1 + _closet2.locationY, 1 + _closet2.locationZ);
	_closet3.FillCloset(2, "gray");


	//couts
	std::cout << _closet1.drawers.size() << '\n';
	std::cout << _closet2.drawers.size() << '\n';
	std::cout << _closet3.drawers.size() << '\n';
	return 0;
}

#pragma region drawer content requirements
/*
Beginner (1 kast)
1 kast is volledig voor kleding met de volgende lade:
Sokken la
Overhemden la
Broeken la
Stropdassen la
Shirten la
Ondergoed la

Gevorderde (2kasten)
1 kast is half kleding half objecten
Sokken la
Overhemden la
Broeken la
Horloge la
Sieraden la

Beheerst (3 kasten)
1 kast is half kleding half mensen
Sokken la
Overhemden la
Broeken la
Leraren la
Studenten la
Ouderen la
*/
#pragma endregion

#pragma region iterator example
/*

//om erdoorheen te gaan (en dit is C++ specifiek)
	//maken we een "smart" iterator
	std::list<std::string>::iterator it;
	//en dan loopen we erdoorheen
	//dit leest als volgt:
	//de iterator is een pointer naar het eerste element in de array (words.begin())
	//de iterator gaat door zolang hij niet gelijk is aan het eind van de array
	//dan gaan we naar het volgende element
	for (it = words.begin(); it != words.end(); ++it) {
		//en dan is de iterator een pointer die wijst naar het object
		//als we dereferences krijgen we de daadwerkelijke waarde:
		std::cout << *it << std::endl;
	}
	//deze loop met C++ is even doorhebben. Er zijn ook andere varianten van loops, vanaf C++ 11 kan je bijv:
	for (std::string theWord : words) {
		std::cout << theWord << std::endl;
}

*/
#pragma endregion
