#include "Model.h"
#include <iostream>

Model::Model(){}

Model::Model(std::string name)
{
	this->name = name;
}

Model::~Model(){}

std::string Model::getName()
{
	return this->name;
}

void Model::setName(std::string name)
{
	this->name = name;
}

void Model::simulate(int start, int stop, int step)
{
	for(int i = start; i < stop; i=i+step)
	{
		for(auto it: flows)
		{
			it->execute();
		}
		for(auto it: flows)
		{
			it->transfer();
		}
	}
}

void Model::results()
{
	for(auto it : systems)
	{
		std::cout << "System: " << it->getName() << "\t Energy: " << it->getEnergy() << std::endl;	// Incluir a impressao de dados sobre o tempo
	}
}

void Model::add(System* sys)
{
	systems.push_back(sys);	// Ao colocar iterador genérico, trocar essa função
}

void Model::add(Flow* flow)
{
	flows.push_back(flow);	// Ao colocar iterador genérico, trocar essa função
}

System* Model::remove(System* sys)
{
	return sys;
	// Implementar depois, busca o item? Ou manter um iterador para o objeto dentro do container?
}

Flow* Model::remove(Flow* flow)
{
	return flow;
	// Implementar depois, busca o item? Ou manter um iterador para o objeto dentro do container?
}