//
//  main.cpp
//  Array_Starter
//
//  Created by Erik Argueta on 4/21/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
	array<int, 5> array1; // array1 is an array of 5 integers
	
	// must initialize elements of the array to 0
	for (size_t i{0}; i < array1.size(); i++)
	{
		array1[i] = 0; // set elements at location i to 0
	}
	cout << "Element" << setw(10) << "Value" << endl;
	
	// output each array element's value
	for (size_t j{0}; j < array1.size(); ++j)
	{
		cout << setw(7) << j << setw(10) << array1[j] << endl;
	}
	
	cout << "\nUse \"array<int, 5> array1\" to initialize an array of 5 integers";
	cout << "\nMust include the array library";
	cout << "\nWhen setting FOR loop, use \"size_t j{x}; array1.size()\" in order to loop through the size of the array\n\n";
	
	cout << "====================================================================================================\n\n";
	
	// constant variables allow for specifying array sizes
	const size_t array2Size{5}; // must initialize in declaration
	
	array<int, array2Size> values; // the array values has 5 elements [0, 1, 2, 3, 4]
	
	for (size_t i{0}; i < values.size(); ++i)
	{
		// set values
		values[i] = 2 + 2 * i;
	}
	
	cout << "Element" << setw(10) << "Values" << endl;
	
	// output contents of array in tabular format
	for (size_t j{0}; j < values.size(); ++j)
	{
		cout << setw(7) << j << setw(10) << values[j] << endl;
	}
	
	cout << "\nConstant variables can be used to specify the array size. \"const size_t array2Size{5};\"";
	cout << "\nDon't forget to name the array that was just established throgh \"array<int, array2Size> values\"\n";
	
	cout << "====================================================================================================\n\n";
	
	int total{0};
	
	for (size_t i{0}; i < values.size(); ++i)
	{
		total += values[i];
	}
	
	cout << "Total of array elements: " << total << endl;
	cout << "\nUsing a loop that adds the elements in an array to a variable \"total\"\n\n";
	
	cout << "====================================================================================================\n\n";

	return 0;
}
