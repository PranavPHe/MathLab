// Pranav Pramod
// Math Functions Lab
// 12/3/2024

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Printing first problem
    cout << "Problem #1:\nJake wants to find out how many people in the school buy lunch from the cafeteria. He knows that the average will most likely be a decimal, but you can’t have a part of a person. Jake needs to round down to the nearest whole number." << endl;

    double avg;
    // Get input
    cout << "Enter the calculated average: ";
    cin >> avg;
    // Calculate rounded down and print
    cout << floor(avg) << " people" << endl;

    // Print 2nd problem
    cout << "\nProblem #2\nNate has a crate of 32 apples, a crate with 54 apples, and a crate with 512 apples. Find the average number of apples in each crate, rounded up to the nearest whole number." << endl;
   // Calculate rounded up and print after calculating average
    cout << ceil((32, 54, 512)/3) << " apples" << endl;

    // Print 3rd problem
    cout << "\nProblem #3:\nStratton is trying to calculate the distance of an asteroid from earth, which can be modeled by the equation 12^x, where x is the number of hours. Help stratton calculate the distance(in meters) if it is 10 hours away." << endl; 
    int x = 10;
    // Calcuilate 12 to the power of the x(10) and print.
    cout << pow(12, x) << " meters away" <<endl;

    return 0;
}
