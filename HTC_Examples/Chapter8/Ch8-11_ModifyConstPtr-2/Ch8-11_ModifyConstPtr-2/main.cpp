//
//  main.cpp
//  Ch8-11_ModifyConstPtr-2
//
//  Created by Erik Argueta on 5/10/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
	int x, y;
	
	// ptr is a constant pointer to an integer that can be modified
	// through ptr, but ptr always points to the same memory lovation.
	int* const ptr{&x}; // const pointer must be initialized
	
	*ptr = 7; // allowed: *ptr is not const
	ptr = &y; // error: ptr is const; cannot assign to it a new address
	
}
