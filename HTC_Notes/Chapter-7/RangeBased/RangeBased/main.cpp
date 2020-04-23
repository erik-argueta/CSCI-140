//
//  main.cpp
//  RangeBased
//
//  Created by Erik Argueta on 4/21/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 5> items{1, 2, 3, 4, 5}; // initialize the array
	
	// Before the modifications
	cout << "items before modification: ";

	for (int item : items)
	{
		cout << item << " ";
	}
	
	// The modification
	for (int& itemRef : items)
	{
		// Multiply the elements of items by 2
		itemRef *= 2;
	}
	
	// display items after modification
	cout << "\nitems after modification: ";

	for (int item : items)
	{
		cout << item << " ";
	}
	
	cout << endl;
	
	cout << "\nUsing \":\" to refer to the array and also to modify the elements in the array using \"Pass by Reference\"\n";
	cout << "\nfor(int item : items)\n";
	cout << "for(int& itemRef : items)\n\n";
	
	return 0;
}
