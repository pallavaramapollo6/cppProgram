// Topic: Iterator
// Definition: An iterator points to an element inside an STL container.
// Explanation: It works like a pointer for containers.

#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> numbers = {10, 20, 30}; // Creates vector.

    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) { // Moves iterator.
        cout << *it << " "; // *it gives current value.
    }

    return 0; // Ends successfully.
}

