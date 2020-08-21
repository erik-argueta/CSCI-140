// main.cpp creates object of each of the three concrete classes to test the EMPLOYEE heirarchy
// The program manipulates the objects with STATIC BINDING	
// then POLYMORPHICALLY through the use of VECTOR of EMPLOYEE base class pointers

// Fig. 12.17: main.cpp
// Processing Employee derived-class objects with static binding 
// then polymorphically using dynamic binding
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

void virtualViaPointer(const Employee* const); // prototype
void virtualViaPointer(const Employee&); // prototype

int main() {
	cout << fixed << setprecision(2); // set floating-point formatting

	// create derived-class objects
	SalariedEmployee salariedEmployee{
		"John", "Smith", "111-11-1111", 800 };
	CommissionEmployee commissionEmployee{
		"Sue", "Jones", "333-33-3333", 10000, .06 };
	BasePlusCommissionEmployee basePlusCommissionEmployee{
		"Bob", "Lewis", "444-44-4444", 5000, .04, 300 };

	// output each Employee's information and earnings using static binding
}