#include <iostream>
#include <string>
#include "Faculty.h"
using namespace std;

Faculty::Faculty() {
	rank = "";
	status = "";
}

Faculty::Faculty(string rankz, string statusz) {
	rank = rankz;
	status = statusz;
}

string Faculty::getRank() const { return rank; }

string Faculty::getStatus() const { return status; }

void Faculty::assignment(string rank_in, string status_in) {
	rank = rank_in;
	status = status_in;
}

void Faculty::display() {
	cout << "I am a faculty and "
		<< "\nMy annual rank is " << getRank()
		<< "\nMy assigned status is " << getStatus() << endl << endl;
}