// Topic: break statement
// Definition: break stops a loop immediately.
// Explanation: It is used when we want to exit early.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    for (int i = 1; i <= 5; i++) { // Loop from 1 to 5.
        if (i == 4) { // Checks stop point.
            break; // Stops the loop.
        }
        cout << i << " "; // Prints 1, 2, 3.
    }

    return 0; // Ends successfully.
}

