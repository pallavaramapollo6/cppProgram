// Topic: Dangling pointer
// Definition: A dangling pointer points to memory that is already freed.
// Explanation: Set a pointer to nullptr after deleting memory to avoid unsafe use.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *number = new int(100); // Creates dynamic integer.
    cout << "Value: " << *number << endl; // Prints value.

    delete number; // Frees memory.
    number = nullptr; // Pointer no longer points to freed memory.

    if (number == nullptr) { // Checks pointer.
        cout << "Pointer is safe now" << endl; // Prints message.
    }

    return 0; // Ends successfully.
}

