/*
CSC 134, M5LAB1
Alyssa Y.
11/24/25
Choose Your Own Adventure.
*/

#include <iostream>
using namespace std;

// Variables -- Function Choices.
void choice_House();
void choice_Tombstone();
void choice_Shed();

int main() {
    cout << R"(You've been running through the woods for hours, trying to escape the a serial killer that is detemined to get you.
You're exhausted and take a moment to catch your breath. Luckily for you, you came across three different structures to hide in.
You come across: )" << endl; // R for raw print; Prints every line as is until it ends.
    cout << endl;
    cout << "1. A House" << endl;
    cout << "2. A Tombstone" << endl;
    cout << "3. A Shed" << endl;
    cout << "Extra: 4. Quit" << endl;
    cout << endl;

    cout << "What do you choose to do?" << endl;
    cout << "Choice: ";
    int menu_playerChoice;

    while (menu_playerChoice != 1 || menu_playerChoice != 2 || menu_playerChoice != 3 || menu_playerChoice != 4) {
        cin >> menu_playerChoice;

        if (menu_playerChoice == 1) {
            cout << endl;
            cout << "You decide to hide in the house." << endl;
            choice_House();
        }
        else if (menu_playerChoice == 2) {
            cout << endl;
            cout << "You decide to hide behind the tombstone." << endl;
            choice_Tombstone();
        }
        else if (menu_playerChoice == 3) {
            cout << endl;
            cout << "You decide to hide in the shed." << endl;
            choice_Shed();
        }
        else if (menu_playerChoice == 4) {
            cout << endl;
            cout << "Goodbye!" << endl;
            return 0;
        }
        else {
            cin.clear();
            cout << "Input invalid. Please choose from options 1-4: ";
        }
    }
}

void choice_House() {
    cout << "Going into the house, you are greeted by three rooms. Which room do you hide in? " << endl;
    int house_playerChoice;
    cin >> house_playerChoice;

    
}

void choice_Tombstone() {
    cout << "Hey!" << endl;
}

void choice_Shed() {
    cout << "Howdy!" << endl;
}