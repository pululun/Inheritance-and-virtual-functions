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
		virtual void startTest();
		void setNumberQuestions(int );
		int getNumberQuestions();
		void setComplexity(int );
		int getComplexity();
		~Test(void);
};

#endif