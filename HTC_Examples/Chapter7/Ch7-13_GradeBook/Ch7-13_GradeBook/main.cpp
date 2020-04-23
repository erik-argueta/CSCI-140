// Fig. 7.14: fig07_14.cpp
// Creates GradeBook object using an array of grades

#include <array>
#include "Gradebook.h" // GradeBook class definition
using namespace std;

int main()
{
	// array of student grades
	const array<int, GradeBook::students> grades
	{
		87, 68, 94, 100, 83, 78, 85, 91, 76, 87
	};
	string courseName{"CS101 Introduction to C++ Programming"};
	
	GradeBook myGradeBook(courseName, grades);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	
	return 0;
}
