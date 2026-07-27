// Topic: delete
// Definition: delete frees memory created with new.
// Explanation: Every new for a single variable should have a matching delete.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *number = new int; // Creates dynamic variable.
    *number = 45; // Stores value.

    cout << "Value: " << *number << endl; // Prints value.
    delete number; // Frees memory.
    number = nullptr; // Avoids dangling pointer.
    return 0; // Ends successfully.
}

