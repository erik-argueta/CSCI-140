//
//  main.cpp
//  CH7-5_ArrayEvenNumbers
//
//  Created by Erik Argueta on 4/18/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
	// constant variable can be used to specify array size
	const size_t arraySize{5}; // must initialize in declaration
	
	array<int, arraySize> values; // array values has 5 elements
	
	for (size_t i{0}; i < values.size(); ++i)
	{
		// set the values
		values[i] = 2 + 2 * i;
	}
	
	cout << "Element" << setw(10) << "Value" << endl;
	
	// output contents of array s in tabular format
	for (size_t j{0}; j < values.size(); ++j)
	{
		cout << setw(7) << j << setw(10) << values[j] << endl;
	}
	
	return 0;
}
