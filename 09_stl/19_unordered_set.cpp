// Topic: unordered_set
// Definition: unordered_set stores unique values without sorted order.
// Explanation: Duplicate values are ignored.

#include <iostream> // Gives cout.
#include <unordered_set> // Gives unordered_set.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    unordered_set<int> numbers = {3, 1, 2, 3}; // Stores unique values.

    for (int number : numbers) { // Visits each value.
        cout << number << endl; // Prints value.
    }

    return 0; // Ends successfully.
}

