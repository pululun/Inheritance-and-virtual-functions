#include "Exam.h"
Exam::Exam(void):Test(){
			this->individualTask = true;
		}
void Exam::setIndividualTask(bool individualTask){
	this->individualTask = individualTask;
}

bool Exam::getIndividualTask(){
	return this->individualTask;
}

Exam::~Exam(void){

}