// Topic: Nested if
// Definition: An if statement inside another if statement is called nested if.
// Explanation: It is used when one decision depends on another decision.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 8; // Stores number.

    if (number > 0) { // First condition.
        if (number % 2 == 0) { // Inner condition.
            cout << "Positive even number" << endl; // Runs when both are true.
        }
    }

    return 0; // Ends successfully.
}

