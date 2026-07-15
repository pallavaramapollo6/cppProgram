// Topic: Loop through vector
// Definition: A vector can be read using a loop.
// Explanation: Range-based for loop is the easiest way.

#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> marks = {80, 90, 70}; // Creates vector.

    for (int mark : marks) { // Reads each value.
        cout << mark << " "; // Prints value.
    }

    return 0; // Ends successfully.
}

