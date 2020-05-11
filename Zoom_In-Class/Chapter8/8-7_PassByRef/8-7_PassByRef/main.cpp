//
//  main.cpp
//  8-7_PassByRef
//
//  Created by Erik Argueta on 5/9/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
using namespace std;

size_t getSize(double *);

int main() {
	double numbers[20];
	
	cout << "The number of bytes in the array is " << sizeof(numbers);
	cout << "\nThe number of bytes returned by getSize is " << getSize(numbers) << endl;
	
	return 0;
}

// return size of ptr
size_t getSize(double *ptr) {
	return sizeof(ptr);
}
