// Topic: Multiple catch blocks
// Definition: Multiple catch blocks handle different types of errors.
// Explanation: The catch block matching the thrown type will run.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    try { // Risky code starts here.
        throw 10.5; // Throws double value.
    } catch (int error) { // Handles integer error.
        cout << "Integer error: " << error << endl; // Prints integer error.
    } catch (double error) { // Handles double error.
        cout << "Double error: " << error << endl; // Prints double error.
    }

    return 0; // Ends successfully.
}

