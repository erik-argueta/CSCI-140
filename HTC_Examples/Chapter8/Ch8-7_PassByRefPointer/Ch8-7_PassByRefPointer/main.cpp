//
//  main.cpp
//  Ch8-7_PassByRefPointer
//
//  Created by Erik Argueta on 5/10/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
using namespace std;

void cubeByReference(int*); // prototype

int main() {
	int number{5};
	
	cout << "The original value of number is " << number;
	cubeByReference(&number); // pass number address to cubeByReference
	cout << "\nThe new value of number is " << number << endl;
	
	
	return 0;
}

// calculate cube of *nPtr; modifies variable number in main
void cubeByReference(int* nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}
