//
//  Person.cpp
//  Lab006
//
//  Created by Erik Argueta on 6/12/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include "Person.h"
#include <string>
using namespace std;

// Person
Person::Person() {
	FullName = "";
	Address = "";
	Phone = "";
	Email = "";
}

// constructor
Person::Person(string Name, string Addr, string Tel_no, string E_addr) {
	FullName = Name;
	Address = Addr;
	Phone = Tel_no;
	Email = E_addr;
}

string Person::getFullName() {
	return FullName;
}

string Person::getAddress() {
	return Address;
}
string Person::getPhone() {
	return Phone;
}
string Person::getEmail() {
	return Email;
}
