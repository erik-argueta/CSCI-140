#pragma once
class Account
{
public:
	// Account constructor with 0 parameter
	Account(int account_number);

	void clear();
	void setBalance(float balance, float charges, float credits);
	void displayBalance();
	void displayLimit();

	float getBalance();
	float getLimit();

private:
	float balance;
	float charges;
	float credits;
	float credit_limit;
	float final_balance;
	int account_number;
};
