/*
 Program Description: Simulates a race between the Hare and Tortoise
 Program Author: Erik Argueta
 Variable Inputs: hare, tortoise
 Process Flow: randomly generates numbers to place the Hare and Tortoise; first one to reach 70 or pass the finishing line, wins.
 Variable Outputs: rabbitPosition, tortoisePosition
 */

#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <iomanip>
using namespace std;

void moveTortoise(int* const);
void moveHare(int* const);
void printCurrentPosition(const int* const, const int* const);

int main() {
	
	int counter{0};

	while (counter <= 1) {
		const int RACE_END = 70;
		int hare{0};
		int tortoise{0};
		int harePosition{0};
		int tortoisePosition{0};
		int tickMain{0};
		
		default_random_engine engine{static_cast<unsigned int>(time(0))};
		uniform_int_distribution<int> randomInt{1, 10};
		
		cout << "\n\nBANG !!!!!\nAND THEY'RE OFF !!!!!\n";
		
		for (int tick{0}; tick < RACE_END; ++tick) {
			++tickMain;
			
			int hareNumber = randomInt(engine);
			int tortoiseNumber = randomInt(engine);
			
			harePosition = hareNumber;
			tortoisePosition = tortoiseNumber;
			
			moveHare(&harePosition);
			moveTortoise(&tortoisePosition);
			
			hare += harePosition;
			tortoise += tortoisePosition;
			
			if (hare < 0) {
				hare *= -1;
			}
			if (tortoise < 0) {
				tortoise *= -1;
			}
			
			printCurrentPosition(&hare, &tortoise);
			
			if (tortoise == RACE_END && tortoise == RACE_END) {
				break;
			}
			else if (tortoise == RACE_END) {
				break;
			}
			else if (hare == RACE_END) {
				break;
			}
			
		}
		
		
		if (hare > tortoise) {
			cout <<  "Time elapsed: " << tickMain << " seconds" << endl;
			cout << "Hare winds. Yuch." << endl;
		}
		else if (tortoise > hare || hare == tortoise) {
			cout <<  "Time elapsed: " << tickMain << " seconds" << endl;
			cout << "TORTOISE WINS!!! YAY!!!" << endl;
		}
		
		counter++;
		
		if (counter <= 1) {
			cout << "Press Enter to race again.";
			cin.ignore();
		}
		else {
			break;
		}
	}
	
	
	return 0;
}

void moveTortoise(int* const positionPtr) {
	
	if (*positionPtr >= 1 && *positionPtr <= 5) {
		*positionPtr = 3;
	}
	else if (*positionPtr >= 6 && *positionPtr <= 7) {
		*positionPtr = -6;
	}
	else if (*positionPtr >= 8 && *positionPtr <= 10) {
		*positionPtr = 1;
	}
	
}

void moveHare(int* const positionPtr) {
	
	if (*positionPtr >= 1 && *positionPtr <= 2) {
		*positionPtr = 0;
	}
	else if (*positionPtr >= 3 && *positionPtr <= 4) {
		*positionPtr = 9;
	}
	else if (*positionPtr == 5) {
		*positionPtr = -12;
	}
	else if (*positionPtr >= 6 && *positionPtr <= 8) {
		*positionPtr = 1;
	}
	else if (*positionPtr >= 9 && *positionPtr <= 10) {
		*positionPtr = -2;
	}
	

}

void printCurrentPosition(const int* const hare, const int* const tortoise) {
	
	
	if (*tortoise > *hare){
		cout << setw(*hare) << "H" << setw(*tortoise - *hare) << "T" << endl;
	}
	else if (*hare > *tortoise) {
		cout << setw(*tortoise) << "T" << setw(*hare - *tortoise) << "H" << endl;
	}
	else if (*hare == *tortoise) {
		cout << setw(*hare) << "OUCH!!!" << endl;
	}
	
}
