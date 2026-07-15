// Topic: Null pointer
// Definition: A null pointer points to nothing.
// Explanation: nullptr is the modern C++ null pointer value.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *ptr = nullptr; // Pointer points to nothing.

    if (ptr == nullptr) { // Checks null pointer.
        cout << "Pointer is empty" << endl; // Prints message.
    }

    return 0; // Ends successfully.
}

