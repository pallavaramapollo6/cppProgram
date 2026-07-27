// Topic: extern keyword
// Definition: extern declares that a variable is defined somewhere else.
// Explanation: In one file examples, the definition can appear after the extern declaration.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

extern int marks; // Declaration of global variable.

int main() { // Program starts here.
    cout << "Marks: " << marks << endl; // Uses global variable.
    return 0; // Ends successfully.
}

int marks = 95; // Definition of global variable.

