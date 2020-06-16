#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

// Employee
Employee::Employee() {
	OfficeNumber = "";
	AnnualSalary = 0;
	HiringData = "";
}

// Constructor
Employee::Employee(string OfficeNum, int AnnualSal, string HiringDat) {
	OfficeNumber = OfficeNum;
	AnnualSalary = AnnualSal;
	HiringData = HiringDat;
}

string Employee::getOfficeNumber() const {
	return OfficeNumber;
}

int Employee::getAnnualSalary() const {
	return AnnualSalary;
}

string Employee::getHiringData() const {
	return HiringData;
}

void Employee::update(string OfficeNum, int AnnualSal, string HiringDat) {
	OfficeNumber = OfficeNum;
	AnnualSalary = AnnualSal;
	HiringData = HiringDat;
}

void Employee::display() {
	cout << "\nI am an employee if this company and "
		<< "\nMy office number is " << getOfficeNumber()
		<< "\nMy annual salary is " << getAnnualSalary()
		<< "\nMy hiring data is " << getHiringData() << endl << endl;
}