// Topic: Math library
// Definition: The math library provides ready-made mathematical functions.
// Explanation: <cmath> gives functions like sqrt(), round(), pow(), and log().

#include <cmath> // Gives math functions.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    cout << "Square root: " << sqrt(64) << endl; // Finds square root.
    cout << "Power: " << pow(2, 3) << endl; // Finds 2 raised to 3.
    cout << "Round: " << round(2.6) << endl; // Rounds decimal.
    cout << "Log: " << log(2) << endl; // Finds natural log.
    return 0; // Ends successfully.
}

