/*
Note:
Using this space to build and test the puzzles for escape room puzzle three.
*/

// Option 1: Word Scramble Puzzle.

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <random> // Include random header

using namespace std;

string scrambleWord(const string &word) {
    string scrambled = word;
    
    // Seed the random number generator
    random_device rd; 
    mt19937 g(rd()); 

    // Use std::shuffle instead of std::random_shuffle
    shuffle(scrambled.begin(), scrambled.end(), g);
    return scrambled;
}

/* int main() {
    vector<string> words = {"escape", "puzzle", "challenge", "room", "key"};
    
    // Seed for random selection from the vector
    srand(static_cast<unsigned int>(time(0)));
    
    string selectedWord = words[rand() % words.size()];
    string scrambled = scrambleWord(selectedWord);
    
    cout << "Unscramble the word: " << scrambled << endl;
    
    string guess;
    cin >> guess;
    
    if (guess == selectedWord) {
        cout << "Correct! You've solved the puzzle!" << endl;
    } else {
        cout << "Incorrect! Try again." << endl;
    }

    return 0;
} */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 1. Initial word provided by user
    // 2-4. Words from the first (agriculture-themed) list
    // 5-7. Words from the second (high-complexity) list

    cout << "═════════ Puzzle Three: Hybrid Scramble ══════════" << endl;
    
    vector<string> words = {
        "Chicken",
        "Farm",
        "Feather",
        "Poultry",
        "Rhythm",
        "Oxymoron",
        "Juxtaposition"
    };
    
    cout << "Total Words: " << words.size() << endl;

    // Example of how you might output the words for a puzzle:
    cout << "\n--- Scrambled/Morse Code List ---" << endl;
    for (const string& word : words) {
        // In a real puzzle, you would call a scramble() or morse_encode() function here
        cout << "* " << word << " (Length: " << word.length() << ")" << endl;
    }
    
    return 0;
}