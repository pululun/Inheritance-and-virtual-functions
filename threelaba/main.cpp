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
	cout << e.getNumberQuestions() << endl;
	cout << e.getComplexity() << endl;
	cout << e.getIndividualTask() << endl;
	//cout << fe.getNumberQuestions() << endl;
	//cout << fe.getComplexity() << endl;
	cout << fe.getIndividualTask() << endl;
	cout << fe.getPractice() << endl;
	
	return 0;
}

