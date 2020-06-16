// Fig. 10.15: Complex.cpp
// Complex class member-function definitions.
#include <string>
#include "Complex.h" // Complex class definition
#include <iomanip>
using namespace std;

// Constructor
Complex::Complex(double realPart, double imaginaryPart)
	: real{ realPart }, imaginary{ imaginaryPart } { }

// addition operator
Complex Complex::operator+(const Complex& operand2) const {
	return Complex{ real + operand2.real, imaginary + operand2.imaginary };
}

// subtraction operator
Complex Complex::operator-(const Complex& operand2) const {
	return Complex{ real - operand2.real, imaginary - operand2.imaginary };
}

// multiplication operator
Complex Complex::operator*(const Complex& operand2) const {
	return Complex{ real * operand2.real, imaginary * operand2.imaginary };
}

// division operator
Complex Complex::operator/(const Complex& operand2) const {
	Complex ans;
	ans.real = ((imaginary * operand2.imaginary) + (imaginary * operand2.imaginary), (imaginary * operand2.real) + (real * operand2.imaginary));
	return ans;
}

bool Complex::operator==(const Complex& right) const {
	if (real == right.real && imaginary == right.imaginary) { return true; }
	return false;
}

bool Complex::operator!=(const Complex& right) const {
	return !(*this == right);
}


/* return string representation of a Complex object in the form: (a, b)
string Complex::toString() const {
	return "("s + to_string(real) + ", "s + to_string(imaginary) + ")"s;
}
*/

// output
ostream& operator<<(ostream& output, const Complex& number) {
	output << "(" << number.real << ", " << number.imaginary << ")";
	return output;
}

// input
istream& operator>>(istream& input, Complex& number) {
	//input.ignore();
	input >> setw(3) >> number.real;
	input.ignore(2); 
	input >> setw(3) >> number.imaginary;
	//input.ignore();
	return input;
}