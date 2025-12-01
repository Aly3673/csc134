/*
CSC 134, M6LAB1
Alyssa Y.
12/1/25
Buckshot Roulette.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;

vector<char> superSoaker;

// Player scores
int playerScore = 3;
int opponentScore = 3;

// Game state
string currentPlayer = "Player";
bool gameOver = false;

// FUNCTION PROTOTYPES
void setupGame();
void loadSuperSoaker(int waterCount, int slimeCount);
void shuffleSuperSoaker();
void displayGameState();
void displaySuperSoaker(bool showContents);
char fireShot();
void playerTurn();
void opponentTurn();
void checkGameOver();

// MAIN GAME LOOP

int main() {
    srand(time(0)); // Seed random number generator

    cout << "╔════════════════════════════════════════╗" << endl;
    cout << "║     SLIME ROULETTE: SUPER SOAKER       ║" << endl;
    cout << "║    The Work-Safe Dare-Ya Roulette      ║" << endl;
    cout << "╚════════════════════════════════════════╝" << endl;
    cout << "\nRules:" << endl;
    cout << "🔵 Blue cartridges = Harmless water (you get another turn!)" << endl;
    cout << "🟢 Green cartridges = Slime (you lose a point!)" << endl;
    cout << "First to 0 points loses!\n" << endl;
    cout << endl;

    setupGame();

    // Main game loop
    while (!gameOver) {
        if (currentPlayer == "Player") {
            playerTurn();
        }
        else {
            opponentTurn();
        }

        checkGameOver();

        // If super soaker is empty, reload for next round
        if (superSoaker.empty() && !gameOver) {
            cout << "\n💦 Super soaker is empty! Reloading for next round..." << endl;
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
            setupGame();
        }
    }

    // Game over.
    cout << "\n╔════════════════════════════════════════╗" << endl;
    cout << "║            GAME OVER!                  ║" << endl;
    cout << "╚════════════════════════════════════════╝" << endl;

    if (playerScore <= 0) {
        cout << "💚 You got slimed! Opponent wins!" << endl;
    }
    else {
        cout << "🎉 You win! Opponent got slimed!" << endl;
    }

    return 0;
}

// GAME SETUP FUNCTIONS

void setupGame() {
    // Clear any existing cartridges
    superSoaker.clear(); // Empty the vector

    // Load the super soaker with random cartridges
    int waterCount = 1 + rand() % 3; // 1-3 water cartridges
    int slimeCount = 1 + rand() % 2; // 1-2 slime cartridges

    loadSuperSoaker(waterCount, slimeCount);
    shuffleSuperSoaker();

    cout << "\n🔫 Super soaker loaded!" << endl;
    displaySuperSoaker(false); // Show counts but not order
}

void loadSuperSoaker(int waterCount, int slimeCount) {
    // Add water cartridges
    for (int i = 0; i < waterCount; i++) {
        superSoaker.push_back('W');
    }

    // Add slime cartridges
    for (int i = 0; i < slimeCount; i++) {
        superSoaker.push_back('S');
    }
}

void shuffleSuperSoaker() {
    // Shuffle the cartridges so players don't know the order
    random_shuffle(superSoaker.begin(), superSoaker.end());
}

// DISPLAY FUNCTIONS

void displayGameState() {
    cout << "\n┌─────────────────────────────────────┐" << endl;
    cout << "│  Player: " << playerScore << " points   Opponent: " << opponentScore << " points  │" << endl;
    cout << "└─────────────────────────────────────┘" << endl;
}

void displaySuperSoaker(bool showContents) {
    int waterCount = 0;
    int slimeCount = 0;

    // Count each type using a range-based for loop
    for (char cartridge : superSoaker) {
        if (cartridge == 'W') waterCount++;
        else slimeCount++;
    }

    cout << "Super Soaker contants: ";
    cout << "🔵 " << waterCount << " water, ";
    cout << "🟢 " << slimeCount << " slime";
    cout << " (" << superSoaker.size() << " total)" << endl;

    // For debugging/demonstration - show actual order
    if (showContents) {
        cout << "Actual order: ";
        for (char cartridge : superSoaker) {
            cout << (cartridge == 'W' ? "🔵" : "🟢") << " ";
        }
        cout << endl;
    }
}

// CORE GAME MECHANICS

