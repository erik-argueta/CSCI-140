//
//  main.cpp
//  Zoom1
//
//  Created by Erik Argueta on 3/28/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include <string>
#include "Gradebook.h"

using namespace std;


int main()
{
	
	GradeBook MyGradeBook("CSCI140 C++ Language and Programming");
	
	MyGradeBook.displayMessage();
	MyGradeBook.determineClassAverage();
	//system("pause");
	return 0;
}
