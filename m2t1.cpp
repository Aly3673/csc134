/*
CSC 134, M2T1
Alyssa Y.
9/3/25
Revision of "sales" program from M1, now with user input
*/

#include <iostream>
using namespace std;

int main() {
    // Declare our variables ("the truth")
    string item = "burger";
    double cost_per = 6.99;
    int amount = 50;
    // Variables for user input
    int amount_purchased;
    double total_cost;
    // Greet the user
    cout << "Hello! Welcome to our " << item << " shop!" << endl;
    // Ask for information
    cout << "Every " << item << " costs $" << cost_per << "." << endl;
    cout << "We have " << amount << " burgers available for sale." << endl;
    cout << endl;
    cout << "How many " << item << "s would you like to purchase today?" << endl;
    // cin: put information from the keyboard into a variable
    cin >> amount_purchased;
    // Do some processing
    total_cost = cost_per * amount_purchased; 
    // Output the answer
    cout << "You are buying " << amount_purchased << " " << item << "s." << endl;
    cout << "The total is: $" << total_cost << endl;
    cout << "Thank you for shopping, please come back again soon!" << endl;
    return 0;
}