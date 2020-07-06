// Class CommissionEmployee member-function definitions
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h" // CommissionEmployee class definition
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate)
	: firstName(first), lastName(last), socialSecurityNumber(ssn) {
	setGrossSales(sales); // validate and store gross sales
	setCommissionRate(rate); // validate and store commission rate
}

// set first name
void CommissionEmployee::setFirstName(const string& first) {
	firstName = first; // should validate
}

// return first name
string CommissionEmployee::getFirstName() const { return firstName; }

// set last name
void CommissionEmployee::setLastName(const string& last) {
	lastName = last; // should validate
}

// return last name
string CommissionEmployee::getLastName() const { return lastName; }

// set social security nummber
void CommissionEmployee::setSocialSecurityNumber(const string& ssn) {
	socialSecurityNumber = ssn; // should validate
}

// return social Security Number
string CommissionEmployee::getSocialSecurityNumber() const 
{ return socialSecurityNumber; }