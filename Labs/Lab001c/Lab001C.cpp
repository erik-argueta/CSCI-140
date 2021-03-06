// Lab001C.cpp : Defines the entry point for the console application.
//

/*
	Modify class ACCOUNT (Fig. 3.8) to provide a member function called 
	WITHDRAW that withdraws money from an Account. 
	
	Ensure that the withdrawal amount does not exceed the ACCOUNT’s balance. 
	
	If it does, the balance should be left unchanged and the member function should 
	display a message indicating "WITHDRAWAL AMOUNT EXCEEDED ACCOUNT BALANCE."
	
	Modify class ACCOUNTTEST (Fig. 3.9) to test member function WITHDRAW. 
*/

#include "stdafx.h"
#include "account.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int depositAmount;
	int withdrawAmount;

	// create two Account objects
	Account account1{"Jane Green", 50};
	Account account2{ "John Blue", -7};

	// display initial value of name for each Account
	cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << endl;
	cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;

	cout << endl << "Enter withdraw amount for account1: "; // prompt
	cin >> withdrawAmount; // obtain user input
	cout << "withdrawing " << withdrawAmount << " to account1 balance..." << endl;
	account1.withdraw(withdrawAmount, 50); // add to account1's balance 

	// display balances
	cout << endl << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << endl;
	cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;

	cout << endl << "Enter deposit amount for account2: "; // prompt
	cin >> withdrawAmount; // obtain user input
	cout << "withdrawing " << withdrawAmount << " to account2 balance..." << endl;
	account2.withdraw(withdrawAmount, -7); // add to account2 balance

	// display balances
	cout << endl << endl << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
	cout << endl << "account2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;


	system("pause");
    return 0;
}

