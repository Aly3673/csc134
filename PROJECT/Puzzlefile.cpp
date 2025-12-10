/*
Note:
Using this space to build the puzzles for all escape rooms.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // Puzzle 1: Easy
    srand(static_cast<unsigned>(time(0)));
    int numberToGuess = rand() % 150 + 1; // Changed from 100 to 150.
    int userGuess;
    const int maxAttempts = 10;
    
    cout << "Guess the number: ";

    for (int attempt = 1; attempt <= maxAttempts; ++attempt) {
        cin >> userGuess;
        int leftoverAttempts; // My line I added in.
        leftoverAttempts = maxAttempts - attempt; // My line I added in.
        if (userGuess == numberToGuess) {
            cout << "Congrats! You win!" << endl;
            exit(0);
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again: ";
            cout << "You have " << leftoverAttempts << " guesses left!" << endl; // My line I added in.
        } else {
            cout << "Too high! Try again: ";
            cout << "You have " << leftoverAttempts << " guesses left!" << endl; // My line I added in.
        }
    }
    cout << "Sorry! The number was " << numberToGuess << "." << endl;

    // Puzzle 2: Medium
}