#include <string>
#include "Person.h"


// Person
Person::Person() {
	FullName = "";
	Address = "";
	Phone = "";
	Email = "";
}

// Constructor
Person::Person(string Name, string Addr, string Tel_no, string E_addr) {
	FullName = Name;
	Address = Addr;
	Phone = Tel_no;
	Email = E_addr;
}

string Person::getFullName() const{
	return FullName;
}

string Person::getAddress() const {
	return Address;
}

string Person::getPhone() const {
	return Phone;
}

string Person::getEmail() const {
	return Email;
}