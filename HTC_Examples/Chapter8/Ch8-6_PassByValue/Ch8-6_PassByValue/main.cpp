//
//  main.cpp
//  Ch8-6_PassByValue
//
//  Created by Erik Argueta on 5/10/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
using namespace std;

int cubeByValue(int); // prototype

int main() {
	int number{5};
	
	cout << "The original value of number is " << number;
	number = cubeByValue(number); // pass by value to cubeByValue
	cout << "\nThe new value of number is " << number << endl;
	
	return 0;
}

// calculate and return cube of integer argument
int cubeByValue(int n) {
	return n * n * n; // cube local variable n and return result
}
