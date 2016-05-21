#include "Test.h"
Test::Test(void){
	this->numberQuestions = 10;
	this->complexity = 0;
}

Test::Test(int numberQuestions,int complexity){
	this->numberQuestions = numberQuestions;
	this->complexity = complexity;
}

void Test::setNumberQuestions(int numberQuestions){
	this->numberQuestions = numberQuestions;
}

int Test::getNumberQuestions(){
	return this->numberQuestions;
}

void Test::setComplexity(int complexity){
	this->complexity = complexity;
}

int Test::getComplexity(){
	return this->complexity;
}

Test::~Test(void){
	
}