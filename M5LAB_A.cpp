/*
CSC 134, M5LAB_A
Alyssa Y.
11/12/25
Loop Fundamentals.
*/

#include <iostream>
using namespace std;

void exercise1_healthRegen();
void exercise2_levelUpStats();
void exercise3_inventorySystem();

int main() {
    int choice;

    cout << "=============================================" << endl;
    cout << "           LAB 7: LOOP FUNDAMENTALS          " << endl;
    cout << "=============================================" << endl;
    cout << "1. Exercise 1: Health Regeneration" << endl;
    cout << "2. Exercise 2: Level up Stats" << endl;
    cout << "3. Exercise 3: Inventory System" << endl;
    cout << "4. Run All Exercises" << endl;
    cout << "5. Exit" << endl;
    cout << "=============================================" << endl;
    cout << "Choice: ";
    cin >> choice;
    
    // Replaces all if-else statements. Cleaner and easier to read.
    switch(choice) {
        case 1:
             exercise1_healthRegen();
            break;
        case 2:
            exercise2_levelUpStats();
            break;
        case 3:
            exercise3_inventorySystem();
            break;
        case 4:
            exercise1_healthRegen();
            cout << endl;
            exercise2_levelUpStats();
            cout << endl;
            exercise3_inventorySystem();
            break;
        case 5:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
return 0;
}

void exercise1_healthRegen() {
    cout << "====== EXERCISE 1: HEALTH REGENERATION ======" << endl;

    int health = 30;
    int maxHealth = 100;

    cout << "Starting health: " << health << "/" << maxHealth << endl;
    cout << "Resting to recover health..." << endl << endl;

    while (health < maxHealth) {
        cout << "[Health: " << health << "]" << endl;
        health = health + 10;
    }
    cout << endl;
    cout << "Fully recovered!" << endl;
}

void exercise2_levelUpStats() {
    cout << "Test 2." << endl;
}

void exercise3_inventorySystem() {
    cout << "Test 3." << endl;
}