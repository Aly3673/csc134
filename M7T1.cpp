/*
CSC 134, M7T1
Alyssa Y.
12/3/25
Restaurant Rating Program.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Declaring the class
class Restaurant { // Info about a restaurant
    public:
        void SetName(string restaurantName); // Sets the restaurant's name

        void SetRating(double userRating); // Setings the rating (1-5, with 5 best)

        void Print(); // Prints name and rating on one line
    private:
        string name;
        double rating;
};

// Define the class functions
void Restaurant::SetName(string restaurantName) {
    name = restaurantName;
}

// Sets the rating (1-5, with 5 best)
void Restaurant::SetRating(double userRating) {
    cout << setprecision(1) << fixed;
    rating = userRating;
}

// Print out a summary of the restaurant
void Restaurant::Print() {
    cout << name << ": " << rating << "/5 stars" << endl;
}

// Now use the class
int main() {

    cout << "==== Best Restaurants ====" << endl;
    Restaurant bestBreak;
    bestBreak.SetName("Waffle House");
    bestBreak.SetRating(4.0);
    bestBreak.Print();

    Restaurant bestLunch;
    bestLunch.SetName("McDonald's");
    bestLunch.SetRating(4.4);
    bestLunch.Print();

    Restaurant bestDinner;
    bestDinner.SetName("Miyabi Jr.");
    bestDinner.SetRating(4.3);
    bestDinner.Print();
    cout << "==========================" << endl;
}