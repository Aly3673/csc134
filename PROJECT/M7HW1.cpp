/*
CSC 134, M7HW1/PROJECT
Alyssa Y.
12/9/25
Final Project - Break Out
*/

#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <limits>
#include <map>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>
using namespace std;

// Main menu, all escape rooms, and the congrats menu.
void mainMenu();
void puzzleOne();
void puzzleTwo();
void puzzleThree();
void congratsMenu();

// Setting up the timer.
const int TIME_LIMIT = 300;
const int MESSAGE_INTERVAL = 60;
bool timerRunning = false;
thread timerThread;

void startTimer() {
    auto start = chrono::high_resolution_clock::now(); // Start timer.
    while (timerRunning) {
        auto now = chrono::high_resolution_clock::now(); // Get current time.
        chrono::duration<double> elapsed = now - start; // Calculate elapsed time.

        if (elapsed.count() >= TIME_LIMIT) { // Check if time limit exceeded.
            cout << endl;
            cout << "\nTime's up! Game Over!" << endl; // Send game over.
            timerRunning = false;
            timerThread.join();
            exit(0); // Exit the game.
        }

        if (static_cast<int>(elapsed.count()) % MESSAGE_INTERVAL == 0 && static_cast<int>(elapsed.count()) != 0) { // Setting up time message.
            cout << endl;
            cout << "\n*** You have " << TIME_LIMIT - static_cast<int>(elapsed.count()) << " seconds left! ***" << endl;
            this_thread::sleep_for(chrono::seconds(60));
        }
        else {
            this_thread::sleep_for(chrono::milliseconds(100)); // Update every 100 ms.
        }
    }
}

// Setting up needed information for morse code puzzle.
class MorseCodeGame {
    public: 
        MorseCodeGame();
        void play();
    
    private:
        map<char, string> morseCodeMap;
        vector<string> words;
        string getRandomWord();
        string toMorse(const string &word) const;
        bool checkAnswer (const string &userInput, const string &originalWord) const;
};

