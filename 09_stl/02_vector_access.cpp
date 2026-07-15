// Topic: Vector access
// Definition: Vector values can be accessed using index, front(), or back().
// Explanation: Index starts from 0.

#include <iostream> // Gives cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    vector<int> marks = {80, 90, 75}; // Creates vector with values.

    cout << "First by index: " << marks[0] << endl; // Reads first value.
    cout << "First by front: " << marks.front() << endl; // Reads first value.
    cout << "Last by back: " << marks.back() << endl; // Reads last value.
    return 0; // Ends successfully.
}

