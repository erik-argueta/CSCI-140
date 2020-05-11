#include <iostream>
#include <iomanip>
#include <array>
#include "Sales.h"
using namespace std;
Sales::Sales(string salesPerson)
	: name{ salesPerson } {
	setname(salesPerson);
	inputProducts();
	inputsalePrice();
}
void Sales::setname(string salesPerson) {
	name = salesPerson;
}
string Sales::getname() const {
	return name;
}
void Sales::inputProducts()
{
	cout << "Please enter all the product numbers for " << getname() << ": ";
	for (size_t i = 0; i < 3; i++)
	{
		cin >> products[i];
	}
}

void Sales::inputsalePrice() {
	
	cout << "please enter all sales price for " << getname() << ": " << endl;
	for (size_t i = 0; i < 3; ++i) {
		
		for (size_t j = 0; j < 8; ++j) {
			cin >> saleprice[i][j];
			total_sales += saleprice[i][j];
		}
		total[i] = total_sales;
		total_sales = 0;
	}
	
}

void Sales::displaysalePrice() const {

	for (size_t i = 0; i < 3; i++)
	{
		cout << "Product " << products[i];
		for (size_t j = 0; j < 8; ++j)
		{
			cout << setw(10) << saleprice[i][j] ;
		}
		cout << setw(12) << total[i] << endl;
		cout << endl;
	}
}
float Sales::getTotalSales() const {
	return total[3]; // not actually useing it
}

void Sales::displaySalesReport() const {
	cout << endl << endl;
	cout <<"                                   "
		<< "April Sales Repoet (4/20/2020)" << endl;
	cout << "Salesperson" << setw(10) << "Sales1" << setw(10) << "Sales2" << setw(10) << "Sales3"
		<< setw(10) << "Sales4" << setw(10) << "Sales5" << setw(10) << "Sales6" << setw(10) << "Sales7"
		<< setw(10) << "Sales8" << setw(10) << "Total" << endl;
	cout << setw(3) << "Product" << endl;
	cout << endl;
}



