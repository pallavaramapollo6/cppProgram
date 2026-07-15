// Topic: Array input
// Definition: Array input means storing user values inside array positions.
// Explanation: A loop helps fill each index one by one.

#include <iostream> // Required for input and output.
using namespace std; // Uses standard namespace.

int main() { // Program starts here.
    int marks[3]; // Creates array for 3 marks.

    for (int i = 0; i < 3; i++) { // Runs for each array index.
        cout << "Enter mark " << i + 1 << ": "; // Shows user-friendly number.
        cin >> marks[i]; // Stores value at index i.
    }

    cout << "Marks are: "; // Label for output.
    for (int i = 0; i < 3; i++) { // Reads each value.
        cout << marks[i] << " "; // Prints each mark.
    }

    return 0; // Ends the program.
}

