/*
CSC 134, M6T1
Alyssa Y.
12/1/25
Basic Arrays.
*/

#include <iostream>
#include <iomanip> // for the decimal place thing
using namespace std;

void partOne();
void partTwo();

int main() {
    cout << "========= M6T1: Basic Arrays =========" << endl;
    partOne();
    partTwo();
    return 0;
}

void partOne() {
    // Part One: No Arrays.
    cout << "========= Part One =========" << endl;
    cout << endl;

    cout << "Please put in the amount of cars on each day." << endl;
    cout << "Day 1 = Monday\nDay 2 = Tuesday\nDay 3 = Wednesday\nDay 4 = Thursday\nDay 5 = Friday" << endl; // \n puts string in a new line.
    const int totalDays = 6;
    const int totalAmountDays = 5;
    int day = 1;
    int carsToday = 0;
    int carsTotal = 0;
    double carAverage = 0;
    cout << endl;

    while (day < totalDays) {
        cout << "Day " << day << ": ";
        cin >> carsToday;
        carsTotal += carsToday; // "+=": Add AND assignment operator. Adds right operand to the left operand and assign the result to the left operand.
        day++;
    }

    cout << endl;
    cout << "Total amount of cars = " << carsTotal << endl;
    carAverage = (double) carsTotal / totalAmountDays;
    // DN: "The decimal place thing" 
    cout << setprecision(2) << fixed; // sets to 2 decimals
    cout << "Average = " << carAverage << endl;
}

void partTwo() {
    // Part Two: Arrays.
    cout << endl;
    cout << "========= Part Two =========" << endl;
    cout << endl; 

    const int totalDays2 = 5;
    const int totalAmountDays2 = 5;
    string days2[totalDays2] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri."};
    int carsToday2[totalDays2];
    int carsTotal2 = 0;
    double carsAverage2 = 0.0;

    for (int i = 0; i < totalDays2; i++) {
        cout << "# of cars on " << days2[i] << ": ";
        cin >> carsToday2[i];
    }

    cout << endl;
    cout << "Day\tCars" << endl;
    for (int i = 0; i < totalDays2; i++) {
        cout << days2[i] << "\t" << carsToday2[i] << endl;
        carsTotal2 += carsToday2[i];
    }

    cout << endl;
    carsAverage2 = (double) carsTotal2 / totalDays2;
    cout << "Total = " << carsTotal2 << endl;
    cout << setprecision(2) << fixed;
    cout << "Average = " << carsAverage2 << endl;
}