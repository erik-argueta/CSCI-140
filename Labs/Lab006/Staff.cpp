#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

Staff::Staff() {
	status = "";
}

Staff::Staff(string statusz) {
	status = statusz;
}

string Staff::getStatus() const {
	return status;
}

void Staff::assign(string status_in) {
	status = status_in;
}

void Staff::display() {
	cout << "I am a staff and my job title is " << getStatus() << endl << endl;
}