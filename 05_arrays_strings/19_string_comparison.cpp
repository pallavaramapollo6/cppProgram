// Topic: String comparison
// Definition: String comparison checks whether two strings are equal or different.
// Explanation: The == operator compares complete string values.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string username = "admin"; // Stores first string.
    string input = "admin"; // Stores second string.

    if (username == input) { // Compares strings.
        cout << "Strings are equal" << endl; // Prints equal.
    } else {
        cout << "Strings are different" << endl; // Prints different.
    }

    return 0; // Ends successfully.
}

