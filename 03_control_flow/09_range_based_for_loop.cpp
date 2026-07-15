// Topic: Range-based for loop
// Definition: A range-based for loop reads each element from a collection.
// Explanation: It is simple for arrays and STL containers.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int numbers[3] = {10, 20, 30}; // Creates an array.

    for (int value : numbers) { // Takes each array value one by one.
        cout << value << " "; // Prints current value.
    }

    return 0; // Ends successfully.
}

