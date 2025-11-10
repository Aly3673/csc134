/*
CSC 134, M3LAB1
Alyssa Y.
10/1/25
The Robbery Game Program.
*/

#include <iostream>
using namespace std;

// Variables.
void hallway();
void livingroom();
void basement();
void diningroom();
void bedroom();
void kitchen();
void gameOver();

int main() {
// Game title.
    cout << "=========================== The Robbery Game ===========================" << endl;
    hallway();

    return 0;
}

// Start of the game at the hallway.
void hallway() {
    cout << endl;
    cout << "You break into a house that you've been keeping an eye on for weeks now." << endl;
    cout << "You heard that this house holds a safe with $500,000 in it." << endl;
    cout << "You only have enough time to explore one room." << endl;
    cout << "Which room do you choose to navigate into?" << endl;

    cout << endl;
    cout << "1 - Living Room" << endl;
    cout << "2 - Dining Room" << endl;
    cout << "3 - Kitchen" << endl;
    cout << "4 - Bedroom" << endl;
    cout << "5 - Basement" << endl;
    cout << endl;

    int choice;
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        cout << "You go into the Living Room." << endl;
        livingroom();
    }
    else if (choice == 2) {
        cout << "You go into the Dining Room." << endl;
        diningroom();
    }
    else if (choice == 3) {
        cout << "You go into the Kitchen." << endl;
        kitchen();
    }
    else if (choice == 4) {
        cout << "You go into the Bedroom." << endl;
        bedroom();
    }
    else if (choice == 5) {
        cout << "You go into the Basement." << endl;
        basement();
    }
    else {
        cout << "You took too long and the owners came back home. You were caught and arrested." << endl;
        gameOver();
    }
}

void livingroom() {
    cout << "You don't find a safe, but your eyes come across a fairly-nice TV." << endl;
    cout << "Take the TV? (Yes or No)" << endl;
    cout << endl;

    string choice1;
    cin >> choice1;

    if (choice1 == "Yes") {
        cout << endl;
        cout << "You decide to take the TV and scram." << endl;
        cout << "Once you got home, you decided to check the price of the TV online and realize it is only $250." << endl;
        cout << "That was not worth it." << endl;
        gameOver();
    }
    else if (choice1 == "No") {
        cout << endl;
        cout << "You decide to not take the TV and just scram." << endl;
        cout << "You left empty-handed." << endl;
        gameOver();
    }
    else {
        cout << endl;
        cout << "You took too long and the owners came back home. You were caught and arrested." << endl;
        gameOver();
    }
}

void diningroom() {
    cout << endl;
    cout << "You couldn't find anything of value in this room and left empty-handed." << endl;
    gameOver();
}

void kitchen() {
    cout << "You didn't find the safe here, but your stomach growls and you decide to raid the fridge." << endl;
    cout << "You open the fridge door and see what's inside. What do you get?" << endl;
    cout << endl;

    cout << "1 - Apple" << endl;
    cout << "2 - Ham sandwich" << endl;
    cout << "3 - Pizza slice" << endl;
    cout << "4 - Can of sardines" << endl;
    cout << "5 - Chocolate milk" << endl;
    cout << endl;

    int choice2;
    cin >> choice2;
    cout << endl;

    if (choice2 == 1) {
        cout << endl;
        cout << "You decided to get the apple." << endl;
        cout << "You enjoy the delicious, sweet piece of fruit." << endl;
        cout << "You are satifisied and scram home." << endl;
        gameOver();
    }
    else if (choice2 == 2) {
        cout << endl;
        cout << "You decided to get the ham sandwich." << endl;
        cout << "You take a bite into the sandwich, which you just now noticed is molding." << endl;
        cout << "You die." << endl;
        gameOver();
    }
    else if (choice2 == 3) {
        cout << endl;
        cout << "You decided to get the pizza slice." << endl;
        cout << "You put the slice into the microwave." << endl;
        cout << "Afterwards, you eat the slice." << endl;
        cout << "You are satifisied and scram home." << endl;
        gameOver();
    }
    else if (choice2 == 4) {
        cout << endl;
        cout << "You decided to get the can of sardines." << endl;
        cout << "Why anybody would like sardines? I don't know, but you chose it." << endl;
        cout << "You eat the sardines." << endl;
        cout << "You are satifised and scram home." << endl;
        cout << "Weirdo." << endl;
        gameOver();
    }
    else if (choice2 == 5) {
        cout << endl;
        cout << "You decided to get the box of chocolate milk." << endl;
        cout << "Slipping on the chocolate milk makes you very happy." << endl;
        cout << "You are satifised and skip home." << endl;
        gameOver();
    }
    else {
        cout << endl;
        cout << "You took too long and the owners came back home. You were caught and arrested." << endl;
        gameOver();
    }
}

void bedroom() {
    cout << endl;
}

void basement() {
    cout << "You don't see a safe, but you come across two doors. Which door do you choose to enter into?" << endl;
    cout << endl;
    cout << "1 - Door One" << endl;
    cout << "2 - Door Two" << endl;
    cout << endl;

    int choice2;
    cin >> choice2;

    if (choice2 == 1) {
        cout << endl;
        cout << "You found the safe! You pick up the safe and hurry back home." << endl;
        cout << "Congratulations! You got $500,000!" << endl;
    }
    else if (choice2 == 2) {
        cout << endl;
        cout << "After lots of searching in the room, you don't find the safe here. You hear the owners enter the house." << endl;
        gameOver();
    }
    else {
        cout << endl;
        cout << "You took too long and the owners came back home. You were caught and arrested." << endl;
        gameOver();
    }

}

void gameOver() {
    cout << endl;
    cout << "Game Over" << endl;
}