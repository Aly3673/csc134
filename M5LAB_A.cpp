// Copy and pasting what I have so far from github 

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
    cout << "======== EXERCISE 2: LEVEL UP STATS ========" << endl;

    // All variables.
    int strength;
    int dexterity;
    int intelligence;
    int strengthLevel;
    int dexterityLevel;
    int intelligenceLevel;

    // Framework.
    for (strengthLevel = 1, dexterityLevel = 1, intelligenceLevel = 1; strengthLevel <= 20, dexterityLevel <= 30, intelligenceLevel <= 10; strengthLevel++, dexterityLevel++, intelligenceLevel++) {
        // Formulas.
        strength = 10 + (strengthLevel * 2);
        dexterity = 8 + (dexterityLevel * 3);
        intelligence = 12 + (intelligenceLevel * 1);

        // Output.
        cout << "___________________________________________" << endl;
        cout << "Strength Stats:\t\t" << strength << "\tLevel:\t" << strengthLevel <<  endl;
        cout << "Dexterity Stats:\t" << dexterity << "\tLevel:\t" << dexterityLevel << endl;
        cout << "Intelligence Stats:\t" << intelligence << "\tLevel:\t" << intelligenceLevel << endl;
        cout << "___________________________________________" << endl;
    }
}

void exercise3_inventorySystem() {
    cout << "======= EXERCISE 3: INVENTORY SYSTEM =======" << endl;

    int i;
    int n;
    string items[5] = {"Sword", "Money", "Torch", "Meat", "Shield"};

    // Making displayed list
    for (int i = 0, n = 1; i < 5, n <= 5; i++, n++) {
        cout << n << ". " << items[i] << endl;
        cout << endl;
    }  

    bool found = false;
    cout << "Item Search: ";
    string playerSelect;
    cin >> playerSelect;

    while (found == false) {
        if (playerSelect == items[i]) {
            found = true;
            cout << "Found: " << playerSelect << " at slot " << n << endl;
        }
        cin.clear();
        cout << "Not there" << endl;
        cin >> playerSelect;
    }
    
        // checking the list for the item
        /* bool found = false; // did we find it?
        cout << "Item Search: "; 
        string playerSelect;
        cin >> playerSelect;

        if (playerSelect == items[i]) {
                found = true; // Remarks found to true to show that we found the item.
        }

        while (found == false) {
            cin.clear();
            cout << "Item not found. Please try again: ";
            cin >> playerSelect;
                if (playerSelect == items[i]) {
                    found = true;
                } 
        }   
        cout << "Found: " << playerSelect << " at slot " << n << endl; */
 }