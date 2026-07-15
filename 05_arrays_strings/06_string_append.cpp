// Topic: String append function
// Definition: append() adds text at the end of a string.
// Explanation: It changes the original string.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string word = "Good"; // Original string.
    word.append(" Morning"); // Adds text at the end.

    cout << word << endl; // Prints updated string.
    return 0; // Ends successfully.
}

