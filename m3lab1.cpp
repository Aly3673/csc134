/*
CSC 134, M3LAB1
Alyssa Y.
10/1/25
The Robbery Game Program
*/

#include <iostream>
using namespace std;

// Variables
void hallway();
void livingroom();
void basement();
void diningroom();
void bedroom();
void kitchen();

int main() {
// Set up game enviroment
    cout << "=========================== The Robbery Game ===========================" << endl;
    hallway();

    cout << "Game Over" << endl;
    return 0;
}

void hallway()
{
    cout << "You break into a house that you've been keeping an eye on for weeks now." << endl;
    cout << "You heard that this house holds a safe with $500,000 in it." << endl;
    cout << "You only have enough time to explore one room." << endl;
    cout << "Which room do you choose to navigate into?" << endl;
    cout << " " << endl;
    cout << "1 - Living Room" << endl;
    cout << "2 - Dining Room" << endl;
    cout << "3 - Kitchen" << endl;
    cout << "4 - Bedroom" << endl;
    cout << "5 - Basement" << endl;

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        cout << "You go into the Living Room." << endl;
        livingroom();
    }
    if (choice == 2)
    {
        cout << "You go into the Dining Room." << endl;
        diningroom();
    }
    if (choice == 3)
    {
        cout << "You go into the Kitchen." << endl;
        kitchen();
    }
    if (choice == 4)
    {
        cout << "You go into the Bedroom." << endl;
        bedroom();
    }
    if (choice == 5)
    {
        cout << "You go into the Basement." << endl;
        basement();
    }
    else
    {
        cout << "That is not a room." << endl;
    }
}

void livingroom()
{
    cout << "You don't find a safe, but you come across" << endl;
}