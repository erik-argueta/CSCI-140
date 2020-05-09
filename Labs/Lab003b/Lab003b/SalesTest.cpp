/*
 use a 2D array to solve the problem:
 Company has 4 salespeople (1 to 4) who sell 5 different products (1 to 5). Once a day, each salesperson passes in a slip for each different type of product sold. Each slip contains the following:
 A. The salesperson number
 B. The product number
 C. The total dollar value of that product sold that day
 
 Assume info from all slips for last month is available. Write a program that will read all this information for last month's sales (one salesperson's data at a time) and summarize the total sales by salesperson by product.
 All totals should be stored in the 2D "array sales"
 
 After processing the info for last month, print the results in tabular format with each of the columns repping a particular salesperson and each of the rows representing a particular product/ Cross total each row to get the total sales of each product for last month. Your tabular printout should include these cross totals to the right of the totaled rows and to the bottom of the totaled columns
 
 [OOP] You need to create a class "Sales". This class should contain the following methods and attributes. Be sure your project contains 3 files SalesTest.cpp, Sales.cpp, and Sales.h
 
 Methods:
	Constructor
	getTotalSales (Hint: Total of 8 sales by product by salesperson)
	displayTotalSale (Hint: See the table)
	anything else you need
 
 Attributes
	Salesperson_name
	Product_number
	Total_sales
 
 Test Cases
	Create 3 salesperson and 3 products that are handled by each person
	Create 8 sales per month for each month. You meed to prompt user for these 8 sales
	Please produce the a table as following:
 
 */

#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include "Sales.h"
using namespace std;

void printXAxis();

int main() {
	
	array<array<int, Sales::salesMade>, Sales::salesColumn> jerryProd1{
		{1, 2, 3, 4, 5, 6, 7, 8}
	};
	array<array<int, Sales::salesMade>, Sales::salesColumn> jerryProd2{
		{1, 2, 3, 4, 5, 6, 7, 8}
	};
	array<array<int, Sales::salesMade>, Sales::salesColumn> jerryProd3{
		{1, 2, 3, 4, 5, 6, 7, 8}
	};
	
	
	Sales person1 ("jerry", jerryProd1);
	Sales person2 ("jerry", jerryProd2);
	Sales person3 ("jerry", jerryProd3);

	person1.processSales();
	
	return 0;
}
