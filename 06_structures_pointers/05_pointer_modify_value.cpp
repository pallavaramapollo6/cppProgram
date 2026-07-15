// Topic: Modify value using pointer
// Definition: A pointer can change the value stored at an address.
// Explanation: *pointer accesses the original variable.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int marks = 80; // Original value.
    int *ptr = &marks; // Stores address of marks.
    *ptr = 90; // Changes original value.

    cout << "Marks: " << marks << endl; // Prints changed value.
    return 0; // Ends successfully.
}

