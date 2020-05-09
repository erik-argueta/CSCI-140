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
	int guesses{3};
	int rounds{1};
	int gamesWon{2};
	int guess;
	int setNumber;
	srand(static_cast<int>(time(0)));
	
	welcome();
	
	
	setNumber = (1 + rand() % 20);
	
	cout << "\n\nRULES:\n";
	cout << "I have a number between 1 and 20.\n";
	cout << "You have only 3 guesses per round.\n";
	cout << "If you can guess correctly at least twice, you win the game!\n";
	cout << "I will pick a random number at the end of each round!\n";
	cout << "Can you guess my number?\n";
	cout << "Take your first guess!\n\n";
	
	while (rounds <= 3) {
		//cout << "Games Won: " << gamesWon << endl;
		cout << "===================================================================================\n";
		//cout << "Number: " << setNumber << endl;
		//cout << "Round: " << rounds << endl;
		cout << "Guesses Left: " << guesses << endl;
		cout << "===================================================================================\n\n";

		cout << "Please enter a number: ";
		cin >> guess;
		
		if (guess == setNumber) {
			gamesWon--;
			rounds++;
			guesses = 3;
			cout << "\n=================================================================================\n";

			cout << "\nCorrect! The number was " << setNumber << "!\n\n";
			//cout << "You just need " << gamesWon << " more correct guess to win the game!\n";
			//cout << "I have now picked a new number between 1 and 20\nTake a guess!\n\n";
			setNumber = (1 + rand() % 20);
		}
		
		else if (guess < setNumber) {
			guesses--;
			cout << "Too Low!\nTry again!\n\n";
		}
		
		else if (guess > setNumber) {
			guesses--;
			cout << "Too High!\nTry again!\n\n";
		}
		
		if (guesses == 0) {
			rounds++;
			guesses = 3;
			cout << "=================================================================================\n";

			cout << "\nYou spent all of your guesses.\n";
			cout << "The correct number was " << setNumber << "!\n\n";
			//cout << "I have now picked a new number between 1 and 20\nTake a guess!\n\n";
			setNumber = (1 + rand() % 20);
		}
	}
	
	cout << "===================================================================================\n";
	
	if (gamesWon <= 0) {
		cout << "Congratulations! You have beat me in my own game! Good thing we weren't betting money!\n";
	}
	
	else {
		cout << "Better luck next time!\n";
	}
	return 0;
}

void welcome()
{
	string name;
	cout << "Hello! What is your name? ";
	getline(cin, name);
	cout << "\nHello " << name << "! Welcome to the Guessing Game!" << endl;
}
