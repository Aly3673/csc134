/*
CSC 134, M2BONUS
Alyssa Y.
11/24/25
M2 Bonus Problems
*/

#include <iostream>
using namespace std;

// Variables -- All Problems
void problemOne();
void problemTwo();
void problemThree();
void problemFour();

int main() {
    cout << "M2BONUS: QUESTIONS 1-4" << endl;
    cout << endl;
    problemOne();
    cout << endl;
    problemTwo();
    cout << endl;
    problemThree();
    cout << endl;
    problemFour();
}

void problemOne() {
    cout << "PROBLEM 1: RECTANGLE AREA" << endl;
    cout << endl;
    
    // Variables.
    int height = 8;
    int width = 10;
    int rectangleArea;
    
    // Calculations.
    rectangleArea = height * width;
    cout << "A rectangle with the height of 8 and a width of 10 is " << rectangleArea << "!" << endl;
}

void problemTwo() {
    cout << "PROBLEM 2: SALES TAX" << endl;
    cout << endl;

    // Variables.
    double productPrice = 99.99;
    double salesTax = 0.08;
    double finalSalestax;
    double finalPrice;

    // Calculations.
    finalSalestax = (productPrice * salesTax);
    finalPrice = (productPrice + finalSalestax);
    cout << "Product:\t$" << productPrice << endl;
    cout << "Sales Tax:\t$" << finalSalestax << endl;
    cout << "------------------------" << endl;
    cout << "Total:\t\t$" << finalPrice << endl;
}

void problemThree() {

}

void problemFour() {

}