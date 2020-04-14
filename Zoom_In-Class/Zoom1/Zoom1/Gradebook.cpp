//
//  Gradebook.cpp
//  Zoom1
//
//  Created by Erik Argueta on 3/28/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include <string>
#include "Gradebook.h"
using namespace std;

GradeBook::GradeBook(string name) : courseName(name)
{
	
}

void GradeBook::setCourseName(string name)
{
	// new code
	if (name.size() <= 25) {courseName = name;}
	else
	{
		courseName = name.substr(0,25);
		cerr << "Name \"" << name << "\"" << "Limiting courseName to first 25 characters. \n" << endl;
	}
}

string GradeBook::getCourseName() const
{
	return courseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}

void GradeBook::determineClassAverage() const
{
	int total = 0;
	int grade;
	float average = 0.0;
	unsigned int gradeCounter = 1;
	while (gradeCounter <= 10)
	{
		cout << "Please enter grade: ";
		cin >> grade;
		total += grade;
		gradeCounter++;
	}
	average = total / 10.0;
	cout << "\nTotal of all 10 grades is " << total << endl;
	cout << "\nClass average is " << average << endl;
}
