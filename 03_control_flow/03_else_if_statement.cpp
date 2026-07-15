// Topic: else-if statement
// Definition: else-if checks many conditions one by one.
// Explanation: Only the first true block will run.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 0; // Stores number.

    if (number > 0) { // Checks positive.
        cout << "Positive" << endl; // Runs for positive.
    } else if (number < 0) { // Checks negative.
        cout << "Negative" << endl; // Runs for negative.
    } else { // Runs when number is neither positive nor negative.
        cout << "Zero" << endl; // Prints zero.
    }

    return 0; // Ends successfully.
}

