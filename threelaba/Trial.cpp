#include "Trial.h"

Trial::Trial(void): Exam(){
	this->timeLimit = true;
}

void Trial::startTest(){
	cout << "Trial start" << endl;
}

void Trial::setTimeLimit(bool timeLimit){
	this->timeLimit = timeLimit;
}

bool Trial::getTimeLimit(){
	return this->timeLimit;
}

Trial::~Trial(void){

}