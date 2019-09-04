#ifndef SYSTEMMODEL_TEST_TEST3FLOW_H_
#define SYSTEMMODEL_TEST_TEST3FLOW_H_

#include "../src/Flow.h"
#include <string>

class MultiFlow : public Flow
{
public:
	MultiFlow();
	MultiFlow(std::string);
	virtual ~MultiFlow();
	void execute();

protected:
	int id;
};

#endif