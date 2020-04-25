// Fig. 6.12: fig06

#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
using namespace std;

int main() {
	// use the default random-number generation engine to produce
	// uniformly distributes pseudorandom int values from 1 to 6
	default_random_engine engine( static_cast<unsigned int>(time(0)));
	uniform_int_distribution<unsigned int> randomInt(1, 6);
	
	// loop 10 times
	for (unsigned int counter = 1; counter <= 10; ++counter) {
		// pick random number from 1 to 6 and output it
		cout << setw(10) << randomInt(engine);
		
		// if counter is divisible by 5, start a new line of output
		if (counter % 5 == 0) {
			cout << endl;
		} // end if
	} // end for
	
	return 0;
} // end main
