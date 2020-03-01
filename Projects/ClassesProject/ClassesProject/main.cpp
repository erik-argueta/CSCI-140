// NumberOperation.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

class NumberOperation
{
public:
	void function(float num1, float num2);
	
	float get_sum() const;
	float get_diff() const;
	float get_prod() const;
	float get_quot() const;

private:
	float num1;
	float num2;
	float total;
	float diff;
	float prod;
	float quot;
};

void NumberOperation::function(float num1, float num2)
{
	total = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quot = num1 / num2;
}

float NumberOperation::get_sum() const
{
	return total;
}

float NumberOperation::get_diff() const
{
	return diff;
}

float NumberOperation::get_prod() const
{
	return prod;
}

float NumberOperation::get_quot() const
{
	return quot;
}

void display(NumberOperation oper)
{
	cout << "Sum is " << oper.get_sum() << endl;
	cout << "Difference is " << oper.get_diff() << endl;
	cout << "Product is " << oper.get_prod() << endl;
	cout << "Quotient is " << oper.get_quot() << endl;
}

int main()
{
	float num1;
	float num2;

	cout << "Please insert the first number: ";
	cin >> num1;

	cout << endl << "Please insert the second number: ";
	cin >> num2;

	NumberOperation op1;
	
	op1.function(num1, num2);
	display(op1);


	//system("pause");
	return 0;
}

