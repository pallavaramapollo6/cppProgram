// Topic: Throw string exception
// Definition: throw can send different types of error values.
// Explanation: A string error is easier for students to read.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    try { // Risky code.
        throw string("Something went wrong"); // Throws string error.
    } catch (string message) { // Catches string error.
        cout << "Error: " << message << endl; // Prints message.
    }

    return 0; // Ends successfully.
}

