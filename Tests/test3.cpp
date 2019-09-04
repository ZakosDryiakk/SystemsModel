#include "test3Flow.h"
#include "../src/System.h"
#include "../src/Model.h"
#include <assert.h>
#include <math.h>

using namespace std;

int main()
{
	Model m1("Model3");
	System s1("Q1", 100), s2("Q2", 0), s3("Q3", 100), s4("Q4", 0), s5("Q5", 0);
	Flow *f1 = new MultiFlow("f");
	Flow *f2 = new MultiFlow("g");
	Flow *f3 = new MultiFlow("r");
	Flow *f4 = new MultiFlow("t");
	Flow *f5 = new MultiFlow("u");
	Flow *f6 = new MultiFlow("v");

	// Adicionando sistemas ao modelo
	m1.add(&s1);
	m1.add(&s2);
	m1.add(&s3);
	m1.add(&s4);
	m1.add(&s5);

	// Adicionando fluxos ao modelo
	m1.add(f1);
	m1.add(f2);
	m1.add(f3);
	m1.add(f4);
	m1.add(f5);
	m1.add(f6);

	// Conectando os sistemas com os fluxos
	f1->connect(&s1, &s2);
	f2->connect(&s1, &s3);
	f3->connect(&s2, &s5);
	f4->connect(&s2, &s3);
	f5->connect(&s3, &s4);
	f6->connect(&s4, &s1);

	m1.simulate(0,100,1);
	m1.results();

	assert(fabs(s1.getEnergy()-31.8513) < 0.0001);
	assert(fabs(s2.getEnergy()-18.4003) < 0.0001);
	assert(fabs(s3.getEnergy()-77.1143) < 0.0001);
	assert(fabs(s4.getEnergy()-56.1728) < 0.0001);
	assert(fabs(s5.getEnergy()-16.4612) < 0.0001);

	f1->disconnect();
	f2->disconnect();
	f3->disconnect();
	f4->disconnect();
	f5->disconnect();
	f6->disconnect();

	delete f1;
	delete f2;
	delete f3;
	delete f4;
	delete f5;
	delete f6;

	return 0;
}