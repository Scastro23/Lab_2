#include "Cylinder.h"
#include <iostream>

int main()
{
	Cylinder c;

	c.setRadius(2.0);
	c.setHeight(3.0);
	c.CalculateVolume();
	c.CalculateSurfacearea();
	//calculates the outputs
	std::cout << "Radius: " << c.getRadius() << std::endl;
	std::cout << "Height: " << c.getHeight() << std::endl;
	std::cout << "Volume: " << c.getVolume() << std::endl;
	std::cout << "Surfacearea: " << c.getSurfacearea() << std::endl;

	return 0;
}