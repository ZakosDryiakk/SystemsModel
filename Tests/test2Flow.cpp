#include "test2Flow.h"

using namespace std;

LogFlow::LogFlow() {}

LogFlow::LogFlow(string name):Flow(name) {}

LogFlow::~LogFlow() {}

void LogFlow::execute()
{
	change = 0.01*s2->getEnergy()*(1-s2->getEnergy()/70);
}