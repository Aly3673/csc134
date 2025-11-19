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
                cout << "Goodbye!" << endl;
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
    // THIS QUESTION DOES NOT HAVE INPUT VALIDATION.
    cout << "============ BLOCK VOLUME ===========" << endl;
    cout << endl;

    // Framework, input, and variables.
    cout << "Welcome to the Block Volume Calculator!" << endl;
    
    double width;
    double length;
    double height;
    double volume;

    cout << "Please enter the width: ";
    cin >> width;
    while (width <= 0) {
        cin.clear();
        cout << "You cannot input a value less than or equal to zero. Please enter the width: ";
        cin >> width;
    }

    cout << "Please enter the length: ";
    cin >> length;
    while (length <= 0) {
        cin.clear();
        cout << "You cannot input a value less than or equal to zero. Please enter the length: ";
        cin >> length;
    }

    cout << "Please enter the height: ";
    cin >> height;
    while (height <= 0) {
        cin.clear();
        cout << "You cannot input a value less than or equal to zero. Please enter the height: ";
        cin >> height;
    }
    cout << endl;

    // Calculations.
    volume = width * length * height;
    cout << "The volume of the block is " << volume << "." << endl;
}

void questionThree() {
    cout << "============ ROMAN NUMERAL ==========" << endl;
    cout << endl;

    // Framework, input, and variable.
    cout << "Please enter a number from 1 to 10: ";
    int regularNumber = 0; 

    // Switch and validation.
    while (regularNumber <= 0 || regularNumber > 10) {
        cin >> regularNumber;
        
        switch (regularNumber) {
            case 1: {
                cout << "The Roman numeral of " << regularNumber << " is I." << endl;
                break;
            }
            case 2: {
                cout << "The Roman numeral of " << regularNumber << " is II." << endl;
                break;
            }
            case 3: {
                cout << "The Roman numeral of " << regularNumber << " is III." << endl;
                break;
            }
            case 4: {
                cout << "The Roman numeral of " << regularNumber << " is IV." << endl;
                break;
            }
            case 5: {
                cout << "The Roman numeral of " << regularNumber << " is V." << endl;
                break;
            }
            case 6: {
                cout << "The Roman numeral of " << regularNumber << " is VI." << endl;
                break;
            }
            case 7: {
                cout << "The Roman numeral of " << regularNumber << " is VII." << endl;
                break;
            }
            case 8: {
                cout << "The Roman numeral of " << regularNumber << " is VIII." << endl;
                break;
            }
            case 9: {
                cout << "The Roman numeral of " << regularNumber << " is IX." << endl;
                break;
            }
            case 10: {
                cout << "The Roman numeral of " << regularNumber << " is X." << endl;
                break;
            }
            default: {
                cin.clear();
                cout << "Invalid input. Please enter a number from 1 to 10: ";
            }
        }
    }
}

void questionFour() {
    cout << "========= GEOMETRY CALCULATOR =======" << endl;
    cout << endl;

    // Menu. 
    cout << "Geometry Calculator" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << endl;
    cout << "Please enter an option from 1 to 4: ";
    
    int geometryMain = 0;
    while (geometryMain <= 0 || geometryMain > 4) {
        cin >> geometryMain;

        switch (geometryMain) {
            case 1: {
                cout << endl;
                cout << "Area of a Circle" << endl;
                cout << "------------------------------------" << endl;
                cout << "Please enter the radius of the circle: ";
                double radius;
                cin >> radius;

                while (radius < 0) {
                    cin.clear();
                    cout << "The radius cannot be less than zero. Please input a valid radius: ";
                    cin >> radius;
                }

                // Calculations for circle area.
                double circleArea;
                circleArea = 3.14159 * radius;
                cout << "The area of the circle is " << circleArea << "." << endl;
                break;
            }
            case 2: {
                cout << "Area of a Rectangle" << endl;
                cout << "------------------------------------" << endl;  
                cout << "Please enter the length: ";

                double rectangleLength;
                double rectangleWidth;

                cin >> rectangleLength;
                
                while (rectangleLength < 0) {
                    cin.clear();
                    cout << "Negative values are invalid. Please enter a valid length: ";
                    cin >> rectangleLength;
                }
                
                cout << "Please enter the width: ";
                cin >> rectangleWidth;

                while (rectangleWidth < 0) {
                    cin.clear();
                    cout << "Negative values are invalid. Please enter a valid width: ";
                    cin >> rectangleWidth;
                }

                // Calculations for area of rectangle.
                double rectangleArea;
                rectangleArea = rectangleLength * rectangleWidth;
                cout << "The area of the rectangle is " << rectangleArea << "." << endl;
                break;
            }
            case 3: {
                cout << "Area of a Triangle" << endl;
                cout << "------------------------------------" << endl;
                cout << "Please enter the base: ";

                double triangleBase;
                double triangleHeight;

                cin >> triangleBase;

                while (triangleBase < 0) {
                    cin.clear();
                    cout << "Negative values are invalid. Please enter a valid base: ";
                    cin >> triangleBase;
                }

                cout << "Please enter the height: ";
                cin >> triangleHeight;

                while (triangleHeight < 0) {
                    cin.clear();
                    cout << "Negative values are invalid. Please enter a valid height: ";
                    cin >> triangleHeight;
                }

                // Calculations.
                double triangleArea;
                triangleArea = triangleBase * triangleHeight * 0.5;
                cout << "The area of the triangle is " << triangleArea << "." << endl;
                break;
            }
            case 4: {
                main();
                break;
            }
            default: {
                cin.clear();
                cout << "Valid choices are 1 to 4. Please input a valid option: ";
            }
        }
    } 
}

void questionFive() {
    cout << "========= DISTANCE TRAVELED =========" << endl;
    cout << endl;

    // Variables, input, and input validation.
    cout << "Please enter the speed of the vehicle: ";
    int speed;
    cin >> speed;
    while (speed < 0) {
        cin.clear();
        cout << "Speed cannot be a negative number. Please enter the speed of the vehicle: ";
        cin >> speed;
    }
    
    cout << "How many hours has the vehicle traveled for? ";
    int finalTime;
    cin >> finalTime;
    while (finalTime < 1) {
        cin.clear();
        cout << "Time cannot be less than 1 hour. How many hours has the vehicle traveled for? ";
        cin >> finalTime;
    }

    cout << endl;
    cout << "Hour\t" << "Distance Traveled" << endl;
    cout << "-------------------------" << endl;

    // Calculations, loop, and output.
    for (int time = 1; time <= finalTime; time++) {
        int distance;
        distance = speed * time;
        cout << " " << time << "\t\t" << distance << endl;
    }
}
