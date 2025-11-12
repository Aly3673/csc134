/*
CSC 134, M5T2
Alyssa Y.
11/12/25

*/

#include <iostream>
using namespace std;

// Given 2 numbers, print them out nicely on a line.
void printResult(int number, int result) {
    cout << number << " squared = " << result << endl;
}

// Given a number, return the square of it.
int square(int number) {
    int result;
    
    return result;

}

int main() {
    // Count some numbers
    // And find a result for each
    int count = 1;
    int result;
    
    // This version will be squares.

    while (count <= 10) {
        result = square(count);
        printResult(count, result); // Gets calculations from above in void.
        count++;
    }
}