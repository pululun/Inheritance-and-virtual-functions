﻿#include <iostream>
#include "Test.h"
#include "Exam.h"

using namespace std;

#ifndef _FINALEXAM_H_
#define _FINALEXAM_H_

class FinalExam : public Exam{
	protected:
		bool practice;
	public:
		FinalExam(void);
		void startTest();
		void setPractice(bool );
		bool getPractice();
		~FinalExam(void);
};

#endif
