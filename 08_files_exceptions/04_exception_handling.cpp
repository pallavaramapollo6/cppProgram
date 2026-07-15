// Topic: Exception handling
// Definition: Exception handling manages errors without stopping the program suddenly.
// Explanation: try contains risky code, throw sends an error, and catch handles it.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int age = 15; // Stores age.

    try { // Risky code starts here.
        if (age < 18) { // Checks invalid age.
            throw age; // Sends age as error value.
        }
        cout << "Access granted" << endl; // Runs only when no error.
    } catch (int errorAge) { // Handles integer error.
        cout << "Access denied" << endl; // Prints error message.
        cout << "Age is only: " << errorAge << endl; // Prints error value.
    }

    return 0; // Ends successfully.
}

