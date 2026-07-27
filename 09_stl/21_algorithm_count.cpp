// Topic: count algorithm
// Definition: count finds how many times a value appears in a range.
// Explanation: It checks values from begin() to end().

#include <algorithm> // Gives count.
#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> numbers = {1, 2, 2, 3, 2}; // Creates vector.
    int total = count(numbers.begin(), numbers.end(), 2); // Counts value 2.

    cout << "2 appears " << total << " times" << endl; // Prints count.
    return 0; // Ends successfully.
}

