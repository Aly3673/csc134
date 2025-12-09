/*
CSC 134, M7HW1/PROJECT
Alyssa Y.
12/9/25
Final Project - Break Out
*/

#include <iostream>
using namespace std;

// Main menu, all escape rooms, and the congrats menu.
void mainMenu();
void roomOne();
void roomTwo();
void roomThree();
void congratsMenu();

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
cout << "Hi" << endl;
}

void roomTwo() {
cout << "Hi" << endl;
}

void roomThree() {
cout << "Hi" << endl;
}

void congratsMenu() {
cout << "Hi" << endl;
}