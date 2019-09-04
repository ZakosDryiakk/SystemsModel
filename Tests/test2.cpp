#include "test2Flow.h"
#include "../src/System.h"
#include "../src/Model.h"
#include <assert.h>
#include <math.h>

using namespace std;

int main()
{
	Model m1("Model2");
	System s1("p1", 100), s2("p2", 10);
	Flow *f1 = new LogFlow();

	m1.add(&s1);
	m1.add(&s2);
	m1.add(f1);
	f1->connect(&s1, &s2);

	m1.simulate(0,100,1);
	m1.results();

	assert(fabs(s1.getEnergy()-88.2167) < 0.0001);
	assert(fabs(s2.getEnergy()-21.7833) < 0.0001);

	f1->disconnect();

	delete f1;

	return 0;
}