//
//  Person.h
//  Lab006
//
//  Created by Erik Argueta on 6/12/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#ifndef Person_h
#define Person_h

class Person {
public:
	Person();
	Person(string FullName, string Address, string Phone, string Email);
	string getFullName();
	string getAddress();
	string getPhone();
	string getEmail();
	
private:
	string FullName;
	string Address;
	string Phone;
	string Email;
}


#endif /* Person_h */
