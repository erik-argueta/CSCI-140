#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;
class Sales {
public:
	Sales(string SalesPerson);
	void inputsalePrice();
	void displaysalePrice() const;
	float getTotalSales() const;
	void inputProducts();
	void setname(string);
	string getname() const;
	void displaySalesReport() const;
private:
	string name;
	int products[3];
	float saleprice[3][8];
	float total_sales{ 0.0 };
	float total[3];
};
