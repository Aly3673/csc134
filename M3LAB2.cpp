/*
CSC 134, M3LAB2
Alyssa Y.
11/7/25
Number Grade to Letter Grade.
*/

#include <iostream>
using namespace std;

int main() {
    // Variables.
    int grade;

    // Input information. 
    cout << "Please enter your numerical grade: ";
    cin >> grade;

    // Calculations.
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A.";
    }
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B.";
    }
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C.";
    }
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D.";
    }
    else {
        cout << "Your letter grade is: F.";
    }
    return 0;
}