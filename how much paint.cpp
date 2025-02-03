// how much paint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double height = 6.0;
    double length = 100.0;
    double coveragePerGallon = 340.0;
    int numberofcoats = 2;

    double areapercoast = height * length;
    double totalarea = areapercoast * numberofcoats;

    double gallonsneeded = totalarea / coveragePerGallon;
    int roundedgallons = ceil(gallonsneeded);

    cout << "for" << numberofcoats << "coats of paint that is needed" << roundedgallons << " gallons of paint." << endl;

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
