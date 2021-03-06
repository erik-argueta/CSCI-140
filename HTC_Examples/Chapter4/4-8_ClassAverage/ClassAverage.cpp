// Fig. 4.10 ClassAverage.cpp
// Solving the class-average problem using counter-controlled iteration

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// initializtion phase
	int total{ 0 }; // initializes sum of grades ented by user
	unsigned int gradeCounter{ 1 }; // initialize grade # to be entered next
	// use "unsigned" when storing only nonnegative values 

	// processing phase uses counter-controlled iteration
	while (gradeCounter <= 10) // loop 10 times
	{
		cout << "Enter Grade: "; // prompt
		int grade;
		cin >> grade; // input next grade
		total += grade; // add grade to total
		gradeCounter += 1; // increment counter by 1
	}

	// termination phase
	int average{ total / 10 }; // int division yields int result

	// display total and average of grades
	cout << endl << "Total of all 10 grades is " << total;
	cout << endl << "Class average is " << average << endl;

	system("pause");
    return 0;
}

