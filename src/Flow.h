#ifndef SYSTEMMODEL_FLOW_H_
#define SYSTEMMODEL_FLOW_H_

#include <string>
#include "System.h"

class Flow
{
public:
	Flow();
	Flow(std::string);
	virtual ~Flow();
	void connect(System*, System*);
	void disconnect();
	virtual void execute() = 0;

	std::string getName();
	void setName(std::string);

	System* getSystem1();
	System* getSystem2();
	void setSystem1(System*);
	void setSystem2(System*);

	void transfer();

protected:
	std::string name;
	System* s1;		// Alterar para source e target (clareza)
	System* s2;
	float change;

private:

};

#endif
