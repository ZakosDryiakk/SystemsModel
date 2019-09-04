#include "System.h"

System::System(){}

System::System(float energy)
{
	this->energy = energy;
}

System::System(std::string name)
{
	this->name = name;
}

System::System(std::string name, float energy)
{
	this->name = name;
	this->energy = energy;
}

System::~System(){}

std::string System::getName()
{
	return this->name;
}

void System::setName(std::string name)
{
	this->name = name;
}

float System::getEnergy()
{
	return this->energy;
}

void System::setEnergy(float energy)
{
	this->energy = energy;
}