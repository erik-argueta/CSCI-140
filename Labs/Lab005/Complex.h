// Fig. 10.14: Complex.h
// Complex class definition.
#include <string>
#include <iostream>

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
	explicit Complex(double = 0.0, double = 0.0); // constructor
	Complex operator+(const Complex&) const; // addition
	Complex operator-(const Complex&) const; // subtraction
	Complex operator*(const Complex&) const; // multiplication
	Complex operator/(const Complex&) const; // division
	bool operator==(const Complex&) const; // identical
	bool operator!=(const Complex&) const; // different
	//std::string toString() const;

	friend std::ostream& operator<<(std::ostream&, const Complex&);
	friend std::istream& operator>>(std::istream&, Complex&);

private:
	double real; // real part
	double imaginary; // imaginary part
};

#endif