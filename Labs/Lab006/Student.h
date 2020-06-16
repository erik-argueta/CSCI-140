#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"

class Student : public Person {
public:
	Student();
	void addStatus(string classStatus);
	void display() const;
private:
	string status;
};


#endif // !STUDENT_H
