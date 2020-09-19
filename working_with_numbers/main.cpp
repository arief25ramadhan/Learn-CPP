#include <iostream>
#include <cmath> // import math library

using namespace std;

int main()
{
    int wnum = 5;

    cout << 4 + wnum * 10 << endl;
    cout << 11 % wnum << endl;
    wnum += 80;
    cout << wnum << endl;

    // Will return only the integer
    cout << 10/3 << endl;

    // Will return the decimal answer
    cout << 10.0/3 << endl;
    cout << 10/3.0 << endl;


    // Use the CMATH library
    cout << pow(3, 5) << endl; // 3 to the 5th power
    cout << sqrt(36) << endl; // Square root of 36
    cout << round(4.3) << endl; // Round
    cout << ceil(4.1) << endl; // Round up
    cout << floor(4.1) << endl; // Round down
    cout << fmax(3,10) << endl; // Return the bigger number
    cout << fmin(3,10) << endl; // Return the smaller number




    return 0;
}
