#include <iostream>
#include "Test.h"
#include "Exam.h"
#include "FinalExam.h"
using namespace std;

int main (int argc, char *argv[])
{
	Test t;
	Exam e;
	FinalExam fe;

	cout << t.getNumberQuestions() << endl;
	cout << t.getComplexity() << endl;
	cout << "**********************************" << endl;
	cout << e.getNumberQuestions() << endl;
	cout << e.getComplexity() << endl;
	cout << e.getIndividualTask() << endl;


	cout << "" << endl;
	return 0;
}

