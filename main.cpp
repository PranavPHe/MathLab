

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Problem #1:\nJake wants to find out how many people in the school buy lunch from the cafeteria. He knows that the average will most likely be a decimal, but you can’t have a part of a person. Jake needs to round down to the nearest whole number." << endl;

    double avg;
    cout << "Enter the calculated average: ";
    cin >> avg;
    cout << floor(avg) << " people" << endl;

    cout << "\nProblem #2\nNate has a crate of 32 apples, a crate with 54 apples, and a crate with 512 apples. Find the average number of apples in each crate, rounded up to the nearest whole number." << endl;
    cout << ceil((32, 54, 512)/3) << " apples" << endl;

    cout << "\nProblem #3:\nStratton is trying to calculate the distance of an asteroid from earth, which can be modeled by the equation 12^x, where x is the number of hours. Help stratton calculate the distance(in meters) if it is 10 hours away." << endl; 
    int x = 10;
    cout << pow(12, x) << " meters away" <<endl;

    return 0;
}