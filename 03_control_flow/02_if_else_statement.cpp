// Topic: if-else statement
// Definition: if-else chooses between two blocks.
// Explanation: if runs for true, else runs for false.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = -5; // Stores number.

    if (number >= 0) { // Checks non-negative number.
        cout << "Positive or zero" << endl; // Runs when condition is true.
    } else { // Runs when condition is false.
        cout << "Negative number" << endl; // Prints negative.
    }

    return 0; // Ends successfully.
}

