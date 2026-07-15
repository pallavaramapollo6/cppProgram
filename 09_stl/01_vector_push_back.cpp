// Topic: Vector push_back
// Definition: push_back adds a value at the end of a vector.
// Explanation: A vector can grow when new values are added.

#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> marks; // Creates empty vector.
    marks.push_back(80); // Adds first value.
    marks.push_back(90); // Adds second value.

    cout << "Size: " << marks.size() << endl; // Prints number of values.
    return 0; // Ends successfully.
}

