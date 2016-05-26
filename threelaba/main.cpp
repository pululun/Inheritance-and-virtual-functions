#include <iostream>
#include "Test.h"
#include "Exam.h"
#include "FinalExam.h"
#include "Trial.h"
using namespace std;

int main (int argc, char *argv[])
{
	Test t;
	Exam e;
	FinalExam fe;
	Trial tr;

	cout << t.getNumberQuestions() << endl;
	cout << t.getComplexity() << endl;
	cout << "**********************************" << endl;
	cout << e.getNumberQuestions() << endl;
	cout << e.getComplexity() << endl;
	cout << e.getIndividualTask() << endl;
	cout << "**********************************" << endl;
	cout << fe.getNumberQuestions() << endl;
	cout << fe.getComplexity() << endl;
	cout << fe.getIndividualTask() << endl;
	cout << fe.getPractice() << endl;
	cout << "**********************************" << endl;
	cout << tr.getNumberQuestions() << endl;
	cout << tr.getComplexity() << endl;
	cout << tr.getIndividualTask() << endl;
	cout << tr.getTimeLimit() << endl;

	Test* test = new Test;

	Exam* exam = new Exam;
	FinalExam* finalExam = new FinalExam;
	Trial* trial = new Trial;

	cout << "**************** Virtual method ****************" << endl;

	test->startTest();
	test = exam;
	test->startTest();
	test = finalExam;
	test->startTest();
	test = trial;
	test->startTest();


	cout << "" << endl;
	delete test;
	delete exam;
	delete finalExam;
	delete trial;
	return 0;
}

