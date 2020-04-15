//
//  main.cpp
//  Chapter_6a
//
//  Created by Erik Argueta on 4/14/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include <cmath> 	// allows for use of certain math functions
using namespace std;

int main()
{
	cout << "<cmath> allows for the use of certain math functions" << endl;
	
	cout << "\n\nceil(x) rounds x to the smallest integer not less than x";
	cout << "\nceil(9.2) = " << ceil(9.2) << "\nceil(-9.8) = " << ceil(-9.8);
	
	cout << "\n\ncos(x) trig cosine of x (x in radians)";
	cout << "\ncos(0.0) = " << cos(0.0);
	
	cout << "\n\nexp(x) is exponentional function for e^x";
	cout << "\nexp(1.0) = " << exp(1.0) << "\nexp(2.0) = " << exp(2.0);
	
	cout << "\n\nfabs(x) is absolute value of x";
	cout << "\nfabs(5.1) = " << fabs(5.1) << "\nfabs(0.0) = " << fabs(0.0);
	
	cout << "\n\nfloor(x) rounds x to the largest integer not greater than x";
	cout << "\nfloor(9.2) = " << floor(9.2) << "\nfloor(-9.8) = " << floor(-9.8);
	
	cout << "\n\nfmod(x,y) remainder of x/y as a floating-point number";
	cout << "\nfmod(2.6, 1.2) = " << fmod(2.6, 1.2);
	
	cout << "\n\nlog(x) is natural logarithm of x (base \"e\"";
	cout << "\nlog(2.718282) = " << log(2.718282) << "\nlog(7.389056) = " << log(7.389056);
	
	cout << "\n\nlog10(x) is logarithm of x (base 10)";
	cout << "\nlog10(10.0) = " << log10(10.0) << "\nlog10(100.0) = " << log10(100.0);
	
	cout << "\n\npow(x,y) x raised to power y (x^y)";
	cout <<"\npow(2, 7) = " << pow(2, 7) << "\npow(9, 0.5) = " << pow(9, 0.5);
	
	cout << "\n\nsin(x) is trigonometric sine of x (x in radians)";
	cout << "\nsin(0.0) = " << sin(0.0);
	
	cout << "\n\nsqrt(x) square root of x (where x is a nonnegative value";
	cout << "\nsqrt(9.0) = " << sqrt(9.0);
	
	cout << "\n\ntan(x) is the trigonometric tangent of x (x in radians)";
	cout << "\ntan(0.0) = " << tan(0.0) << endl;
	
	return 0;
}
