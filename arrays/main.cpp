#include <iostream>

using namespace std;

int main()
{
    // The [] tells C++ that we want to create an array
    // You can also define the size, by declaring int luckyNums[5] = {1, 2, 3, 4, 5}
    int luckyNums[] = {4, 8, 15, 16, 23, 42};


    cout << "The array: " << luckyNums << endl;

    // Access individual element
    cout << "First element of the array: " << luckyNums[0] << endl;

    // Change first element
    luckyNums[0] = 5;
    // Access individual element
    cout << "Modified array: " << luckyNums << endl;



}
