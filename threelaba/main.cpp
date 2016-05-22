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

	cout << "" << endl;
	return 0;
}

