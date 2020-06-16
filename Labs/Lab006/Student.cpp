#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Student.h"
//using namespace std;

// Student
Student::Student() {
	status = "";
}

void Student::addStatus(string classStatus) {
	status = classStatus;
}

void Student::display() const {
	std::cout << "I am a student and my status as a student is " << status << std::endl << std::endl;
}