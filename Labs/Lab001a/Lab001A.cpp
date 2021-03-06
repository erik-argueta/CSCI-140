// Lab001A.cpp : Defines the entry point for the console application.
/*
	2.29 (Table) Using the techniques of this chapter, write a 
	program that calculates the squares and cubes of the integers 
	from 0 to 10. Use tabs to print the following neatly 
	formatted table of values

	integer	square	cube
	0		0		0
	1		1		1
	2		4		8
	3		9		27
	4
	5
	6
	7
	8
	9
	10
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

void Greeting()
{
	string first;
	string last;
	string full;

	full = first + " " + last;

	cout << "Hello! What is your name?" << endl;
	cin >> first >> last;

	full = first + " " + last;

	cout << "Welcome " << full << "!" << endl << endl;
}

void Table()
{
	float integer;
	float square;
	float cube;

	cout << "integer" << setw(10) << "square" << setw(10) << "cube" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << setw(11) << pow(i, 2) << setw(12) << pow(i, 3) << endl;
	}
}

int main()
{
	Greeting();

	Table();

	
	system("pause");
    return 0;
}

