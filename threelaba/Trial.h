#include <iostream>
#include "Exam.h"

using namespace std;

#ifndef _TRIAL_H_
#define _TRIAL_H_

class Trial : public Exam{
	protected:
		bool timeLimit;
	public:
	Trial(void);
	void setTimeLimit(bool );
	bool getTimeLimit();
	~Trial(void);
};

#endif
