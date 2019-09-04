#include "test1Flow.h"
#include "../src/System.h"
#include "../src/Model.h"
#include <assert.h>
#include <math.h>

using namespace std;

int main()
{
	Model m1("Model1");
	System s1("pop1", 100), s2("pop2", 0);
	Flow *f1 = new ExpFlow();

	m1.add(&s1);
	m1.add(&s2);
	m1.add(f1);
	f1->connect(&s1, &s2);

	m1.simulate(0,100,1);
	m1.results();

	assert(fabs(s2.getEnergy()-63.3968) < 0.0001);
	assert(fabs(s1.getEnergy()-36.6032) < 0.0001);

	f1->disconnect();

	delete f1;

	return 0;
}