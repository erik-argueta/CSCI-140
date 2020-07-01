// Attempting to invoke derived-class-only member functions
// via base-class pointer.
#include<iostream>
#include <string>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {
	BasePlusCommissionEmployee basePlusCommissionEmployee{
		"Bob", "Lewis", "333-33-3333", 5000, 0.04, 300 };

	// aim base-class pointer at derived-class object (allowed)
	CommissionEmployee* commissionEmployeePtr{ &basePlusCommissionEmployee };

	// invoke base-class member functions on derived-class
	// object through base-class pointer (allowed)
	string firstName{ commissionEmployeePtr->getFirstName() };
	string lastName{ commissionEmployeePtr->getLastName() };
	string ssn{ commissionEmployeePtr->getSocialSecurityNumber() };
	double grossSales{ commissionEmployeePtr->getGrossSales() };
	double commissionRate{ commissionEmployeePtr->getCommissionRate() };

	// Allows to cout individual members, rather than use
	// toString() to cout the items
	//cout << firstName << endl;

	// attempt to invoke derived-class-only member functions
	// on derived-class object through base-class pointer (disallowed)
	double baseSalary{ commissionEmployeePtr->getBaseSalary() };
	commissionEmployeePtr->setBaseSalary(500);
}