// Topic: Find value in vector
// Definition: find() searches for a value in a range.
// Explanation: It returns end() when the value is not found.

#include <algorithm> // Gives find.
#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> numbers = {10, 20, 30}; // Creates vector.
    auto it = find(numbers.begin(), numbers.end(), 20); // Searches for 20.

    if (it != numbers.end()) { // Checks found or not.
        cout << "Found" << endl; // Prints found.
    } else { // Runs when not found.
        cout << "Not found" << endl; // Prints not found.
    }

    return 0; // Ends successfully.
}

