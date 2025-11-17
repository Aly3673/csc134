/*
CSC 134, M5HW1
Alyssa Y.
11/17/25
Gold Level
*/

#include <iostream>
using namespace std;

// All questions.
void questionOne();
void questionTwo();
void questionThree();
void questionFour();
void questionFive();

int main() {
    // Main menu.
    cout << "============ M5HW1: GOLD ============" << endl;
    cout << "1. Question 1: AVERAGE RAINFALL" << endl;
    cout << "2. Question 2: BLOCK VOLUME" << endl;
    cout << "3. Question 3: ROMAN NUMERAL" << endl;
    cout << "4. Question 4: GEOMETRY CALCULATOR" << endl;
    cout << "5. Question 5: DISTANCE TRAVELED" << endl;
    cout << "6. Exit" << endl;
    cout << "=====================================" << endl;
    cout << endl;
    cout << "Please select an option (input 1-6): ";

    int userchoice = 0; // so the first time repeats
    while (userchoice < 1 || userchoice > 6) {
        cin >> userchoice;

        switch (userchoice) {
            case 1: {
                questionOne();
                break;
            }
            case 2: {
                questionTwo();
                break;
            }
            case 3: {
                questionThree();
                break;
            }
            case 4: {
                questionFour();
                break;
            }
            case 5: {
                questionFive();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                // Testing out this input validation found online.
                cin.clear();
                cout << "Invalid input. Please choose an option from 1-6: ";
                //cin >> userchoice;
                // go back to beginning
            }
        } // end switch
    } // end while
}

void questionOne() {
    cout << "========== AVERAGE RAINFALL =========" << endl;
    cout << endl;

    // Framework, input, and variables.
    cout << "Please enter the three months you wish to calculate and the amount of rain (in inches) that fell on those months." << endl;
    cout << endl;
    cout << "Please enter the first month: ";
    string firstMonth;
    cin >> firstMonth;
    cout << "Please enter the total amount of rainfall for " << firstMonth << ": ";
    double firstRainfall;
    cin >> firstRainfall;
    cout << "Please enter the second month: ";
    string secondMonth;
    cin >> secondMonth;
    cout << "Please enter the total amount of rainfall for " << secondMonth << ": ";
    double secondRainfall;
    cin >> secondRainfall;
    cout << "Please enter the third month: ";
    string thirdMonth;
    cin >> thirdMonth;
    cout << "Please enter the total amount of rainfall for " << thirdMonth << ": ";
    double thirdRainfall;
    cin >> thirdRainfall;
    cout << endl;

    // Calculations.
    double averageRainfall;
    averageRainfall = (firstRainfall + secondRainfall + thirdRainfall) / 3.0;

    // Output.
    cout << "The average amount of rainfall for " << firstMonth << ", " << secondMonth << ", and " << thirdMonth << " is " << averageRainfall << " inches." << endl;
}

void questionTwo() {
    cout << "============ BLOCK VOLUME ===========" << endl;
    cout << endl;

    
}

void questionThree() {
    cout << "Test 3." << endl;
}

void questionFour() {
    cout << "Test 4." << endl;
}

void questionFive() {
    cout << "Test 5." << endl;
}
