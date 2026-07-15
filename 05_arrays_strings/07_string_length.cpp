// Topic: String length
// Definition: length() returns the number of characters in a string.
// Explanation: Spaces are also counted as characters.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string name = "C Plus Plus"; // String with spaces.
    cout << "Length: " << name.length() << endl; // Prints character count.
    return 0; // Ends successfully.
}

