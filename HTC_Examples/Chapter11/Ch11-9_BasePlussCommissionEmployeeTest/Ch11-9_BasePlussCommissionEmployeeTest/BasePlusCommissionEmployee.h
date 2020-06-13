// Fig 11.7
// BasePlusCommissionEmployee class definition represents an employee
// that receives a base salary in addition to commission

#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class

class BasePlusCommissionEmployee {
public:
	BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0);
	
	void setFirstName(const std::string&); // set first name
	std::string getFirstName() const; // get first name
	
	void setLastName(const std::string&); // set last name
	std::string getLastName() const; // get last name
	
	void setSocialSecurityNumber(const std::string&); // set social security number
	std::string getSocialSecurityNumber() const; // get social security number
	
	void setGrossSales(double); // set gross sales amount
	double getGrossSales() const; // get gross sales amount
	
	void setCommissionRate(double); // set commission rate
	double getCommissionRate() const; // get commission rate
	
	void setBaseSalary(double); // set base salary
	double getBaseSalary() const; // get base salary
	
	double earnings() const; // calculate earnings
	std::string toString() const; // create string representation
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSales; // gross weekly sales
	double commissionRate; // commission percentage
	double baseSalary; // base salary
};

#endif /* BassPlusCommissionEmployee_hpp */
