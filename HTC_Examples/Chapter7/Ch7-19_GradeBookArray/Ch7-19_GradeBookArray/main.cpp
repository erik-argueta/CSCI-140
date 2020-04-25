//
//  main.cpp
//  Ch7-19_GradeBookArray
//
//  Created by Erik Argueta on 4/22/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <array>
#include "GradeBook.h"
using namespace std;

int main()
{
	// two-dimensional array of student grades
	array<array<int, GradeBook::tests>, GradeBook::students> grades
	{
		{87, 96, 70},
		{68, 87, 90},
		{94, 100, 90},
		{100, 81, 82},
		{83, 65, 85},
		{78, 87, 65},
		{85, 75, 83},
		{91, 94, 100},
		{76, 72, 84},
		{87, 93, 73}
	};
	
	GradeBook myGradeBook("CS101 Introduction to C++ Programming", grades);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	
	return 0;
}
