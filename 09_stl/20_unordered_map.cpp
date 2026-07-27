// Topic: unordered_map
// Definition: unordered_map stores key-value pairs without sorted order.
// Explanation: Each key is unique and is used to access its value.

#include <iostream> // Gives cout.
#include <unordered_map> // Gives unordered_map.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    unordered_map<string, int> marks; // Creates unordered map.
    marks["Ravi"] = 85; // Adds key-value pair.
    marks["Asha"] = 92; // Adds key-value pair.

    cout << "Ravi marks: " << marks["Ravi"] << endl; // Prints value by key.
    return 0; // Ends successfully.
}