MorseCodeGame::MorseCodeGame() {
    morseCodeMap = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
        {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
        {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
        {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
        {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
        {'8', "---.."}, {'9', "----."}
    };

    words = {"CHICKEN"};
    srand(static_cast<unsigned>(time(0)));
}

string MorseCodeGame::getRandomWord() {
    return words[rand() % words.size()];
}

string MorseCodeGame::toMorse(const std::string &word) const {
    string morse;
    for (char ch : word) {
        ch = toupper(ch);
        if (morseCodeMap.count(ch)) {
            morse += morseCodeMap.at(ch) + " ";
        }
    }
    return morse;
}

bool MorseCodeGame::checkAnswer(const string &userInput, const string &originalWord) const {
    return userInput == originalWord;
}

void MorseCodeGame::play() {
    string originalWord = getRandomWord();
    string morseWord = toMorse(originalWord);

    cout << "Morse Code: " << morseWord << endl;
    cout << "Decipher the Morse code message (all upper-case): ";

    string userInput;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Helps with clearing for next puzzles.
    getline(cin, userInput); // Gets all words with spaces.

    if (checkAnswer(userInput, originalWord)) {
        cout << "You guessed the right word! You passed the second puzzle!" << endl;
        cout << endl;
        puzzleThree();
    }
    else {
        cout << "Incorrect! The original word was: " << originalWord << ".\nGame over, thanks for playing!" << endl;
        timerRunning = false;
        timerThread.join();
        exit(0);
    }
}

// Setting up for scramble.
string scrambleWord(const string &word) {
    string scrambled = word;

    random_device rd;
    mt19937 g(rd());

    shuffle(scrambled.begin(), scrambled.end(), g);
    return scrambled;
}

// Laying out the setup of the game.
int main() {

    mainMenu();

    puzzleOne();
    cout << endl;
    puzzleTwo();
    cout << endl;
    puzzleThree();
    cout << endl;

    congratsMenu();
    return 0;

}

// Main menu of the escape room.
void mainMenu() {
    cout << "╔════════════════════════════════════════╗" << endl;
    cout << "║              ESCAPE ROOM!              ║" << endl;
    cout << "║   Break out by doing three puzzles!    ║" << endl;
    cout << "║          You have " << TIME_LIMIT << " seconds          ║" << endl;
    cout << "╚════════════════════════════════════════╝" << endl;
    cout << "1. Start game\n2. Quit" << endl;
    cout << "Please type in an option: ";
    int playerChoice;

        while (playerChoice != 1, 2) {
            cin >> playerChoice;

            switch (playerChoice) {
                case 1: {
                    puzzleOne();
                    break;
                }
                
                case 2: {
                    cout << "Thanks for playing!" << endl;
                    exit(0);
                    break;
                }

                default: {
                    if (cin.fail()) {
                        cout << "Invalid option. Please try again: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        break;
                    }
                    
                }
            }
        }
}

// The first puzzle of the game.
void puzzleOne() {
    cout << endl;
    timerRunning = true;
    timerThread = thread(startTimer);

    cout << "═════════ Puzzle One: Guess The Number ═════════" << endl;
    srand(static_cast<unsigned>(time(0)));
    int guessNumber = rand() % 150 + 1; // Guessing a number from 1 to 150.
    int userGuess;
    const int maxAttempts = 10; // Max attempts to guess.

    cout << "Guess the number (1 - 150): ";

    for (int attempt = 1; attempt <= maxAttempts; attempt++) {
            cin >> userGuess;
            int leftoverAttempts;
            leftoverAttempts = maxAttempts - attempt;

            if (userGuess == guessNumber) {
                cout << "That was the correct number! You passed the first puzzle!" << endl;
                cout << endl;
                puzzleTwo();
                return;
            }
            else if (userGuess < guessNumber && leftoverAttempts != 0) {
                cout << "That's too low! Try again.\nYou have " << leftoverAttempts << " guess(es) left: ";
            }
            else if (userGuess > guessNumber && leftoverAttempts != 0) {
                cout << "That's too high! Try again.\nYou have " << leftoverAttempts << " guess(es) left: ";
            }
        }
    cout << "Incorrect, The number was " << guessNumber << ".\nGame over, thanks for playing!" << endl;
    timerRunning = false;
    timerThread.join();
    exit(0);
}

void puzzleTwo() {
    cout << "═════════ Puzzle Two: Codebreaker ═════════" << endl;
    MorseCodeGame game;
    game.play();
}

void puzzleThree() {
    cout << "═════════ Puzzle Three: Scramble ══════════" << endl;
    vector<string> words = {"Juxtaposition", "Oxymoron", "Mythology", "Synchronize", "Climate", "Vacuum", "Abstract", "Fluorescence", "Queueing", "Festival", "Journey"};
    srand(static_cast<unsigned int>(time(0)));

    string selectedWord = words[rand() % words.size()];
    string scrambled = scrambleWord(selectedWord);

    cout << "Unscramble the word: " << scrambled << endl;

    const int maxGuesses = 3;
    
    string guess;

    for (int attemptedGuess = 1; attemptedGuess <= maxGuesses; attemptedGuess++) {
        cin >> guess;
        int leftoverGuesses;
        leftoverGuesses = maxGuesses - attemptedGuess;

        if (guess == selectedWord) {
            cout << "That was the correct word! You passed the third puzzle!" << endl;
            cout << endl;
            congratsMenu();
        }
        else if (guess != selectedWord && leftoverGuesses != 0) {
            cout << "Not the right word! Try again. You have " << leftoverGuesses << " guess(es) left: ";
        }
    }
    cout << "Incorrect, the word was " << selectedWord << ".\nGame over, thanks for playing!" << endl;
    timerRunning = false;
    timerThread.join();
    exit(0);
}

void congratsMenu() {
timerRunning = false;
timerThread.join();

cout << "╔════════════════════════════════════════╗" << endl;
cout << "║         🎉 CONGRATULATIONS! 🎉         ║" << endl;
cout << "║              You escaped!              ║" << endl;
cout << "║         Thank you for playing!         ║" << endl;
cout << "╚════════════════════════════════════════╝" << endl;

exit(0);
}