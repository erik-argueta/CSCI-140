//
//  cashregister.h
//  CashRegister2
//
//  Created by Erik Argueta on 3/1/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#ifndef cashregister_h
#define cashregister_h

/**
	A simulated cash register that tracks the item count and the total amount due.
 */
class CashRegister
{
public:
	/**
		Constructs a cash register with cleared item count and total.
	 */
	CashRegister();
	
	/**
		Clears item count and total.
	 */
	void clear();
	
	/**
		 Adds an item to this cash register
		 @param price the price of this item
	 */
	void add_item(double price);
	
	/**
		@return the total amount of the current sale
	 */
	double get_total() const;
	
	/**
		@return the item count of the current sale
	 */
	int get_count() const;
	
private:
	int item_count;
	double total_price;
};


#endif /* cashregister_h */
