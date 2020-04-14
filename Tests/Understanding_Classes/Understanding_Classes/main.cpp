// main.cpp

#include <iostream>
#include <string>
#include <iomanip>
#include "Account.h"
using namespace std;

int main()
{
	
	float monthx;
	string fname;
	string lname;
	
	
	for (int i = 0; i < 2; i++)
	{
		cout << "Please enter your name: ";
		cin >> fname >> lname;
		
		cout << "Please enter your monthly salary: $";
		cin >> monthx;
		
		Employee person(fname, lname, monthx);
		 
		cout << person.get_first_name() << " " << person.get_last_name() << " Monthly Salary: $" << fixed << setprecision(2) << person.get_monthly_salary() << endl;
		cout << "Yearly Salary of " << person.get_first_name() << " " << person.get_last_name() << " is: $" << fixed << setprecision(2) << person.get_final_annual() << endl;
		
		cout << endl;
	}
	
	return 0;
}
