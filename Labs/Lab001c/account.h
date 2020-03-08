// Fig 3.2: Account.h

#pragma once

#include <string>
#include <iostream>

using namespace std;

class Account
{
public:

	/*
	// constructor initializes data member name with parameter accountName
	explicit Account(string accountName) : name{ accountName }
	{
		// member initializer
		// empty body
	}
	*/

	// Account constructor with two parameters
	Account(string accountName, int initialBalance) : name{ accountName }
	{
		// assign accountName to data member name

		// validate member balance keeps its default initial value of 0
		// data member balance keeps its default initial value of 0
		if (initialBalance > 0)
		{
			// if the initialBalance is valid
			balance = initialBalance; // assign it to data member balance
		}
	}

	// function that deposits (adds) only a valid amoun to the balance
	void deposit(int depositAmount)
	{
		if (depositAmount > 0)
		{
			// if the depositAmount is valid
			balance += depositAmount; // add it to the balance
		}
	}

	
	// function that withdraws (subtracts) only a valid amount to the balance
	void withdraw(int withdrawAmount, int initialBalance)
	{
		if (withdrawAmount > initialBalance)
		{
			cout << "Error: Withdrawal amount exceeded account balance" << endl;
			
		}

		else if (withdrawAmount > 0 || withdrawAmount <= initialBalance)
		{
			balance -= withdrawAmount;
		}
	}
	

	// function returns the account balance
	int getBalance() const
	{
		return balance;
	}

	// member function that sets the account name in the object
	void setName(string accountName)
	{
		name = accountName; // store the account name
	}

	// member function that retrieves the account name from the object
	string getName() const
	{
		return name; // return name's value to this function's caller
	}

private:
	string name; // data member containing account holder's name
	int balance{ 0 }; // data member with default initial value
}; // end class Account
