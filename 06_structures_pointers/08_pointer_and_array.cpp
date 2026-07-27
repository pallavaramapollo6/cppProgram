// Topic: Pointer and array
// Definition: An array name can act like a pointer to its first element.
// Explanation: We can use pointer notation to access array elements.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int marks[3] = {75, 85, 95}; // Creates array.
    int *ptr = marks; // Points to first element.

    for (int i = 0; i < 3; i++) { // Visits each element.
        cout << *(ptr + i) << endl; // Prints value using pointer.
    }

    return 0; // Ends successfully.
}

