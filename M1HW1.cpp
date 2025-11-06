/*
CSC 134, M1HW1
Alyssa Y.
11/6/25
Movie talk.
*/

#include <iostream>
using namespace std;

int main() {
    // Variables.
    string name = "The God Father";
    string year = "1972";
    double officeGross = 2.02;

    // Brief summary.
    cout << "The movie '" << name << "' was released in " << year << " and, according to screenrant.com, made a box office gross of $" << officeGross << " billion worldwide (adjusted for inflation)." << endl;

    // Extra information.
    cout << "From IMDB, on '" << name << "' page the description says 'The aging patriarch of an organized crime dynasty transfers control of his clandestine empire to his reluctant son.' ";
    cout << "'" << name << "' is very well liked, having a 9.2/10 star rating on IMDB. ";
    cout << "According to the review summary section of IMDB, '" << name << "' has been praised for its '...intricate narrative, deep character exploration, and universal themes of power, family, and loyalty.' ";
    cout << "One well known quote from '" << name << "' is 'behind every successful fortune there is a crime' by Don Vito Corleone." << endl;

    return 0;
}