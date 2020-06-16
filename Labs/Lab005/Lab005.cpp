/*
Program Description: Performs calculations.
Program Author: Erik Argueta
Variable Inputs: Real Number, Imaginary Number
Process Flow: Overloads private members in a function in order to access it and perform calculations.
Variable Outputs: x, y, z
*/
#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex x;
    Complex y;
    Complex z;

    cout << "Please enter a real number and an imaginary number as such: \"R.R, I.I\" \n";
    cin >> x;

    cout << "Please enter a real number and an imaginary number as such: \"R.R, I.I\" \n";
    cin >> y;

    cout << "Please enter a real number and an imaginary number as such: \"R.R, I.I\" \n";
    cin >> z;

    cout << "\n\nX: " << x << "\nY: " << y << "\nZ: " << z << "\n\n\n";

    x = y + z;
    cout << "\n\nx = y + z:\n" << x << " = " << y << " + " << z;

    x = y - z;
    cout << "\n\nx = y - z:\n" << x << " = " << y << " - " << z;

    x = y * z;
    cout << "\n\nx = y * z:\n" << x << " = " << y << " * " << z;

    x = y / z;
    cout << "\n\nx = y / z:\n" << x << " = " << y << " / " << z;

    if (y == z) {
        cout << "\n\n" << y << " and " << z << " are the same.";
    }

    if (y != z) {
        cout << "\n\n" << y << " and " << z << " are not the same.";
    }

    cout << "\n\n";

    return 0;
}