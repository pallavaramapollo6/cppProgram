// Topic: Set
// Definition: A set stores unique values in sorted order.
// Explanation: Duplicate values are ignored.

#include <iostream> // Gives cout.
#include <set> // Gives set.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    set<int> numbers; // Creates empty set.
    numbers.insert(5); // Adds value.
    numbers.insert(2); // Adds value.
    numbers.insert(5); // Duplicate, ignored.

    for (int n : numbers) { // Reads set in sorted order.
        cout << n << " "; // Prints value.
    }

    return 0; // Ends successfully.
}

