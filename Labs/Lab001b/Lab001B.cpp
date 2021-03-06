/*
	Research several carpooling websites. 
	Create an application that calculates your daily driving cost, 
	so that you can estimate how much money could be saved by car pooling, 
	which also has other advantages such as reducing carbon emissions and 
	reducing traffic congestion. The application should input the following 
	information and display the user’s cost per day of driving to work: 

	A. Total miles driven per day: 140
	B. Cost per gallon of gasoline: $3.25
	C. Average miles per gallon: 35
	D. Parking fees per day: $10
	E. Tolls per day: $10

*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Greeting()
{
	string first;
	string last;
	string full;

	full = first + " " + last;

	cout << "Hello! What is your name?" << endl;
	cin >> first >> last;

	full = first + " " + last;

	cout << "Welcome " << full << "!" << endl << endl;
}


void questions (float &miles_per_day, float &gallon_cost, float &average_mile, float &parking_fees, float &tolls)
{
	float daily_cost;

	cout << "What is the total amount of miles driven per day? ";
	cin >> miles_per_day;

	cout << endl << "What is the total cost per gallon of gasoline? $";
	cin >> gallon_cost;

	cout << endl << "What is the total average miles per gallon? ";
	cin >> average_mile;

	cout << endl << "What is the cost of parking fees per day? $";
	cin >> parking_fees;

	cout << endl << "What is the cost of tolls per day? $";
	cin >> tolls;

	cout << endl << endl << "RESULTS:" << endl;
	cout << endl << "Total miles driven per day: " << miles_per_day << " miles" << endl;
	cout << endl << "Total cost per gallon of gasoline: $" << fixed << setprecision(2) << gallon_cost << endl;
	cout << endl << "Total average miles per gallon: $" << average_mile << " MPG" << endl;
	cout << endl << "Total cost of parking fees per day: $" << fixed << setprecision(2) << parking_fees << endl;
	cout << endl << "Total cost of tolls per day: $" << fixed << setprecision(2) << tolls << endl;

	cout << "---------------------------------------------------------------" << endl;

	daily_cost = (miles_per_day / average_mile) * gallon_cost + parking_fees + tolls;

	cout << "The total transportation cost per day is $" << fixed << setprecision(2) << daily_cost << endl << endl;
	
}


int main()
{
	float miles_per_day = 0;
	float gallon_cost = 0;
	float average_mile = 0;
	float parking_fees = 0;
	float tolls = 0;

	Greeting();

	questions(miles_per_day, gallon_cost, average_mile, parking_fees, tolls);


	system("pause");
    return 0;
}

