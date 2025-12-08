/*
CSC 134, M5LAB1
Alyssa Y.
11/24/25
Choose Your Own Adventure.
*/

#include <iostream>
using namespace std;

// Variables -- Function Choices.
void game_Start();
void choice_House();
void choice_Tombstone();
void choice_Shed();

int main() {
    cout << "==========================" << endl;
    cout << "       Killer Chase       " << endl;
    cout << "==========================" << endl;
    cout << endl;
    cout << "Options:\n1. Start Game\n2. Quit Program" << endl;
    cout << "Please choose an option: ";
    int gameMenuInput;

    while (gameMenuInput != 1 || gameMenuInput != 2) {
        cin >> gameMenuInput;

        if (gameMenuInput == 1) {
            game_Start();
            break;
        }
        else if (gameMenuInput == 2) {
            cout << endl;
            cout << "Goodbye!" << endl;
            return 0;
        }
        else {
            cout << "Invalid option. Please select a valid option: ";
        }
    }
}

void game_Start() {
    cout << endl;
    cout << "You've been running through the woods for hours, trying to escape the a serial killer that is detemined to get you.\nYou're exhausted and take a moment to catch your breath. Luckily for you, you came across three different structures to hide in.\nYou come across:" << endl;
    cout << endl;
    cout << "1. A Small House" << endl;
    cout << "2. A Tombstone" << endl;
    cout << "3. A Shed" << endl;
    cout << "(4. Quit Program)" << endl;
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
            exit(0); // Learned this neat feature today.
        }
        else {
            cin.clear();
            cout << "Input invalid. Please choose from options 1-4: ";
        }
    }
}

void choice_House() {
    cout << "Going into the house, you are greeted by three rooms.\n1. Pantry\n2. Bathroom\n3. Bedroom" << endl; 
    cout << "Which room do you hide in? ";
    int house_playerChoice;

    while (house_playerChoice != 1, house_playerChoice != 2, house_playerChoice != 3) {
        cin >> house_playerChoice;
        
    }
}

void choice_Tombstone() {
    cout << "Hey!" << endl;
}

void choice_Shed() {
    cout << "Howdy!" << endl;
}