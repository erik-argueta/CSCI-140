#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
	Person();
	Person(string FullName, string Address, string Phone, string Email);
	string getFullName() const;
	string getAddress() const;
	string getPhone() const;
	string getEmail() const;
private:
	string FullName;
	string Address;
	string Phone;
	string Email;

};



#endif // !PERSON_H
