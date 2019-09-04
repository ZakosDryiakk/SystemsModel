#ifndef SYSTEMMODEL_MODEL_H_
#define SYSTEMMODEL_MODEL_H_

#include <string>
#include <vector>
#include "System.h"
#include "Flow.h"

class Model
{
public:
	Model();
	Model(std::string);
	virtual ~Model();

	std::string getName();
	void setName(std::string);

	void simulate(int, int, int);
	void results();

	void add(System*);
	void add(Flow*);

	System* remove(System*);
	Flow* remove(Flow*);

protected:
	std::string name;
	std::vector<System*> systems; // Implementar como iterador genérico para container
	std::vector<Flow*> flows;

private:

};

#endif
