//
//  main.cpp
//  Ch8-13_SizeOf
//
//  Created by Erik Argueta on 5/11/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
using namespace std;

size_t getSize(double*); // prototype

int main() {
	double numbers[20]; // 20 doubles; occupies 160 bytes on our system
	
	cout << "The number of bytes in the array is " << sizeof(numbers);
	
	cout << "\nThe number of bytes returned by getSize is " << getSize(numbers) << endl;
	
	cout << "Size of Array [" << sizeof(numbers) / sizeof(numbers[0]) << "]" << endl;
	
	return 0;
}

// return size of ptr
size_t getSize(double* ptr) {
	return sizeof(ptr);
}
