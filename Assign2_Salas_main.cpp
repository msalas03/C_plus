/***************************************************************
CSCI 240 Program 2 Fall 2022
Programmer: Matthew Salas
Section: 1
Date Due: NA
Purpose: Create a progream to calculate some statistics for a baseball player
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Inputs by user
    float bats = 405; // Integer value for the number of at bats taken
    float hits = 89; // Integer value for the total number of hits
    int doubles = 25;  // Integer value for the number of doubles that have been hit
    int triples = 0;  // Integer value for the number of triples that have been hit
    int homeRuns = 22; // Integer value for the number of home runs hit
    
    // Calculations
    float numberOfSingles = hits - doubles - triples - homeRuns; // Calculating the number of singles
    float totalNumberOfBases = numberOfSingles + (doubles * 2) + (triples * 3) + (homeRuns * 4); // Calculating the number of bases
    float battingAverage = (hits/bats); // Calculating the batting average
    float slugglingPercentage = (totalNumberOfBases/bats); // Calculating the slugging percentage
    
    // Output
    cout << "Enter the number of at bats: " << bats << endl;
    cout << "Enter the number of hits: " << hits << endl;
    cout << "Enter the number of doubles: " << doubles << endl;
    cout << "Enter the number of triples: " << triples << endl;
    cout << "Enter the number of home runs: " << homeRuns << endl;
    
    cout << "\nSingles:    " << numberOfSingles << "    "; // 4 spaces after using " "
    cout << "Doubles:    " << doubles << "    ";
    cout << "Triples:    " << triples << "    ";
    cout << "Home Runs:    " << homeRuns << endl;
    
    cout << "\nTotal Bases: " << setw(19) << totalNumberOfBases << endl; // setw() indicates the total spacing units
    cout << fixed << setprecision(3) << "\nBatting Average: " << setw(15) << battingAverage << endl; // setprecision() is used for the amount of significant figures
    cout << fixed << setprecision(3) << "\nSlugging Percentage: " << setw(11) << slugglingPercentage << endl; // fixed() is used to set the floatfield format flag for the specified str stream
   
    return 0;
}
