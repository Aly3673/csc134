/*
CSC 134
M2HW1
A. Young
11/05/25
Coding Questions 1-4
*/

#include <iostream>
using namespace std;

// norrisa: we're using functions for each question

// put these before main, so program knows they're coming
void question1();
void question2(); 
void question3();
void question4();

int main() {
    // call the questions
    question1();
    question2();
    question3();
    question4();
    return 0;
}

void question1() {
    
    cout << "Question 1 - Banking Transcation" << endl;
    cout << " " << endl;
    
    // Variables.
    string name;
    double startingAmount;
    double depositAmount;
    double withdrawalAmount;
    double finalAmount;

    // Asking for name and account information.
    cout << "Welcome! Please enter your name: "; 
    cin >> name;
    cout << "Please enter your current account balance: $";
    cin >> startingAmount;
    cout << "Please enter the amount you wish to deposit: $";
    cin >> depositAmount;
    cout << "Please enter the amount you wish to withdrawal: $";
    cin >> withdrawalAmount;

    // Calculations.
    finalAmount = startingAmount + depositAmount - withdrawalAmount;

    // Results of calculations.
    cout << " " << endl;
    cout << "Hello, " << name << "!" << endl;
    cout << "Account Number: 84926183" << endl;
    cout << "Final Account Balance: $" << finalAmount << endl;
}

void question2() {
    
    cout << " " << endl;
    cout << "Question 2 - Adjusted Crate Charging Program" << endl;
    cout << " " << endl;
    
    // Set up the variables.
    double  length, width, height; // Size of crate
    double volume;
    double cost_to_make, charge_to_customer;
    double profit;

    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    // Get the crate info.
    cout << "Hello! Welcome to the crate program. Please input the following information below." << endl;
    cout << endl;
    cout << "Crate Length: ";
    cin >> length;
    cout << "Crate Width: ";
    cin >> width;
    cout << "Crate Height: ";
    cin >> height;

    // Calculate the cost and prices.
    volume = length * width * height;
    cost_to_make = volume * COST_PER_CUBIC_FOOT;
    charge_to_customer = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge_to_customer - cost_to_make;

    // Display the results.
    cout << endl;
    cout << "Your crate is " << volume << " cubic feet." << endl;
    cout << "Customer Price: $" << charge_to_customer << endl;
    cout << "Cost to Build: $" << cost_to_make << endl;
    cout << "Profit: $" << profit << endl; 
}

void question3() {
    
    cout << " " << endl;
    cout << "Question 3 - Pizza Party" << endl;
    cout << " " << endl;

    // Variables.
    int pizzasOrdered;
    int slicesperPizza;
    int visitors;
    int slicespervisitor = 3;
    int numberofSlicestotal;
    int slicesforVisitors;
    int leftoverSlices;

    // Asking for information.
    cout << "Welcome to the Papa's Pizzeria Leftover Pizza Calculator!" << endl;
    cout << " " << endl;
    cout << "How many pizzas have you ordered? ";
    cin >> pizzasOrdered;
    cout << "How many slices are in each pizza? ";
    cin >> slicesperPizza;
    cout << "How many visitors are coming to your party? ";
    cin >> visitors;

    // Calculations.
    numberofSlicestotal = pizzasOrdered * slicesperPizza;
    slicesforVisitors = visitors * slicespervisitor;
    leftoverSlices = numberofSlicestotal - slicesforVisitors;

    // Results of Calculations
    cout << " " << endl;
    cout << "With a total of " << numberofSlicestotal << " pizza slices and " << visitors << " visitors, you will have " << leftoverSlices << " leftover pizza slices at your party!" << endl;
}

void question4() {
    
    cout << " " << endl;
    cout << "Question 4 - Trojan Pride" << endl;
    cout << " " << endl;
    
    // Variables.
    string school = "FTCC";
    string team = "Trojans";
    string letsGo = "Let's go ";
    string cheerOne;
    string cheerTwo;

    // Framwork of message (Improved).
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Results.
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
}