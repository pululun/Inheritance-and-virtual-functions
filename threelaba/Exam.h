#include <iostream>
#include "Test.h"

using namespace std;

#ifndef _EXAM_H_
#define _EXAM_H_

class Exam : public Test{
	protected:
		bool individualTask;
	public:
		Exam(void);
		void setIndividualTask(bool );
		bool getIndividualTask();
		~Exam(void);
		
};

#endif
