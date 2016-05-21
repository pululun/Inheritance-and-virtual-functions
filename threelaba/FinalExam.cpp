#include "FinalExam.h"

FinalExam::FinalExam(void){
	this->practice = true;
}

void FinalExam::setPractice(bool practice){
	this->practice = practice;
}

bool FinalExam::getPractice(){
	return this->practice; 
}

FinalExam::~FinalExam(void){

}