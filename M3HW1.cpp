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
    // questionOne();
    // questionTwo();
    // questionThree();
    questionFour();

    return 0;
}
    
void questionOne() {
    cout << "Question 1 - Chat Bot" << endl;
    cout << endl;
    cout << "Hello! Question, do you like waffles better or pancakes?" << endl;
    string waffles_pancakes;
    cin >> waffles_pancakes;


    
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
