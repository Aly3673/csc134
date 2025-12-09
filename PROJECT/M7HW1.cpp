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
using namespace std;

// Main menu, all escape rooms, and the congrats menu.
void mainMenu();
void roomOne();
void roomTwo();
void roomThree();
void congratsMenu();

const int TIME_LIMIT = 300;
const int minuteConversion = 60;
int timerMinutes = TIME_LIMIT / minuteConversion;
bool timerRunning = false;

void startTimer() {
    auto start = chrono::high_resolution_clock::now(); // Start timer.
    while (timerRunning) {
        auto now = chrono::high_resolution_clock::now(); // Get current time.
        chrono::duration<double> elapsed = now - start; // Calculate elapsed time.

        if (elapsed.count() >= TIME_LIMIT) { // Check if time limit exceeded.
            cout << "Time's up! Game Over!" << endl; // Send game over.
            exit(0); // Exit the game.
        }

        // Displaying remaining time for urgency.
        cout << "Time remaining: " << TIME_LIMIT - static_cast<int>(elapsed.count()) << " seconds\r";
        this_thread::sleep_for(chrono::milliseconds(100)); // Update every 100 ms.
    }
}

int main() {
// Laying out the setup of the game.

// The main menu.
mainMenu();
cout << endl;

// All 3 escape rooms.
roomOne();
cout << endl;
roomTwo();
cout << endl;
roomThree();
cout << endl;

// Completion of the game.
congratsMenu();

}

void mainMenu() {
cout << "╔════════════════════════════════════════╗" << endl;
cout << "║               BREAK OUT!               ║" << endl;
cout << "║    Break out of three escape rooms!    ║" << endl;
cout << "║           You have " << timerMinutes << " minutes           ║" << endl;
cout << "╚════════════════════════════════════════╝" << endl;
cout << "1. Start game\n2. Quit" << endl;
cout << "Please type in an option: ";
int playerChoice;

    while (playerChoice != 1, 2) {
        cin >> playerChoice;

        switch (playerChoice) {
            case 1: {
                roomOne();
                break;
            }
            
            case 2: {
                cout << "Thanks for playing!" << endl;
                exit(0);
                break;
            }

            default: {
                cout << "Invalid option. Please try again: ";
                break;
            }
        }
    }
}

void roomOne() {
timerRunning = true;
thread timerThread(startTimer);

cout << "Room 1" << endl;
int playerChoice1;
cin >> playerChoice1;

}

void roomTwo() {
cout << "Room 2" << endl;
}

void roomThree() {
cout << "Room 3" << endl;
}

void congratsMenu() {
cout << "Congrats!" << endl;

timerRunning = false;
timerThread.join();
}