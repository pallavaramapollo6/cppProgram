// Topic: new for single variable
// Definition: new allocates memory while the program is running.
// Explanation: It returns an address, so we store it in a pointer.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *mark = new int; // Allocates memory for one integer.
    *mark = 95; // Stores value in allocated memory.

    cout << "Mark: " << *mark << endl; // Prints value.
    delete mark; // Frees memory.
    return 0; // Ends successfully.
}

