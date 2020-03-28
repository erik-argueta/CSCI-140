/*
 Calculate the product of odd integers from 1 to 15
 */

#include <iostream>
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
	
	int result = 1;
	
	for (int i = 1; i <= 15; i++)
	{
		if (i == 2 || i == 4 || i == 4 || i == 6 || i == 8 || i == 10 || i == 12 || i == 14)
		{
			continue;
		}
		
		else
		{
			result *= i;
		}
	}
	
	cout << "The product of odd integers from 1 to 15 is: " << result << endl;
	
	return 0;
}
