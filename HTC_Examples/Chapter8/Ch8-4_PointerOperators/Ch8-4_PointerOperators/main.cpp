//
//  main.cpp
//  Ch8-4_PointerOperators
//
//  Created by Erik Argueta on 5/10/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
	int a{7}; // intialize a with 7
	int* aPtr = &a; // initialize aPtr with the address of int variable a
	
	cout << "The address of a is " << &a << "\nThe value of aPtr is " << aPtr;
	cout << "\n\nThe value of a is " << a << "\nThe value of *aPtr is " << *aPtr << endl;
	
	return 0;
}
