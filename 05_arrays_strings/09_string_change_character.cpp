// Topic: Changing string character
// Definition: A character inside a string can be changed using its index.
// Explanation: The new character must be written in single quotes.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string word = "Hello"; // Original string.
    word[0] = 'J'; // Changes H to J.

    cout << word << endl; // Prints Jello.
    return 0; // Ends successfully.
}

