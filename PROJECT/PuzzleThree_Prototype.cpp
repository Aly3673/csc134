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

int main() {
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
}