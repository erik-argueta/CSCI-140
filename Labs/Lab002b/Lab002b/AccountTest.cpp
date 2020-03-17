/*
 100
 5394.78
 1000
 500
 5500
 
 200
 1000
 123.45
 321
 1500
 
 -1
 */

//#include stdafx.h
#include <iostream>
#include "Account.h"
using namespace std;

void welcome()
{
	string first;
	string last;
	string name;
	
	cout << "Welcome to Account Test!\n";
	cout << "May I please have your name?\n";
	
	cin >> first >> last;
	
	name = first + " " + last;
	
	cout << "Hello " << name << "!\n";
}

int main()
{
	int account_number;
	float balance;
	float charges;
	float credits;
	float credit_limit;
	
	welcome();
	
	Account acc;
	
	cout << "Enter account number (or -1 to quit): ";
	
	while (cin >> account_number && account_number != -1)
	{
		acc.clear();
		cout << endl << "Enter beginning balance: ";
		cin >> balance;
		cout << endl << "Enter total charges: ";
		cin >> charges;
		cout << endl << "Enter total credits: ";
		cin >> credits;
		cout << endl << "Enter credit limit: ";
		cin >> credit_limit;
		
		acc.setBalance(balance, charges, credits);
				
		cout << endl << "New balance is " << acc.getBalance() << endl;
		
		if (acc.getBalance() > credit_limit)
		{
			cout << endl << "Account: " << account_number << endl;
			cout << "Credit limit: " << credit_limit << endl;
			cout << "Balance: " << acc.getBalance() << endl;
			cout << "Credit Limit Exceeded." << endl;
		}
		
		cout << "---------------------------------------------------" << endl;
		cout << "Enter account number (or -1 to quit): ";

	}
	cout << "Goodbye!" << endl;
	
	//system("pause");
	return 0;
}
