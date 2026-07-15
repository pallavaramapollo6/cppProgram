// Topic: do-while loop
// Definition: A do-while loop runs at least once before checking the condition.
// Explanation: The condition is checked after the loop body.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int i = 1; // Counter starts from 1.

    do { // Body runs first.
        cout << i << " "; // Prints current value.
        i++; // Increases counter.
    } while (i <= 5); // Checks condition after body.

    return 0; // Ends successfully.
}

