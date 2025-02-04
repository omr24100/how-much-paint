// how much paint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>  // for ceil() function

using namespace std;

int main() {
    // Constants
    const double COVERAGE_PER_GALLON = 340.0; // Square feet per gallon
    const int COATS = 2;  // Number of coats of paint

    // Declare variables for user input
    double height, length;

    // Prompt the user for the size of the fence
    cout << "Enter the height of the fence in feet: ";
    cin >> height;

    cout << "Enter the length of the fence in feet: ";
    cin >> length;

    // Calculate the total area to be painted (2 coats)
    double totalArea = height * length * COATS;

    // Calculate the number of gallons required (rounding up to the nearest whole gallon)
    double gallonsNeeded = totalArea / COVERAGE_PER_GALLON;

    // Round up to ensure we get enough paint
    gallonsNeeded = ceil(gallonsNeeded);

    // Display the result
    cout << "Gallons of paint needed: " << gallonsNeeded << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
