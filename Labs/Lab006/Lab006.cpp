/*
Program Description: Prints Status and Information
Program Author: Erik Argueta
Variable Inputs: Status, Rank, Name, Address, Phone Number, Email
Process Flow: Through Inheritance, objects are created
Variable Outputs: display
*/
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
#include "Staff.h"
using namespace std;

int main() {
	// Create a person------------------------------------------
	Person P("John Doe", "123 Maple Street, LA CA", "515-125-3345", "jdoe@gmail.com");

	cout << "My name is " << P.getFullName() << endl;
	cout << "My address is " << P.getAddress() << endl;
	cout << "My phone number is " << P.getPhone() << endl;
	cout << "My email is " << P.getEmail() << endl;

	// Create a student------------------------------------------
	Student student1;
	student1.addStatus("freshman");
	student1.display();

	// Create an Employee
	Employee employee1;
	employee1.update("61-2016", 50000, "07-01-2012");
	employee1.display();
	
	// Create a faculty
	Faculty faculty1;
	faculty1.assignment("Professor", "Tenured");
	faculty1.display();

	// Create a staff
	Staff staff1;
	staff1.assign("Administrator");
	staff1.display();
}