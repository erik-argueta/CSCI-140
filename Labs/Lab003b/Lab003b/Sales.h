//
//  Sales.hpp
//  Lab003b
//
//  Created by Erik Argueta on 4/24/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//
#include <string>
#include <array>
#include <iostream>
#include <iomanip>

class Sales
{
public:

	// constants
	static const size_t salesColumn{12};
	static const size_t salesMade{3};

	// Sales constructor with two parameters
	Sales(const std::string& name, std::array<std::array<int, salesMade>, salesColumn>& salesArray) {
	}
	
	void processSales() {
		outputSales();
	}

	// Ouput contents of the table
	void outputSales() const {
		std::cout << std::setw(125) << "May's Sales\n";
		std::cout << "			"; // alligning column heads (Tab 1)

		// create a column heading for each sale
		for (size_t sales{0}; sales < salesColumn; ++sales) {
			std::cout << "Sale " << sales + 1 << "		"; // two TABS
		}
		
		std::cout << "Total" << std::endl;
		
		
		
	}
	


	
private:
	std::array<std::array<int, salesMade>, salesColumn> table; // 2d array
};
