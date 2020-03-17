//
//  Account.h
//  Lab002b
//
//  Created by Erik Argueta on 3/16/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#ifndef Account_h
#define Account_h

class Account
{
public:
	Account();
	
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
};


#endif /* Account_h */
