/*
program description: find the sales and total sale of 8 products by each sale person.
Date:5/09/2020
Input variables: products, saleprice
process: use oop to contruct code.
output variables: total_sales, sale1,sale2,sale3,sale4,sale5,sale6,sale7,sale8
*/
#include <iostream>
#include <iomanip>
#include <array>
#include "Sales.h"
using namespace std;

int main()
{

    Sales saleperson1{ "Johnny"};
    Sales saleperson2{ "Robert"};
    Sales saleperson3{ "Linda" };
   

    saleperson1.displaySalesReport();
    cout << saleperson1.getname() << endl;
    saleperson1.displaysalePrice();
    cout << endl;
    cout << saleperson2.getname() << endl;
    saleperson2.displaysalePrice();
    cout << endl;
    cout << saleperson3.getname() << endl;
    saleperson3.displaysalePrice();


    system("pause");
    return 0;
}
