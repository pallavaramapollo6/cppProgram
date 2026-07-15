// Topic: continue statement
// Definition: continue skips the current loop step.
// Explanation: The loop moves to the next iteration.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    for (int i = 1; i <= 5; i++) { // Loop from 1 to 5.
        if (i == 3) { // Checks value to skip.
            continue; // Skips printing 3.
        }
        cout << i << " "; // Prints all except 3.
    }

    return 0; // Ends successfully.
}

