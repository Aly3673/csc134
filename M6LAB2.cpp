/*
CSC 134, M6LAB2
Alyssa Y.
12/3/25
Vectors and Linked Lists.
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    CUBICLES = 0,
    CONFERENCE_ROOM = 1,
    BREAK_ROOM = 2,
    RESTROOM = 3,
    IT_ROOM = 4,
    NUM_ROOMS = 5
};

int main () {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Cubicles",
        "Conference Room",
        "Break Room",
        "Restroom",
        "IT Room"
    };

    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A room full of cubicles for workers to focus on their work. Feels like time goes by slowly here.",
        "A room for meetings to occur regarding information in the company. Always end up mysteriously sleepy here.",
        "A room with couches, two vending machines, a fridge, and a coffee maker. The best room here.",
        "A room with toliet stalls and three sinks. You heard one of your coworkers empty their guts here.",
        "A room full of servers and electronics owned by the company. This stuff is like black magic to you."
    };

    // Adjacency list using a 2D array
    // Connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];

    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    // Define the connections between rooms using the Room enum
    // Cubicle connections
    connections[CUBICLES][NORTH] = CONFERENCE_ROOM; // Cubicles -> North -> Library
    connections[CUBICLES][EAST] = BREAK_ROOM; // Cubicles -> East -> Break Room
    connections[CUBICLES][SOUTH] = -1; // No connection south
    connections[CUBICLES][WEST] = RESTROOM; // Cubicles -> West -> Restroom

    // Conference Room connections
    connections[CONFERENCE_ROOM][NORTH] = -1; // No connection north
    connections[CONFERENCE_ROOM][EAST] = -1; // No connection east
    connections[CONFERENCE_ROOM][SOUTH] = CUBICLES; // Conference Room -> South -> Cubicles
    connections[CONFERENCE_ROOM][WEST] = -1; // No connection west

    // Break Room connections
    connections[BREAK_ROOM][NORTH] = -1; // No connection north
    connections[BREAK_ROOM][EAST] = -1; // No connection east
    connections[BREAK_ROOM][SOUTH] = IT_ROOM; // Break Room -> South -> IT Room
    connections[BREAK_ROOM][WEST] = CUBICLES; // Break Room -> West -> Cubicles

    // Restroom connections
    connections[RESTROOM][NORTH] = -1; // No connection north
    connections[RESTROOM][EAST] = CUBICLES; // Restroom -> East -> Cubicles
    connections[RESTROOM][SOUTH] = -1; // No connection south
    connections[RESTROOM][WEST] = -1; // No connection west

    // IT Room connections
    connections[IT_ROOM][NORTH] = BREAK_ROOM; // IT Room -> North -> Break Room
    connections[IT_ROOM][EAST] = -1; // No connection east
    connections[IT_ROOM][SOUTH] = -1; // No connection south
    connections[IT_ROOM][WEST] = RESTROOM; // IT Room -> West -> Restroom

    // Game state
    int currentRoom = CUBICLES; // Start in the cubicles
    bool gameRunning = true;

    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;

        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;

        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;

        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}

/*
========= AI PROMPT: GPT-4o Mini =========
Prompt: Give me rooms that would be in an office setting
*Note: The cubicles idea was mine, but I took conference room, break room, restroom, and IT room.*
*/