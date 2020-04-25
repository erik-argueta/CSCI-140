//
//  Sales.hpp
//  Lab003b
//
//  Created by Erik Argueta on 4/24/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#ifndef Sales_hpp
#define Sales_hpp

#include <stdio.h>
#include <string>
#include <array>

class Sales
{
public:
	// Sales constructor with two parameters
	Sales(std::string& salesperson_name, int& product_number, int& product_sold) : name{salesperson_name}
	{
		
	};
	
	void setTotalSales();
	
	int getTotalSales() const;
	
	
	
private:
	std::string name; // name of the salesperson
};

#endif /* Sales_hpp */
