// Fig. 9.3 fig09_03.cpp
// Program to test class Time
// NOTE: This file must be compiled with Time.cpp
#include <iostream>
#include <stdexcept>
#include "Time.h" // definition of class Time from Time.h
using namespace std;

// displays a Time in 24-hour and 12-hour formats
void displayTime(const string& message, const Time& time) {
	cout << message << "\nUniversal time: " << time.toUniversalString() << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
	Time t; // instantiate object t of class Time

	displayTime("Initial time:", t); // displays t's initial value
	t.setTime(13, 27, 6); // change time
	displayTime("After setTime: ", t); // display's t's mew value

	// attempt to set the time with invalid values
	try {
		t.setTime(99, 99, 99); // all values out of range
	}
	catch (invalid_argument& e) {
		cout << "Exception: " << e.what() << "\n\n";
	}

	// display t's value after attempting to set an invalid time
	displayTime("After attempting to set an invalid time:", t);
}