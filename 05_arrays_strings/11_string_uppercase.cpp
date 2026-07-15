// Topic: Convert string to uppercase
// Definition: Uppercase means capital letters.
// Explanation: toupper() changes one character to uppercase.

#include <cctype> // Gives toupper.
#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string text = "hello"; // Original text.

    for (char &ch : text) { // Reference lets us change each character.
        ch = toupper(ch); // Converts current character to uppercase.
    }

    cout << text << endl; // Prints HELLO.
    return 0; // Ends successfully.
}

