// Topic: Local and global variable
// Definition: A global variable is declared outside functions, and a local variable is declared inside a block.
// Explanation: Global variables can be used by many functions, while local variables belong to their own block.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int globalNumber = 100; // Global variable.

int main() { // Program starts here.
    int localNumber = 50; // Local variable.

    cout << "Global: " << globalNumber << endl; // Prints global variable.
    cout << "Local: " << localNumber << endl; // Prints local variable.
    return 0; // Ends successfully.
}

