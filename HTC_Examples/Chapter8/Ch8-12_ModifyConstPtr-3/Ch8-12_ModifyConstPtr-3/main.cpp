//
//  main.cpp
//  Ch8-12_ModifyConstPtr-3
//
//  Created by Erik Argueta on 5/10/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
	int x{5}, y;
	
	// ptr is a constant pointer to a constant integer
	// ptr always points to the same location; trhe integer
	// at that location cannot be modified
	const int* const ptr{&x};
	
	cout << *ptr << endl;
	
	*ptr = 7; // error: *ptr is const; cannot assign new value
	ptr = &y; // error: ptr is const; cannot assign new address
	
	
	return 0;
}
