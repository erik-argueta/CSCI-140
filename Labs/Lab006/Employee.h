#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Person.h"

class Employee{
public:
	Employee();
	Employee(string OfficeNumber, int AnnualSalary, string HiringData);
	string getOfficeNumber() const;
	int getAnnualSalary() const;
	string getHiringData() const;
	void update(string, int, string);
	void display();
private:
	string OfficeNumber;
	int AnnualSalary;
	string HiringData;
};

#endif // !EMPLOYEE_H
