#include "FinalExam.h"

FinalExam::FinalExam(void):Exam(){
	this->practice = false;
}

void FinalExam::startTest(){
	cout << "Final exam start" << endl;
}

void FinalExam::setPractice(bool practice){
	this->practice = practice;
}

bool FinalExam::getPractice(){
	return this->practice; 
}

FinalExam::~FinalExam(void){

}