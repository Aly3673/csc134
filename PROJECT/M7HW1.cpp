/*
CSC 134, M7HW1/PROJECT
Alyssa Y.
12/9/25
Final Project - Break Out
*/

#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <limits>
using namespace std;

// Main menu, all escape rooms, and the congrats menu.
void mainMenu();
void puzzleOne();
void puzzleTwo();
void puzzleThree();
void congratsMenu();

const int TIME_LIMIT = 300;
const int MESSAGE_INTERVAL = 60;
bool timerRunning = false;
thread timerThread;

void startTimer() {
    auto start = chrono::high_resolution_clock::now(); // Start timer.
    while (timerRunning) {
        auto now = chrono::high_resolution_clock::now(); // Get current time.
        chrono::duration<double> elapsed = now - start; // Calculate elapsed time.

        if (elapsed.count() >= TIME_LIMIT) { // Check if time limit exceeded.
            cout << "\nTime's up! Game Over!" << endl; // Send game over.
            exit(0); // Exit the game.
        }

        if (static_cast<int>(elapsed.count()) % MESSAGE_INTERVAL == 0 && static_cast<int>(elapsed.count()) != 0) {
            cout << "\n*** You have " << TIME_LIMIT - static_cast<int>(elapsed.count()) << " seconds left! ***" << endl;
            this_thread::sleep_for(chrono::seconds(60));
        }
        else {
            this_thread::sleep_for(chrono::milliseconds(100)); // Update every 100 ms.
        }
    }
}

// Laying out the setup of the game.
int main() {

mainMenu();

puzzleOne();
cout << endl;
puzzleTwo();
cout << endl;
puzzleThree();
cout << endl;

congratsMenu();
return 0;

}

// Main menu of the escape room.
void mainMenu() {
cout << "╔════════════════════════════════════════╗" << endl;
cout << "║              ESCAPE ROOM!              ║" << endl;
cout << "║   Break out by doing three puzzles!    ║" << endl;
cout << "║          You have " << TIME_LIMIT << " seconds          ║" << endl;
cout << "╚════════════════════════════════════════╝" << endl;
cout << "1. Start game\n2. Quit" << endl;
cout << "Please type in an option: ";
int playerChoice;

    while (playerChoice != 1, 2) {
        cin >> playerChoice;

        switch (playerChoice) {
            case 1: {
                puzzleOne();
                break;
            }
            
            case 2: {
                cout << "Thanks for playing!" << endl;
                exit(0);
                break;
            }

            default: {
                if (cin.fail()) {
                    cout << "Invalid option. Please try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                
            }
        }
    }
}

// The first puzzle of the game.
void puzzleOne() {
cout << endl;
timerRunning = true;
timerThread = thread(startTimer);

cout << "═════════ Puzzle One: Guess The Number ═════════" << endl;
srand(static_cast<unsigned>(time(0)));
int guessNumber = rand() % 150 + 1; // Guessing a number from 1 to 150.
int userGuess;
const int maxAttempts = 10; // Max attempts to guess.

cout << "Guess the number (1 - 150): ";

for (int attempt = 1; attempt <= maxAttempts; ++attempt) {
        cin >> userGuess;
        int leftoverAttempts;
        leftoverAttempts = maxAttempts - attempt;

        if (userGuess == guessNumber) {
            cout << "Congrats! You passed the first puzzle!" << endl;
            cout << endl;
            puzzleTwo();
        }
        else if (userGuess < guessNumber && leftoverAttempts != 0) {
            cout << "That's too low! Try again.\nYou have " << leftoverAttempts << " guess(es) left: ";
        }
        else if (userGuess > guessNumber && leftoverAttempts != 0) {
            cout << "That's too high! Try again.\nYou have " << leftoverAttempts << " guess(es) left: ";
        }
    }
    cout << endl;
    cout << "Game Over! The number was " << guessNumber << ", thanks for playing!" << endl;
    timerRunning = false;
    timerThread.join();
    exit(0);
}

void puzzleTwo() {
cout << "Room 2" << endl;
int userInput;
cin >> userInput;
if (userInput == 1) {
        puzzleThree();
    }
}

void puzzleThree() {
cout << "Room 3" << endl;
int userInput;
cin >> userInput;
if (userInput == 1) {
        congratsMenu();
    }
}

void congratsMenu() {
timerRunning = false;
timerThread.join();

cout << "╔════════════════════════════════════════╗" << endl;
cout << "║         🎉 CONGRATULATIONS! 🎉         ║" << endl;
cout << "║              You escaped!              ║" << endl;
cout << "║         Thank you for playing!         ║" << endl;
cout << "╚════════════════════════════════════════╝" << endl;

exit(0);
}