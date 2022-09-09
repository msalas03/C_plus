/***************************************************************
CSCI 240 Program 1 Fall 2022
Programmer: Matthew Salas
Section: 1
Date Due: NA
Purpose: This program calculates a restaurant bill with a 15% tip
 and 8.25% tax rate.
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double cost = 100; // cost of food and drink (can change) 
    double tax = 0.0825 * cost; // 8.25% tax on the meal
    double tip = (tax + cost) * 0.15;  // tip is 15% after adding the tax
    double total = cost + tax + tip;  // total bill cost
    
    cout << "Bill Calculator \n" ;
    cout << "The total cost for the food and drink: $" << cost << endl;
    cout << "The tip amount: $" << tip << endl;
    cout << "The tax amount: $" << tax << endl;
    cout << "The total due: $" << total << endl << endl;
    system("pause");
    
    return 0;
}
