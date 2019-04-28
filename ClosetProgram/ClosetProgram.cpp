// ClosetProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//existing library includes
#include "pch.h"
#include <iostream>
#include <string>
//own library includes
#include "Closet.h"
#include "Drawer.h"


void ClosetContent(Closet _clo)
{
	std::list<Drawer>::iterator it;
	for (it = _clo.drawers.begin(); it != _clo.drawers.end(); ++it)
	{
		std::cout << "this closet has a ";
		it->ShowContents();
		std::cout << " drawer. \n";
	}
}

int main()
{
	// closet 1
	Closet _closet1(6, 2.3f, 1.7f, 2.0f, "white", 1.2f, 1.0f, 1.0f);
	_closet1.FillCloset(1, "oakBrown",
		{ "socks", "dress shirts" , "pants" , "ties" , "tee-shirts" , "underwear" });

	// closet 2
	Closet _closet2(5, 0.5f, 0.5f, 1.0f, "skyBlue", 1 + _closet1.locationX, 1 + _closet1.locationY, 1 + _closet1.locationZ);
	_closet2.FillCloset(1, "white",
		{ "socks" , "dress shirts" , "pants" , "watches" , "jewelry" });

	// closet 3
	Closet _closet3(6, 5.0f, 5.0f, 3.0f, "black", 1 + _closet2.locationX, 1 + _closet2.locationY, 1 + _closet2.locationZ);
	_closet3.FillCloset(1, "gray",
		{ "socks", "dress shirts" , "pants" , "teachers" , "students", "parents" });

	int chosenCloset;
	std::string chosenOption;
	//couts
	std::cout << "closet one has: " << _closet1.drawers.size() << " drawers \n";
	std::cout << "closet two has: " << _closet2.drawers.size() << " drawers \n";
	std::cout << "closet three has: " << _closet3.drawers.size() << " drawers \n";

	std::cout << "which one do you pick? (1, 2 ,or 3?)" << std::endl;
	std::cin >> chosenCloset;
	std::cout << "you are in closet " << chosenCloset << ", which option do you pick? \n (info - checkdrawers) \n";
	std::cin >> chosenOption;
	

	Closet referencedCloset;
	switch (chosenCloset)
	{
	case 1:
		referencedCloset = _closet1;
		break;
	case 2:
		referencedCloset = _closet2;
		break;
	case 3:
		referencedCloset = _closet3;
		break;
	default:
		break;
	}

	if (chosenOption == "checkdrawers")
	{
		if (chosenCloset > 3)
		{
			goto wronginput;
		}
		ClosetContent(referencedCloset);
	}
	else if (chosenOption == "info")
	{
		std::cout << std::endl;
		std::cout << "the closet is " << referencedCloset.sizeX << " wide, " << referencedCloset.sizeY << " tall, and " << referencedCloset.sizeZ << " deep \n";
		std::cout << "the closet is the color: " << referencedCloset.color << std::endl;
		std::cout << "this closets location is (" << referencedCloset.locationX << ", " << referencedCloset.locationY << ", " << referencedCloset.locationZ << ") \n";
		std::cout << "this closet has a capacity of " << referencedCloset.capacity << " drawers. \n";
		std::cout << "and it has " << referencedCloset.drawers.size() << " drawers \n";
	}
	else
	{
		goto wronginput;
	}

	std::cin.get();
	return 0;

wronginput:
	std::cout << "wrong type of input, silly. \n";
	return 1;

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
