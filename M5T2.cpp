/*
CSC 134, M5T2
Alyssa Y.
11/12/25

*/

#include <iostream>
using namespace std;

int main() {
    // Count some numbers
    // And find a result for each
    int count = 0;
    int result;

    while (count < 12) {
        // What is 100 times the count?
        result = 10 * count;
        cout << count << " " << result << endl;
        count++;
    }
}