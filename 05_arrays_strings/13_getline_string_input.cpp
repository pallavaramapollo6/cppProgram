// Topic: getline string input
// Definition: getline() reads a full line of text including spaces.
// Explanation: cin reads one word, but getline reads the whole sentence.

#include <iostream> // Gives cin and cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string fullName; // Stores full name.

    cout << "Enter full name: "; // Asks for input.
    getline(cin, fullName); // Reads full line.

    cout << "Name: " << fullName << endl; // Prints full name.
    return 0; // Ends successfully.
}

