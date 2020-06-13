//
//  main.cpp
//  Lab006
//
//  Created by Erik Argueta on 6/12/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	//Create a Person-------------------------------------------
	cout << "My name is " << P.getFullName() << endl;
	cout << "My address" << P.getAddress() << endl;
	cout << "My phone number is" << P.getPhone() >> endl;
	cout << "My email is" << P.getEmail() << endl << endl;
	
	// Create a student-------------------------------------------
	Student student1;
	student1.Add_status("freshman");
	student1.display();
	
	//Create an employee------------------------------------------
	Employee employee1;
	//
}
