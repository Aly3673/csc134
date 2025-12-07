/*
CSC 134, M6HW1
Alyssa Y.
12/7/25
Project Prototype
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void mainGame();
void Actions();
void Movements();

enum Direction {
    FORWARD = 0,
    LEFT = 1,
    RIGHT = 2,
    BACKWARD = 3,
    NUM_DIRECTIONS = 4
};

const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "Forward", "Left", "Right", "Back"
};

enum Room {
    Room_One = 0,
    Room_Two = 1,
    Room_Three = 3,
    Room_Four = 4,
    NUM_ROOMS = 5
};

int main() {
    cout << "╔═════════════════════════╗" << endl;
    cout << "║    Escape Room: Gold    ║" << endl;
    cout << "╚═════════════════════════╝" << endl;
    cout << endl;
    cout << "Options:\n1. Start Game\n2. Quit" << endl;
    cout << "Please choose an option: ";
    int gameMenuoption;

    while (gameMenuoption != 1 && gameMenuoption != 2) {
        cin >> gameMenuoption;
        if (gameMenuoption == 1) {
            mainGame();
            break;
        }
        else if (gameMenuoption == 2) {
            cout << "Goodbye!" << endl;
            return 0;
        }
        else {
            cout << "Invalid input. Please choose a valid option: ";
        }
    }
}

void mainGame() {
    string roomNames[NUM_ROOMS] = {
        "Room One",
        "Room Two",
        "Room Three",
        "Room Four"
    };

    string roomDescriptions[NUM_ROOMS] = {
        "Room One Description",
        "Room Two Description",
        "Room Three Description",
        "Room Four Description"
    };

    int connections[NUM_ROOMS][NUM_DIRECTIONS];

    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    int currentRoom = Room_One;
    bool gameRunning = true;

    while (gameRunning) {
        cout << "\nYou are in the" << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;

        cout << "Available options:\n1. Actions\n2. Movement" << endl;
        cout << "Choose what you would like to do: ";
        int mainGameoption;

        while (mainGameoption != 1 && mainGameoption != 2) {
            cin >> mainGameoption;
            switch(mainGameoption) {
                case 1:
                    Actions();
                    break;
                case 2:
                    Movements();
                    break;
                default:
                    cout << "Invalid option. Please choose a valid option: ";
            }
        }
    }
}

void Actions() {
    cout << "Action" << endl;
}

void Movements() {
    cout << "Movement" << endl;
}