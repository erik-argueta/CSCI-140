#pragma once
#include <string>
// Fig. 4.6: Student.h
// Student class that stores a student name and average

using namespace std;

class Student
{
public:
	// constructor initializes data members
	Student(string studentName, int studentAverage) : name(studentName)
	{
		// sets average data member if studentAverage is valid
		setAverage(studentAverage);
	}

	// sets the Student's name
	void setName(string studentName)
	{
		name = studentName;
	}

	// retrieves the Student's name
	string getName() const
	{
		return name;
	}

	// sets the Student's average
	void setAverage(int studentAverage)
	{
		// validate that studentAverage is > 0 amd <= 100; otherwise, 
		// keep data member average's current value
		if (studentAverage > 0)
		{
			if (studentAverage <= 100)
			{
				average = studentAverage; // assign to data member
			}
		}
	}

	// retrieves the studen's average
	int getAverage() const
	{
		return average;
	}

	// determines and returns the student's letter grade
	string getLetterGrade() const
	{
		// initialized to empty string by class string's constructor
		string letterGrade;

		if (average >= 90) { letterGrade = "A"; }
		else if (average >= 80) { letterGrade = "B"; }
		else if (average >= 70) { letterGrade = "C"; }
		else if (average >= 60) { letterGrade = "D"; }
		else { letterGrade = "F"; }

		return letterGrade;
	}

private:
	string name;
	int average{ 0 }; // initializes average to 0
};