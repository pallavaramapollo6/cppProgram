// Topic: reverse algorithm
// Definition: reverse changes the order of values in a range.
// Explanation: The first value becomes last and the last value becomes first.

#include <algorithm> // Gives reverse.
#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> numbers = {1, 2, 3, 4}; // Creates vector.
    reverse(numbers.begin(), numbers.end()); // Reverses vector.

    for (int number : numbers) { // Visits each value.
        cout << number << " "; // Prints value.
    }
    cout << endl; // Moves to next line.

    return 0; // Ends successfully.
}

