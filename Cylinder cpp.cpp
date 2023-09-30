#include "Cylinder.h"

Cylinder::Cylinder()
{
	radius = 0;
}

Cylinder::~Cylinder()
{
}

void Cylinder::setRadius(float radius_)
{
	radius = radius_;
}

float Cylinder::getRadius()
{
	return radius;
}

void Cylinder::setHeight(float height_)
{
	height = height_;
}

float Cylinder::getHeight()
{
	return height;
}

void Cylinder::CalculateVolume() //formula to calculate Volume
{
	volume = 3.141592 * radius * radius * height;
}

float Cylinder::getVolume()
{
	return volume;
}

void Cylinder::CalculateSurfacearea() //formula to calculate Surfacearea
{
	surfacearea = 3.141592 * radius * height;
}

float Cylinder::getSurfacearea()
{
	return surfacearea;
}
