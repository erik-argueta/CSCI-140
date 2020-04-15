//
//  main.cpp
//  Ch6-9_Craps-simulation
//
//  Created by Erik Argueta on 4/14/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
using namespace std;

unsigned int rollDice(); // rolls dice, calculates and displays sum

int main()
{
	// scoped enumeration with constants that represent the game status
	enum class Status {CONTINUE, WON, LOST}; // all caps in constants
	
	// randomize random number generator using current time
	srand(static_cast<unsigned int>(time(0)));
	
	unsigned int myPoint{0}; // point if no win or loss on first roll
	Status gameStatus; // can be CONTINUE, WON, OR LOST
	unsigned int sumofDice{rollDice()}; // first roll of the dice
	
	// determine game status and point (if needed) based on first roll
	switch (sumofDice)
	{
		case 7: // win with 7 on first roll
		case 11: // win with 11 on first roll
			gameStatus = Status::WON;
			break;
		case 2: // lose with 2 on first roll
		case 3: // lose with 3 on first roll
		case 12: // lose with 12 on first roll
			gameStatus = Status::LOST;
			break;
		default: // did not win or lose, so remember point
			gameStatus = Status::CONTINUE; // gmae is not over
			myPoint = sumofDice; // remember the point
			cout << "Point is " << myPoint << endl;
			break;
	}
	
	// while game is not complete
	while (Status::CONTINUE == gameStatus)
	{
		// not WON or LOST
		sumofDice = rollDice();
		
		// determine game status
		if (sumofDice == myPoint)
		{
			// win by making point
			gameStatus = Status::WON;
		}
		
		else
		{
			if (sumofDice == 7)
			{
				// lose by rolling 7 before point
				gameStatus = Status::LOST;
			}
		}
	}
	
	// display won or lost message
	if (Status::WON == gameStatus)
	{
		cout << "Player wins" << endl;
	}
	
	else
	{
		cout << "Player loses" << endl;
	}

	return 0;
}

// roll dice, calculate sum, and display results
unsigned int rollDice()
{
	int die1{1 + rand() % 6}; // first die roll
	int die2{1 + rand() % 6}; // second die roll
	int sum{die1 + die2}; // compute sum of die values
	
	// display results of this roll
	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	
	return sum;
}
