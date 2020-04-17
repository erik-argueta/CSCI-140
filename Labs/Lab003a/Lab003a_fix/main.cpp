/*
Program Description: Selects a random integer and the user must guess the selected number.
Program Author: Erik Argueta
Variable Inputs: guess, setNumber
Process Flow: Randomly selects an integer between 1 and 1,000 while the player guesses the number.
Variable Outputs: Results that tell the player if their guess was too high/low and alerts them when they are correct.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void welcome();

int main()
{
	int setNumber;
	int guess;
	bool restart = true;
	string restartAnswer;
	srand(static_cast<int>(time(0)));
	
	welcome();
	
	setNumber = (1 + rand() % 1'000);
	
	//cout << endl << setNumber << endl;

	cout << "I have a random number between 1 and 1,000" << endl;
	cout << "Can you guess my number?\n" << endl;
	cout << "Take your first guess: ";
	
	
	while (restart == true)
	{
		cin >> guess;
		
		if (guess == setNumber)
		{
			cout << "\nCorrect!";
			cout << "\nWould you like to play again? (y or n) ";
			cin >> restartAnswer;
			
			if (restartAnswer == "y")
			{
				setNumber = (1 + rand() % 1'000);
				cout << setNumber << endl;
				cout << "\nI have a random number between 1 and 1,000" << endl;
				cout << "Can you guess my number?" << endl;
				cout << "Take your first guess: ";
				restart = true;
			}
			
			else
			{
				cout << "\nThank you for playing! \nGoodbye!" << endl;
				restart = false;
			}
		}
		
		else if (guess < setNumber)
		{
			cout << "Too low. Try again." << endl;
			cout << "\n\nTake another guess: ";
		}
		
		else if (guess > setNumber)
		{
			cout << "Too high. Try again." << endl;
			cout << "\n\nTake another guess: ";
		}
	}
	
	return 0;
}

void welcome()
{
	string name;
	cout << "Hello! What is your name? ";
	getline(cin, name);
	cout << "Hello " << name << "! Welcome to the Guessing Game!" << endl;
}
