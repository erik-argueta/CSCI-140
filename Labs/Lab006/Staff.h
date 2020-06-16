#ifndef STAFF_H
#define STAFF_H
#include <string>
#include "Employee.h"

class Staff : public Employee {
public:
	Staff();
	Staff(string status);
	string getStatus() const;
	void assign(string);
	void display();

private:
	string status;
};

#endif // !STAFF_H
