//
//  main.cpp
//  Ch6-12_CallStack
//
//  Created by Erik Argueta on 4/16/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
using namespace std;

int square(int); // prototype for function square

int main()
{
	int a{10}; // value to square (local variable in main)
	
	cout << a << " squared: " << square(a) << endl; // display a squared
	
	return 0;
}

// returns the square of an integer
int square(int x)
{
	// x is a local variable
	return x * x; // calculate square and return result
}
