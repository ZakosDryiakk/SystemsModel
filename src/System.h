#ifndef SYSTEMMODEL_SYSTEM_H_
#define SYSTEMMODEL_SYSTEM_H_

#include <string>

class System
{
public:
	System();
	System(float);
	System(std::string);
	System(std::string, float);
	virtual ~System();

	std::string getName();
	void setName(std::string);

	float getEnergy();
	void setEnergy(float);

protected:
	std::string name;
	float energy;

	// Adicionar subsistemas com fluxos próprios

private:

};

#endif
