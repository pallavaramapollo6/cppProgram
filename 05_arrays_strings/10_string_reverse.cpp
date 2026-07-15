// Topic: Reverse string
// Definition: Reversing a string changes its order from last to first.
// Explanation: reverse() is available in the <algorithm> header.

#include <algorithm> // Gives reverse.
#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string word = "hello"; // Original string.
    reverse(word.begin(), word.end()); // Reverses the string.

    cout << word << endl; // Prints olleh.
    return 0; // Ends successfully.
}

