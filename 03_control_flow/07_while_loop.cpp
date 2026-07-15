// Topic: while loop
// Definition: A while loop repeats while a condition is true.
// Explanation: It is useful when repetitions depend on a condition.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int i = 1; // Counter starts from 1.

    while (i <= 5) { // Runs while i is 5 or less.
        cout << i << " "; // Prints current value.
        i++; // Increases counter.
    }

    return 0; // Ends successfully.
}

