// Topic: String concatenation
// Definition: Concatenation means joining strings.
// Explanation: The + operator joins two or more strings.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string firstName = "John"; // First string.
    string lastName = "Doe"; // Second string.
    string fullName = firstName + " " + lastName; // Joins strings with a space.

    cout << fullName << endl; // Prints joined string.
    return 0; // Ends successfully.
}

