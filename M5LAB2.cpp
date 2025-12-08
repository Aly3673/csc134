/*
CSC 134, M5LAB2
Alyssa Y.
12/7/25
Complete a Program.
*/

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length, width, area; // The rectangle's length, width, and area  
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    cout << "Please enter the length of the rectangle: ";
    double length;
    cin >> length;
    cout << endl;
    return length;
}

double getWidth() {
    cout << "Please enter the width of the rectangle: ";
    double width;
    cin >> width;
    cout << endl;
    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "Info Displayed:" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}