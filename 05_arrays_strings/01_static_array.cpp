// Topic: Static one-dimensional array
// Definition: An array stores multiple values of the same type in continuous memory.
// Explanation: A static array has a fixed size decided in the program.

#include <iostream> // Required for output.
using namespace std; // Uses standard namespace.

int main() { // Program starts here.
    int numbers[5] = {10, 20, 30, 40, 50}; // Creates and fills an array.
    int sum = 0; // Stores total.

    for (int i = 0; i < 5; i++) { // Visits each index from 0 to 4.
        cout << numbers[i] << " "; // Prints current element.
        sum += numbers[i]; // Adds current element to sum.
    }

    cout << "\nSum: " << sum << endl; // Prints total.
    return 0; // Ends the program.
}

