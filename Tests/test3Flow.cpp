#include "test3Flow.h"

using namespace std;

MultiFlow::MultiFlow() {}

MultiFlow::MultiFlow(string name):Flow(name) {}

MultiFlow::~MultiFlow() {}

void MultiFlow::execute()
{
	change = 0.01*s1->getEnergy();
}