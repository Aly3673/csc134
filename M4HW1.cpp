/*
CSC 134, M4HW1
Alyssa Y.
11/9/25
Gold Level
*/

#include <iostream>
using namespace std;

void bronzeLevel();
void silverLevel();
void goldLevel();

int main() {
  cout << "M4HW1 - Gold" << endl;
  bronzeLevel();
  silverLevel();
  goldLevel();
}

void bronzeLevel() {
      // Bronze Level
    cout << "Bronze Level" << endl;
    cout << endl;
    
    // Variables.
    const int mini_num = 1;
    const int max_num = 12;
    int num = mini_num;
    int final_num;

    // Making loop and output.
    while (num <= max_num) {
        final_num = num * 5;
        cout << "5 times " << num << " is " << final_num << "." << endl;
        num++;
    }
}

void silverLevel() {
     // Silver Level
    cout << endl;
    cout << "Silver Level" << endl;
    cout << endl;

    // Variables.
    int user_input;
    int final_num2;
    const int mini_num2 = 1;
    const int max_num2 = 12;
    int num2 = mini_num2;

    // Asking for input.
    cout << "Please enter a number from 1 to 12: ";
    cin >> user_input;
    cout << endl;

    if (user_input >= 1 && user_input <= 12) {
        while (num2 <= max_num2) {
            final_num2 = user_input * num2;
            cout << user_input << " times " << num2 << " is " << final_num2 << "." << endl;
            num2++;
        }
    }
    else {
        cout << "Error. Please enter a number from 1 to 12." << endl;
    }
}

void goldLevel() {
    cout << endl;
    cout << "Gold Level" << endl;
    cout << endl;

       // Variables.
    int user_input;
    int final_num2;
    const int mini_num2 = 1;
    const int max_num2 = 12;
    int num2 = mini_num2;

    // Asking for input.
    cout << "Please enter a number from 1 to 12: ";
    cin >> user_input;
    cout << endl;

    // While loop for input validation.
    while (!(user_input >= 1 && user_input <= 12)) {
        cout << "Invalid." << endl;
        cout << "Please enter a number from 1 to 12: ";
        cin >> user_input;
        cout << endl;
    }
    if (user_input >= 1 && user_input <= 12) {
        while (num2 <= max_num2) {
            final_num2 = user_input * num2;
            cout << user_input << " times " << num2 << " is " << final_num2 << "." << endl;
            num2++;
        }
    }
}