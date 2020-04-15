

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void welcome()
{
	string name;
	cout << "Hello! What is your name?";
	getline(cin, name);
	cout << "Hello" << name << "! Welcome to the Guessing Game!" << endl;
}

int main()
{
	int setNumber;
	int guess;
	bool restart = true;
	string restartAnswer;
	
	welcome();
	
	setNumber = (1 + rand() % 1'000);

	cout << "I have a random number between 1 and 1,000" << endl;
	cout << "Can you guess my number?" << endl;
	cout << "Take your first guess: ";
	
	
	while (restart == true)
	{
		cin >> guess;
		
		
		if (guess == setNumber)
		{
			cout << "\nCorrect!" << endl;
			cout << "Would you like to play again? (y or n) ";
			cin >> restartAnswer;
			
			if (restartAnswer == "y")
			{
				setNumber = (1 + rand() % 1'000);
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
			cout << "\nToo low. Try again." << endl;
			cout << "Take another guess: ";
		}
		
		else if (guess > setNumber)
		{
			cout << "\nToo high. Try again." << endl;
			cout << "Take another guess: ";
		}
	}
	
	return 0;
}
