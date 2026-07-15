// Topic: goto statement
// Definition: goto jumps directly to a labeled statement.
// Explanation: It exists in C++, but beginners should use loops in most real programs.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int count = 1; // Starts counter.

start: // Label where goto can jump.
    cout << count << " "; // Prints count.
    count++; // Increases count.

    if (count <= 3) { // Checks if more printing is needed.
        goto start; // Jumps back to label.
    }

    return 0; // Ends successfully.
}

