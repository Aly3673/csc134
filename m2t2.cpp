/*
CSC 134, M2T2
Alyssa Y.
9/15/25
Text Receipt Program.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Variables
    string item = "Burger";
    double menu_price = 5.99;
    double tax_percent = 0.08; // 8/100 or 8%
    double tax_amount;         // How much tax in $
    double total_price;

    // Receipt Program
    cout << "Order up" << endl;
    cout << item << " (x1)";
    cout << "\t$" << menu_price << endl;

    tax_amount = menu_price * tax_percent; // Add sales tax
    total_price = menu_price + tax_amount; 

    // Printing Results
    cout << setprecision(2) << fixed; // Set 2 decimal places
    cout << "Tax:   \t\t$" << tax_amount << endl;
    cout << "_____________________" << endl;
    cout << "Total:\t\t$" << total_price << endl;
    return 0;
}