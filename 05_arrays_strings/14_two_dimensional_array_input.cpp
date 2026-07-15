// Topic: Two-dimensional array input
// Definition: A 2D array input program stores values in rows and columns.
// Explanation: Nested loops are used because each row has many columns.

#include <iostream> // Gives cin and cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int matrix[2][2]; // Creates 2 rows and 2 columns.

    for (int row = 0; row < 2; row++) { // Moves through rows.
        for (int col = 0; col < 2; col++) { // Moves through columns.
            cout << "Enter value: "; // Asks for value.
            cin >> matrix[row][col]; // Stores value at row and column.
        }
    }

    cout << "Matrix:" << endl; // Label.
    for (int row = 0; row < 2; row++) { // Moves through rows.
        for (int col = 0; col < 2; col++) { // Moves through columns.
            cout << matrix[row][col] << " "; // Prints one value.
        }
        cout << endl; // New line after each row.
    }

    return 0; // Ends successfully.
}

