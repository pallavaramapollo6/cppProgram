// Topic: Convert string to lowercase
// Definition: Lowercase means small letters.
// Explanation: tolower() changes one character to lowercase.

#include <cctype> // Gives tolower.
#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string text = "HELLO"; // Original text.

    for (char &ch : text) { // Reference lets us change each character.
        ch = tolower(ch); // Converts current character to lowercase.
    }

    cout << text << endl; // Prints hello.
    return 0; // Ends successfully.
}

