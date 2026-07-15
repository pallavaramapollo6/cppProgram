// Topic: Two-dimensional array
// Definition: A 2D array stores data in rows and columns.
// Explanation: It is useful for tables and matrices.

#include <iostream> // Required for output.
using namespace std; // Uses standard namespace.

int main() { // Program starts here.
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Creates 2 rows and 3 columns.

    for (int row = 0; row < 2; row++) { // Moves through rows.
        for (int col = 0; col < 3; col++) { // Moves through columns.
            cout << matrix[row][col] << " "; // Prints one element.
        }
        cout << endl; // Moves to next line after one row.
    }

    return 0; // Ends the program.
}

