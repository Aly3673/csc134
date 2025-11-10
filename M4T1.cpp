/*
CSC 134, M4T1
Alyssa Y.
11/9/25
Loops.
*/

#include <iostream>
using namespace std;

int main() {
    // Program 5-3
    // Using a simple while loop
    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;
        //i = i + 1;
        i++; // Shorter version of the above line.
    }
    cout << "That's all!" << endl;

    // Program 5-6
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;
    // Print a table header
    // "\t" is useful for formatting (tab)
    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {
        // We start at 1 and stop at 10.
        cout << num << "\t" << num * num << endl;
        // If we don't increase num, it will run forever.
        num++;
    }
}