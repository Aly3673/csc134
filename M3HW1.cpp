/*
CSC 134, M3HW1 - Gold
Alyssa Y.
11/7/25
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Variables.
    void questionOne();
    void questionTwo();
    void questionThree();
    void questionFour();

int main() {
    cout << "M3HW1: Gold, Questions 1-4" << endl;
    cout << endl;
    questionOne();
    questionTwo();
    questionThree();
    questionFour();

    return 0;
}
    
void questionOne() {
    cout << "Question 1 - Chat Bot" << endl;
    cout << endl;
    
    // Putting in the question.
    cout << "Hello! Question, do you prefer waffles or pancakes more? Please enter 'waffles' or 'pancakes'." << endl;
    string waffles_pancakes;
    cin >> waffles_pancakes;

    // If-else statements.
    if (waffles_pancakes == "waffles") {
        cout << "Awesome! I love waffles too!" << endl;
    }
    else if (waffles_pancakes == "pancakes") {
        cout << "That's cool! I like pancakes, but I prefer waffles." << endl;
    }
    else {
        cout << "That is not one of the options, are you paying attention?" << endl;
    }
}

void questionTwo() {
    cout << endl;
    cout << "Question 2 - Receipt Calculator" << endl;
    cout << endl;

        // Variables
    string item = "Meal";
    double meal_price;
    double tax_percent = 0.08; // 8/100 or 8%
    double tax_amount;         // How much tax in $
    double total_price;
    double tip_amount;
    int dine_takeout;
    double tip_percent = 0.15;

    // Asking for input.
    cout << "Please enter the price of your burger: $";
    cin >> meal_price;
    cout << "Please opt for dine in (enter 1) or takeaway (enter 2): ";
    cin >> dine_takeout;

    // Instructions for dining in or taking out.

    if (dine_takeout == 1) {
        cout << endl;
        cout << "Order up" << endl;
        cout << item << " (x1)";
        cout << "\t$" << meal_price << endl;

        tax_amount = meal_price * tax_percent; // Add sales tax
        tip_amount = meal_price * tip_percent; // Add tip
        total_price = meal_price + tax_amount + tip_amount; 

        // Printing Results
        cout << setprecision(2) << fixed; // Set 2 decimal places
        cout << "Tip:   \t\t$" << tip_amount << endl;
        cout << "Tax:   \t\t$" << tax_amount << endl;
        cout << "______________________" << endl;
        cout << "Total:\t\t$" << total_price << endl;
    }
    else if (dine_takeout == 2) {
        cout << "Order up" << endl;
        cout << item << " (x1)";
        cout << "\t$" << meal_price << endl;

        tax_amount = meal_price * tax_percent; // Add sales tax
        total_price = meal_price + tax_amount; 

        // Printing Results
        cout << setprecision(2) << fixed; // Set 2 decimal places
        cout << "Tax:   \t\t$" << tax_amount << endl;
        cout << "______________________" << endl;
        cout << "Total:\t\t$" << total_price << endl;
    }
    else {
        cout << "Error: Please ask an associate for help." << endl;
    }
}

void questionThree() {
    cout << endl;
    cout << "Question 3 - Cat Fight" << endl;
    cout << endl;

    // Setting up the premises.
    cout << "You are your average street cat." << endl;
    cout << "After many days of roaming the streets of the city you reside in, you come across a half-eaten fish near a bin in an alley way. ";
    cout << "However, you also notice the eyes of another cat looking over at that same fish. ";
    cout << "After you both look back and forth at each other and the fish, you already know what you must do.";
    cout << endl;

    // Fight begins.
    cout << "CAT FIGHT!" << endl;
    cout << endl;
    cout << "Available actions: Scratch or Bite" << endl;
    cout << "What do you do first? Type in your action: ";
    string user_cat;
    cin >> user_cat;
    
    // First if-else statement.
    if (user_cat == "scratch") {
        cout << endl;
        cout << "You decide to scratch your opponent." << endl;
        cout << "You scratch the other cat on one of their eyes, catching them off guard for a moment." << endl;
        cout << endl;
        cout << "Available actions: Scratch or Bite" << endl;
        cout << "What do you do this time? Type in your action: ";
        string user_cat2;
        cin >> user_cat2;

        // Second if-else statement.
        if (user_cat2 == "scratch") {
            cout << endl;
            cout << "You decide to scratch your opponent again." << endl;
            cout << "Unforunately, your opponent has learned and delivers a powerful bite to your neck." << endl;
            cout << "You manage to get them off, but you are in critical condition." << endl;
            cout << "You decide to run away to avoid getting injured even more." << endl;
            cout << "GAME OVER" << endl;
        }
        else if (user_cat2 == "bite") {
            cout << endl;
            cout << "You decide to bite your opponent this time." << endl;
            cout << "You deliver a bite to your unprepared opponent's neck, putting them in critical condition." << endl;
            cout << "Your opponent runs off into the distance, leaving you with the fish." << endl;
            cout << "Feeling victorious, you munch down on the fish." << endl;
            cout << "CONGRATULATIONS, YOU WIN!" << endl;
        }
        else {
            cout << endl;
            cout << "You were stuck, unable to make a decision. You decide to run away from the fight." << endl;
            cout << "Maybe you'll come across another fish." << endl;
            cout << "GAME OVER" << endl;
        }
    }
    else if (user_cat == "bite") {
        cout << endl;
        cout << "You decide to bite your opponent." << endl;
        cout << "Before you're able to bite them, your opponent strikes you in your eyes." << endl;
        cout << "You've been blinded by their scratch." << endl;
        cout << "You are no longer able to fight." << endl;
        cout << "GAME OVER" << endl;
    }
    else {
        cout << endl;
        cout << "You were stuck, unable to make a decision. You decide to run away from the fight." << endl;
        cout << "Maybe you'll come across another fish." << endl;
        cout << "GAME OVER" << endl;
    }
}

void questionFour() {
    cout << endl;
    cout << "Question 4 - Math Practice" << endl;
    cout << endl;

    srand(time(0));

    // Variables and setting up generator.
    for (int i = 1; i <= 1; i++)
    {
        // Generated numbers will go up to 100.
        int numberOne = rand() % 100 + 1;
        int numberTwo = rand() % 100 + 1;

        // Setting up the math problem.
        cout << "What is " << numberOne << " + " << numberTwo << "? ";
        int typed_answer;
        cin >> typed_answer;

        // Calculations 
        int correct_answer;
        correct_answer = numberOne + numberTwo;

        // Output the results.
        if (typed_answer == correct_answer) {
            cout << "Correct! Good job!" << endl;
        }
        else {
            cout << "Incorrect! Please try again." << endl;
        }
    }
}
