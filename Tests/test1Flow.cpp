#include "test1Flow.h"

using namespace std;

ExpFlow::ExpFlow() {}

ExpFlow::ExpFlow(string name):Flow(name) {}

ExpFlow::~ExpFlow() {}

void ExpFlow::execute()
{
	change = s1->getEnergy()*0.01;
}