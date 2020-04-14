//
//  Account.cpp
//  Understanding_Classes
//
//  Created by Erik Argueta on 4/13/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include "Account.h"

Employee::Employee(string fname, string lname, float monthx)
{
	set_first_name(fname);
	set_last_name(lname);
	set_monthly_salary(monthx);
	set_annual_total(monthx);
	set_raised_total(monthly_salary);
	set_final_annual(raised_total);
}

//	S E T S

void Employee::set_first_name(string fname)
{
	first_name = fname;
}

void Employee::set_last_name(string lname)
{
	last_name = lname;
}

void Employee::set_monthly_salary(float monthx)
{
	monthly_salary = monthx;
}

void Employee::set_annual_total(float monthly_salary)
{
	annual_total = monthly_salary * 12;
}

void Employee::set_raised_total(float monthly_salary)
{
	raised_total = (monthly_salary * 0.1);
}

void Employee::set_final_annual(float raised_total)
{
	final_annual = (raised_total + monthly_salary) * 12;
}

//	G E T S

string Employee::get_first_name() const
{
	return first_name;
}

string Employee::get_last_name() const
{
	return last_name;
}

float Employee::get_monthly_salary() const
{
	return monthly_salary;
}

float Employee::get_annual_total() const
{
	return annual_total;
}

float Employee::get_raised_total() const
{
	return raised_total;
}

float Employee::get_final_annual() const
{
	return final_annual;
}



