// Fig 7.19: GradeBook.h
// Definition of class GradeBook that uses a
// two-dimensional array to store test grades
#include <array>
#include <string>
#include <iostream>
#include <iomanip> // parameterized stream manipulators

// GradeBook class definition
class GradeBook
{
public:
	// constants
	static const size_t students{10}; // number of students
	static const size_t tests{3}; // number of tests
	
	// two argument constructor initializes courseName and grades array
	GradeBook(const std::string& name, std::array<std::array<int, tests>, students>& gradesArray) : courseName(name), grades(gradesArray) {
	}
	
	// function to set the course name
	void setCourseName(const std::string& name) {
		courseName = name; // store the course name
	}
	
	// function to retrieve the course name
	const std::string& getCourseName() const {
		return courseName;
	}
	
	// display a welcome mesage to the GradeBook user
	void displayMessage() const {
		// call getCourseName to get this GradeBook's course name
		std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
	}
	
	// perform various operations on the data
	void processGrade() const {
		outputGrades();
	}
	
	
private:
	std::string courseName; // course name for this grade book
	std::array<std::array<int, tests>, students> grades; // 2D array
};
