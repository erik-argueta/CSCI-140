//
//  main.cpp
//  Lab002a
//
//  Created by Erik Argueta on 3/15/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//
//#include stdafx.h
#include <iostream>
#include <string>
using namespace std;

void welcome()
{
	string first;
	string last;
	string full;
	
	cout << "Hello! What is your full name?";
	cin >> first >> last;
	
	full = first + " " + last;
	
	cout << "Hello " << full << "!" << endl;
	
}

int main() {
	
	unsigned counter = 1;
	float number;
	float largest1 = -1000;
	float largest2 = 0;
	
	//welcome();
	
	cout << "Please enter 10 values. This program will determine the two largest values." << endl;
	
	while (counter <= 10)
	{
		if (largest1 > largest2)
		{
			largest2 = largest1;
		}
		
		cout << counter << ". ";
		cin >> number;
		counter++;
		
		if (number > largest1)
		{
			largest1 = number;
		}
	}
	
	cout << endl << "The first largest number is: " << largest1 << endl;
	cout << "The second largest number is: " << largest2 << endl << endl;
	
	//system("pause")
	return 0;
}
