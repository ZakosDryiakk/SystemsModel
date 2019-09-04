#ifndef SYSTEMMODEL_TEST_TEST2FLOW_H_
#define SYSTEMMODEL_TEST_TEST2FLOW_H_

#include "../src/Flow.h"
#include <string>

class LogFlow : public Flow
{
public:
	LogFlow();
	LogFlow(std::string);
	virtual ~LogFlow();
	void execute();
};

#endif