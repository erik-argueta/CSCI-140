/*
 Find the smallest Value
 
 Assume that the first value read specifies the number of values to input from the user
 */

#include <iostream>
#include <string>
using namespace std;

void welcome()
{
	string full;
	
	cout << "Please enter your full name: ";
	getline(cin, full);
	
	cout << "Hello " << full << "!" << endl;
}

int main()
{
	welcome();
	
	int low = 999999;
	int number;
	
	cout << "Please enter 10 integers. \n";
	cout << "This program will detect and print out the lowest value" << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "- ";
		cin >> number;
		if (number < low)
		{
			low = number;
		}
	}
	
	cout << "The lowest integer entered was: " << low << endl;
	
	return 0;
}
