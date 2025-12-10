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

int main() {
// Laying out the setup of the game.

// The main menu.
mainMenu();

roomOne();
cout << endl;
roomTwo();
cout << endl;
roomThree();
cout << endl;

congratsMenu();
return 0;
}

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
cout << endl;
timerRunning = true;
timerThread = thread(startTimer);

cout << "Room 1" << endl;
cout << "Test puzzle" << endl;
int playerChoice1;
cin >> playerChoice1;

    if (playerChoice1 == 1) {
        roomTwo();
    } else {
        cout << "Invalid input. Please try again: " << endl;
        roomOne();
    }
}

void roomTwo() {
cout << "Room 2" << endl;
roomThree();
}

void roomThree() {
cout << "Room 3" << endl;
}

void congratsMenu() {
cout << "Congrats!" << endl;
timerRunning = false;
timerThread.join();
}