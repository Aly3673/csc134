/*
CSC 134, M7T1
Alyssa Y.
12/3/25
Restaurant Rating Program.
*/

#include <iostream>
using namespace std;

// Declaring the class
class Restaurant { // Info about a restaurant
    public:
        void SetName(string restaurantName); // Sets the restaurant's name

        void SetRating(int userRating); // Setings the rating (1-5, with 5 best)

        void Print(); // Prints name and rating on one line
    private:
        string name;
        int rating;
};

// Define the class functions
void Restaurant::SetName(string restaurantName) {
    name = restaurantName;
    // cout << "Set the name to " << restaurantName << endl;
}

// Sets the rating (1-5, with 5 best)
void Restaurant::SetRating(int userRating) {
    rating = userRating;
}

// Print out a summary of the restaurant
void Restaurant::Print() {
    cout << name << " ---- " << rating << " stars" << endl;
}

// Now use the class
int main() {
    Restaurant faveRest;
    faveRest.SetName("Mi Casita");
    faveRest.SetRating(5);
    faveRest.Print();

    Restaurant backupRest;
    backupRest.SetName("Tace Bell");
    backupRest.SetRating(3);
    backupRest.Print();
}