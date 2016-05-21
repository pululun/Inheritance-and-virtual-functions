#include <iostream>

using namespace std;

#ifndef _TEST_H_
#define _TEST_H_

class Test{
	protected:
		int numberQuestions;
		int complexity;
	public:
		Test(void);
		Test(int ,int );
		void setNumberQuestions(int );
		int getNumberQuestions();
		void setComplexity(int );
		int getComplexity();
		~Test(void);
};

#endif