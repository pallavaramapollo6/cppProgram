// Topic: Accessing string characters
// Definition: Each character in a string has an index.
// Explanation: Index starts from 0.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string word = "Hello"; // Creates string.
    cout << "First: " << word[0] << endl; // Prints first character.
    cout << "Second: " << word.at(1) << endl; // Safely prints second character.
    return 0; // Ends successfully.
}

