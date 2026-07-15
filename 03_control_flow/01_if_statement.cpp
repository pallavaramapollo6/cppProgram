// Topic: if statement
// Definition: if runs a block only when the condition is true.
// Explanation: If the condition is false, the block is skipped.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 10; // Stores number.

    if (number > 0) { // Checks positive number.
        cout << "Positive number" << endl; // Runs because condition is true.
    }

    return 0; // Ends successfully.
}

