// Fig. 12.11: SalariedEmployee.h
// SalariedEmployee class derived from Employee
#ifndef SALARIED_H
#define SALARIED_H

#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class SalariedEmployee : public Employee {
public:
	SalariedEmployee(const std::string&, const std::string&,
		const std::string&, double = 0.0);
	virtual ~SalariedEmployee() = default; // virtual destructor

	void setWeeklySalary(double); // set weekly salary
	double getWeeklySalary() const; // return weekly salary

	// keyword virtual signals intent to override
	virtual double earnings() const override; // calculate earnings
	virtual std::string toString() const override; // string representation
	// There is no need to write VIRTUAL in this file because Employee.h already defined the function as 
	// VIRTUAL but it does promotes clarity;		It remains VIRTUAL throughout the heirarchy 
private:
	double weeklySalary; // salary per week
};

#endif // !SALARIED_H
