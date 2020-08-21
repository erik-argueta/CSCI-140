// This creates an object of three concrete classes SALARIEDEMPLOYEE, COMMISSIONEMPLOYEE, and BASEPLUSCOMMISSIONEMPLOYEE
// It manipulates these objects, first with static binding, then polymorphically, using VECTOR of EMPLOYEE base-class pointers

// Fig. 12.17: fig12_17.cpp
// Processing Employee derived-class objects with static binding
// then polymorphically using dynamic binding.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

void virtualViaPointer(const Employee* const); // prototype
void virtualViaReference(const Employee&); // prototype

int main() {
	cout << fixed << setprecision(2); // set floating-point formatting
	
	// create derived-class objects
	SalariedEmployee salariedEmployee{
		"John", "Smith", "111-11-1111", 800};
	CommissionEmployee commissionEmployee{
		"Sue", "Jones", "333-33-3333", 10000, .06};
	BasePlusCommissionEmployee basePlusCommissionEmployee{
		"Bob", "Lewis", "444-44-4444", 5000, .04, 300};
	
	// output each Employee's information and earnings using static binding
	cout << "EMPLOYEES PRECESSED INDIVIDUALLY USING STATIC BINDING\n"
	<< salariedEmployee.toString()
	<< "\nearned $" << salariedEmployee.earnings() << "\n\n"
	<< commissionEmployee.toString()
	<< "\nearned $" << commissionEmployee.toString() << "\n\n"
	<< basePlusCommissionEmployee.toString()
	<< "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";
	
	// create and initialize vector of three base-class pointers
	vector<Employee *> employees{&salariedEmployee, &commissionEmployee, &basePlusCommissionEmployee};
	
	cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING\n\n";
	
	// call virtualViaPointer to print each Employee's information
	// and earnings using dynamic binding
	cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS POINTERS\n";
	
	for (const Employee* employeePtr : employees) {
		virtualViaPointer(employeePtr);
	}
	
	// call virtualViaReference to print each Employee's information
	// and earnigns using dynamic binding
	cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS REFERENCES\n";
	
	for (const Employee* employeePtr : employees) {
		virtualViaReference(*employeePtr); // note dereferencing
	}
}

// call Employee virtual functions toString and earnings off a
// base-class pointer using dynamic binding
void virtualViaPointer(const* )

