// Topic: Sort vector
// Definition: Sorting arranges values in order.
// Explanation: sort() is available from the <algorithm> header.

#include <algorithm> // Gives sort.
#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> numbers = {30, 10, 20}; // Unsorted vector.
    sort(numbers.begin(), numbers.end()); // Sorts ascending.

    for (int n : numbers) { // Reads sorted values.
        cout << n << " "; // Prints value.
    }

    return 0; // Ends successfully.
}

