// Test2
/*
 sells 5 products
 product1: 2.98
 product2: 4.50
 product3: 9.98
 product4: 4.49
 product5: 6.87
 
 app that reads series of pairs as numbers
	product number
	quantity sold
 
 program use switch to determine retail price
 calculate and disp total retail balue of all products sold
 
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	float total{0};
	int product;
	int quantity;
	bool loopExit = false;
	string name;
	
	cout << "Hello! May I have your name? ";
	getline(cin, name);
	
	cout << "Welcome " << name << "!" << endl;
	
	cout << "Costs:\n";
	cout << "Product 1: $2.98" << endl;
	cout << "Product 2: $4.50" << endl;
	cout << "Product 3: $9.98" << endl;
	cout << "Product 4: $4.49" << endl;
	cout << "Product 5: $6.87" << endl << endl;
	
	
	
	cout << "Please enter the Product Number and the Quantity of the product purchased.\n";
	
	while (!loopExit) {
	cout << "Insert number pairs (Q to quit): ";
	cin >> product >> quantity;
	
	
		switch (product) {
			case 0:
				loopExit = true;
				break;
			case 1:
				total += quantity * 2.98;
				break;
			case 2:
				total += quantity * 4.50;
				break;
			case 3:
				total += quantity * 9.98;
				break;
			case 4:
				total += quantity * 4.49;
				break;
			case 5:
				total += quantity * 6.87;
				break;
		}
	}
	cout << "Your Total Cost is $" << total << endl;
	
	
	
	
	return 0;
}
