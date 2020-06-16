#ifndef FACULTY_H
#define FACULTY_H
#include <string>
#include "Employee.h"

class Faculty : public Employee{
public:
	Faculty();
	Faculty(string rank, string status);
	string getRank() const;
	string getStatus() const;
	void assignment(string, string);
	void display();
private:
	string rank;
	string status;
};

#endif // !FACULTY_H