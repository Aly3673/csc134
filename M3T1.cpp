/*
CSC 134, M3T1
Alyssa Y.
11/6/25
Areas of two rectangles.
*/

#include <iostream>
using namespace std;

int main() {
    // Declare our variables.
    int widthOne, lengthOne;
    int areaOne;
    int widthTwo, lengthTwo;
    int areaTwo;

    // Ask for user input.
    cout << "Please enter the width and height of the first\n";
    cout << "rectangle, separated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;
    cout << "Please enter the width and height of the second\n";
    cout << "rectangle, separated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    // Calculate answer.
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;
    
    // Display results.
    cout << "Rectangle one has an area of " << areaOne << endl;
    cout << "Rectangle two has an area of " << areaTwo << endl;
    return 0;
}
