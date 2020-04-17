// Recursive function factorial

#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long); // function prototype

int main()
{
	// calculate the factorials of 0 through 10
	for (unsigned int counter{0}; counter <= 10; ++counter)
	{
		cout << setw(2) << counter << "! = " << factorial(counter) << endl;
	}
	
	return 0;
}

// recursive definition of function factorial
unsigned long factorial(unsigned long number)
{
	if (number <= 1)
	{
		// test for base case
		return 1;
	}
	
	else
	{
		// recursive step
		return number * factorial(number - 1);
	}
}
