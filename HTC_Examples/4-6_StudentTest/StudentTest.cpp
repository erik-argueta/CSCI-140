// Fig 4.7: StudentTest.cpp
// Create and test Student objects

#include "stdafx.h"
#include "Student.h"
#include <iostream>

using namespace std;


int main()
{
	Student account1{ "Jane Green", 93 };
	Student account2{ "John Blue", 72 };

	cout << account1.getName() << "'s letter grade equivalent of " << account1.getAverage() << " is: "
		<< account1.getLetterGrade() << endl;
	cout << account2.getName() << "'s letter grade equivalent of " << account2.getAverage() << " is: "
		<< account2.getLetterGrade() << endl;

	system("pause");
    return 0;
}

