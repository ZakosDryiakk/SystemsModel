#ifndef SYSTEMMODEL_TEST_TEST1FLOW_H_
#define SYSTEMMODEL_TEST_TEST1FLOW_H_

#include "../src/Flow.h"
#include <string>

class ExpFlow : public Flow
{
public:
	ExpFlow();
	ExpFlow(std::string);
	virtual ~ExpFlow();
	void execute();
};

#endif