#include "Flow.h"

Flow::Flow(){}

Flow::Flow(std::string name)
{
	this->name = name;
}

Flow::~Flow(){}

void Flow::connect(System* s1, System* s2)
{
	this->s1 = s1;
	this->s2 = s2;
}

void Flow::disconnect()
{
	this->s1 = NULL;
	this->s2 = NULL;
}

std::string Flow::getName()
{
	return this->name;
}

void Flow::setName(std::string name)
{
	this->name = name;
}

System* Flow::getSystem1()
{
	return this->s1;
}

System* Flow::getSystem2()
{
	return this->s2;
}

void Flow::setSystem1(System* s1)
{
	this->s1 = s1;
}

void Flow::setSystem2(System* s2)
{
	this->s2 = s2;
}

void Flow::transfer()
{
	s1->setEnergy(s1->getEnergy()-change);
	s2->setEnergy(s2->getEnergy()+change);
}