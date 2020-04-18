/*
Program Description: Determines the two highest integer.
Program Author: Erik Argueta
Variable Inputs: number, largest1, largest2
Process Flow: Sets variables the largest and second largest by comparing them to the smallest integer.
Variable Outputs: largest1, largest2
*/

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
	float largest2 = -1000;
	
	//welcome();
	
	cout << "Please enter 10 values. This program will determine the two largest values." << endl;
	
	while (counter <= 10)
	{
		if (largest1 > largest2)
		{
			largest2 = largest1;
		}
		
		cin >> number;
		counter++;
		
		if (number > largest1)
		{
			largest1 = number;
		}
	}
	
	cout << "\nThe first largest number is: " << largest1;
	cout << "\nThe second largest number is: " << largest2 << endl << endl;
	
	//system("pause")
	return 0;
}
