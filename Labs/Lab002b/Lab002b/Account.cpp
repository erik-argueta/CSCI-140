#include <iostream>

//#include <stdio.h>

#include "Account.h"

using namespace std;



Account::Account(int acccount_number)
{
	clear();
}

void Account::clear()
{
	balance = 0;
	credit_limit = 0;
	charges = 0;
	credits = 0;
}



void Account::setBalance(float balance, float charges, float credits)
{
	final_balance = balance + charges - credits;
}

float Account::getBalance()
{
	return final_balance;
}

float Account::getLimit()
{
	return credit_limit;
}

void Account::displayLimit()
{
	cout << "Credit limit: " << credit_limit << endl;
}

void Account::displayBalance()
{
	cout << "Balance: " << final_balance << endl;
}
