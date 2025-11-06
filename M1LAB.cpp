/*
CSC 134, M1LAB
Alyssa Y.
11/6/25
Apple orchard.
*/

#include <iostream>
using namespace std;

int main() {
    string name = "Jane Smith";
    int apples = 255;
    double pricePerApple = 0.25;

    cout << "Welcome to " << name;
    cout << "'s apple farm!" << endl;

    cout << "We have " << apples << " apples for sale" << endl;

    cout << "Price is $" << pricePerApple << " each." << endl;

    // Now calculate total price.
    double totalPrice = (double) apples * pricePerApple;
    cout << "Total price is: $" << totalPrice << endl;

    return 0;
}