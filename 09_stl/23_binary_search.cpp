// Topic: binary_search algorithm
// Definition: binary_search checks whether a value exists in a sorted range.
// Explanation: The data must be sorted before using binary_search.

#include <algorithm> // Gives binary_search.
#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> numbers = {10, 20, 30, 40, 50}; // Sorted vector.
    bool found = binary_search(numbers.begin(), numbers.end(), 30); // Searches value.

    if (found) { // Checks result.
        cout << "Value found" << endl; // Prints found.
    } else {
        cout << "Value not found" << endl; // Prints not found.
    }

    return 0; // Ends successfully.
}

