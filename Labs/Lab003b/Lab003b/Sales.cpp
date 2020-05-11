//
//  Sales.cpp
//  Lab003b
//
//  Created by Erik Argueta on 4/24/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include "Sales.h"

Sales::Sales(std::string salesPerson) {
	setName(salesPerson);
	inputProduct();
	inputSaleNumber();
}

void Sales::setName(std::string salesPerson) {
	name = salesPerson;
}

std::string Sales::getName() const {
	return name;
}

void Sales::inputProduct() {
	std::cout << "\nPlease enter all the product types for " << getName() << ": ";
	for (size_t i{0}; i < products.size(); i++) {
		std::cin >> products[i];
	}
}

void Sales::inputSaleNumber() {
	std::cout << "\nPlease enter the sales amount for " << getName() << ":\n ";
	for (size_t i{0}; i < 3; ++i) {
		for (size_t j{0}; j < 8; ++j) {
			std::cin >> salePrice[i][j];
			totalSales += salePrice[i][j];
		}
		
		total[i] = totalSales;
		totalSales = 0;
	}
}

void Sales::displaySaleNumber() const {
	for (size_t i{0}; i < 3; i++) {
		std::cout << "Product " << products[i];
		for (size_t j{0}; j < 8; ++j) {
			std::cout << std::setw(10) << salePrice[i][j];
		}
		std::cout << std::setw(12) << total[i] << std::endl << std::endl;
	}
}

float Sales::getTotalSales() const {
	return total[3];
}

void Sales::displayReport() const {
	std::cout << std::endl << std::endl;
	std::cout << "                                   " << "April Sales Report (4/20/2020)" << std::endl;
	std::cout << "SalesPerson" << std::setw(10) << "Sales1" << std::setw(10) << "Sales2" << std::setw(10) << "Sales3"
		<< std::setw(10) << "Sales4" << std::setw(10) << "Sales5" << std::setw(10) << "Sales6" << std::setw(10) << "Sales7"
		<< std::setw(10) << "Sales8" << std::setw(10) << "Total" << std::endl;
	std::cout << std::setw(3) << "Product" << std::endl << std::endl;
}
