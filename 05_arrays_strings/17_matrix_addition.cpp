// Topic: Matrix addition
// Definition: Matrix addition adds matching elements of two matrices.
// Explanation: The element at row 0 column 0 is added with row 0 column 0.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int a[2][2] = {{1, 2}, {3, 4}}; // First matrix.
    int b[2][2] = {{5, 6}, {7, 8}}; // Second matrix.
    int sum[2][2]; // Stores result.

    for (int i = 0; i < 2; i++) { // Controls rows.
        for (int j = 0; j < 2; j++) { // Controls columns.
            sum[i][j] = a[i][j] + b[i][j]; // Adds matching elements.
            cout << sum[i][j] << " "; // Prints result element.
        }
        cout << endl; // Moves to next row.
    }

    return 0; // Ends successfully.
}

