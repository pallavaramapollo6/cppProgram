// Topic: Nested loops
// Definition: A nested loop is a loop written inside another loop.
// Explanation: The inner loop completes all its turns for each turn of the outer loop.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    for (int row = 1; row <= 3; row++) { // Controls rows.
        for (int col = 1; col <= 4; col++) { // Controls columns.
            cout << "* "; // Prints one star.
        }
        cout << endl; // Moves to next row.
    }

    return 0; // Ends successfully.
}

