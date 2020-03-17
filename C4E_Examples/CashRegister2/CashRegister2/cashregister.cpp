//
//  cashregister.cpp
//  CashRegister2
//
//  Created by Erik Argueta on 3/1/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include "cashregister.h"

CashRegister::CashRegister()
{
	clear();
}

void CashRegister::clear()
{
	item_count = 0;
	total_price = 0;
}

void CashRegister::add_item(double price)
{
	item_count++;
	total_price = total_price + price;
}

double CashRegister::get_total() const
{
	return totacl_price;
}

int CashRegister::get_count() const
{
	return item_count;
}
