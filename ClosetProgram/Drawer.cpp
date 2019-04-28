#include "pch.h"
#include "Drawer.h"
#include <iostream>

Drawer::Drawer()
{
}


Drawer::~Drawer()
{
}

Drawer::Drawer(const int& _capacity, const float& _sizeX, const float& _sizeY, const float& _sizeZ, const std::string& _color)
{
	sizeX = _sizeX;
	sizeY = _sizeY;
	sizeZ = _sizeZ;
	capacity = _capacity;
	color = _color;
}

void Drawer::ShowContents()
{
	//om erdoorheen te gaan (en dit is C++ specifiek)
	//maken we een "smart" iterator
	std::list<std::string>::iterator it;
	//en dan loopen we erdoorheen
	//dit leest als volgt:
	//de iterator is een pointer naar het eerste element in de array (words.begin())
	//de iterator gaat door zolang hij niet gelijk is aan het eind van de array
	//dan gaan we naar het volgende element
	for (it = contents.begin(); it != contents.end(); ++it) {
		//en dan is de iterator een pointer die wijst naar het object
		//als we dereferences krijgen we de daadwerkelijke waarde:
		std::cout << *it << std::endl;
	}
	//deze loop met C++ is even doorhebben. Er zijn ook andere varianten van loops, vanaf C++ 11 kan je bijv:
	for (std::string theWord : contents) {
		std::cout << theWord << std::endl;
	}
}
