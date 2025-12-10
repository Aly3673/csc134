/*
Note:
Using this space to build and test the puzzles for escape room puzzle two.
*/

// Option 1: Riddle

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Riddle {
    string question;
    string answer;
};

class RiddleGame {
    public:
        RiddleGame();
        void play();
    
    private:
    vector<Riddle> riddles;
    void loadRiddles();
    int getRandomRiddleIndex() const;
};

RiddleGame::RiddleGame() {
    loadRiddles();
    srand(static_cast<unsigned>(time(0)));
}

void RiddleGame::loadRiddles() {
    riddles.push_back({"I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?", "echo"});
}

int RiddleGame::getRandomRiddleIndex() const {
    return rand() % riddles.size();
}

void RiddleGame::play() {
    int riddleIndex = getRandomRiddleIndex();
    string userAnswer;

    cout << "Riddle: " << riddles[riddleIndex].question << endl;
    cout << "Your answer: ";
    getline(cin, userAnswer);

    if (userAnswer == riddles[riddleIndex].answer) {
        cout << "Correct! You've solved the riddle." << endl;
    }
    else {
        cout << "Incorrect. The answer was: " << riddles[riddleIndex].answer << endl;
    }
}

// Option 2: Morse Code

#include <iostream> //
#include <string> //
#include <map>  
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

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

    words = {"ESCAPE", "PUZZLE", "MORSE", "CIPHER"};
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

bool MorseCodeGame::checkAnswer(const string &userInput, const string &originalWorld) const {
    return userInput == originalWorld;
}

void MorseCodeGame::play() {
    string originalWord = getRandomWord();
    string morseWord = toMorse(originalWord);

    cout << "Morse Code: " << morseWord << endl;
    cout << "Decipher the Morse code to find the original word: ";

    string userInput;
    getline(cin, userInput);

    if (checkAnswer(userInput, originalWord)) {
        cout << "Congratulations! You've correctly deciphered the word: " << originalWord << endl;
    }
    else {
        cout << "Incorrect. The original word was: " << originalWord << endl;
    }
}

int main() {
    MorseCodeGame game;
    game.play();
    return 0;
}
