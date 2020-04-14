//
//  Gradebook.hpp
//  Zoom1
//
//  Created by Erik Argueta on 3/28/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#pragma once
#include <string>
//#include <stdio.h>

using namespace std;

class GradeBook
{
public:
	explicit GradeBook(string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage() const;
	void determineClassAverage() const;
	
private:
	string courseName;
};


