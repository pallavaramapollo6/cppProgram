// Topic: List push operations
// Definition: push_front adds at the beginning and push_back adds at the end.
// Explanation: A list is good for adding or removing from both ends.

#include <iostream> // Gives cout.
#include <list> // Gives list.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    list<string> names; // Creates empty list.
    names.push_back("Ravi"); // Adds at end.
    names.push_front("Anu"); // Adds at beginning.

    for (string name : names) { // Reads each value.
        cout << name << endl; // Prints value.
    }

    return 0; // Ends successfully.
}

