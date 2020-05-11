/*
Program Description: Prints Sales Report
Program Author: Erik Argueta
Variable Inputs: salesNumber, salesAmount
Process Flow: Inserts numbers into an array and then prints out the array with a sum.
Variable Outputs: salesReport
*/

#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include "Sales.h"
using namespace std;

int main() {
	
	Sales salesPerson1{"Johnny"};
	Sales salesPerson2{"Robert"};
	Sales salesPerson3{"Linda"};
	
	salesPerson1.displayReport();
	cout << salesPerson1.getName() << endl;
	salesPerson1.displaySaleNumber();
	
	cout << endl;
	
	cout << salesPerson2.getName() << endl;
	salesPerson2.displaySaleNumber();
	
	cout << endl;
	
	cout << salesPerson3.getName() << endl;
	salesPerson3.displaySaleNumber();
	
	return 0;
}
