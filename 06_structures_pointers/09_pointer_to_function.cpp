// Topic: Pointer to function
// Definition: A function pointer stores the address of a function.
// Explanation: We can call a function using its pointer.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

void greet() { // Function to call.
    cout << "Hello from function" << endl; // Prints message.
}

int main() { // Program starts here.
    void (*functionPtr)() = greet; // Stores function address.
    functionPtr(); // Calls function using pointer.
    return 0; // Ends successfully.
}

