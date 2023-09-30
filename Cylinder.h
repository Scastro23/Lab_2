// Samuel Castro
// FA 2023
// Due: 09/29/2023
// Busch Lab 2
// Lab description: 
/* This lab is designed to get you familiar output to the command prompt
using C++.You are to create a cylinder object(Class) that stores radius and height.The
class should include methods for calculating volume and surface area.Other methods
included should be get and set functions.In main.cpp, you should test the class with
hard coded values and output radius, height, volume and surface area of the cylinder.
*/


#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder //create the class
{
public:
	Cylinder();
	~Cylinder();
	//
	void setRadius(float radius_);
	float getRadius();
	void setHeight(float height_);
	float getHeight();
	void CalculateVolume();
	float getVolume();
	void CalculateSurfacearea();
	float getSurfacearea();

private:
	float radius;
	float height;
	float volume;
	float surfacearea;

};

#endif // !CYLINDER_H

