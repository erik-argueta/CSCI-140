// Overloaded square functions

#include <iostream>
using namespace std;

// function square for int values
int square(int x)
{
	cout << "square of intefer " << x << " is ";
	return x * x;
}

// functin square for double values
double square(double y)
{
	cout << "square of double " << y << " is ";
	return y * y;
}

int main()
{
	cout << square(7); // calls int version
	cout << endl;
	cout << square (7.5); // calls double version
	cout << endl;
	return 0;
}
