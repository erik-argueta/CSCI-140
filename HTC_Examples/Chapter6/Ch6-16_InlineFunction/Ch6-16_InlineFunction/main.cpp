// inline function that calculates the volume of a cube

#include <iostream>
using namespace std;

// Definition of inline function cube. Definition of function appeares
// before function is called, fo a function prototype is not required.
// First line of function definition acts as the prototype.
inline double cube(const double side)
{
	return side * side * side; // calculate cube
}

int main()
{
	double sideValue; // stores value entered by used
	cout << "Enter the side length of your cube: ";
	cin >> sideValue; // read value from user
	
	// calculate cube of sideValue and display result
	cout << "Volume of cube with side " << sideValue << " is " << cube(sideValue) << endl;
	
	return 0;
}
