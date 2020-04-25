// Account.h

#ifndef Account_h
#define Account_h
#include <string>
using namespace std;

class Employee
{
public:
	
	Employee(string fname, string lname, float monthx);
	
	void set_first_name(string fname);
	void set_last_name(string lname);
	void set_monthly_salary(float monthx);
	void set_annual_total(float monthx);
	void set_raised_total(float monthly_salary);
	void set_final_annual(float raised_total);
	
	string get_first_name() const;
	string get_last_name() const;
	float get_monthly_salary() const;
	float get_annual_total() const;
	float get_raised_total() const;
	float get_final_annual() const;
	
	
private:
	string fname;
	string first_name;
	string lname;
	string last_name;
	float monthx;
	float monthly_salary;
	float annual_total;
	float raised_total;
	float final_annual;
};

#endif /* Account_h */
