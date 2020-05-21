//
//  main.cpp
//  Ch8-10_ModifyArrayDataPtr
//
//  Created by Erik Argueta on 5/10/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
void f(const int*); // prototype

int main() {
	int y{0};
	
	f(&y); // f will attempt an illegal modification
	return 0;
}

// constant variable cannot be modified through xPtr
void f(const int* xPtr) {
	*xPtr = 100; // error: cannot modifuy a const object
}
