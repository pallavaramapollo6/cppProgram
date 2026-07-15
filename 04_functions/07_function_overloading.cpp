// Topic: Function overloading
// Definition: Function overloading means same function name with different parameters.
// Explanation: The compiler chooses the correct function by arguments.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

void show(int value) { // Version for integer.
    cout << "Integer: " << value << endl; // Prints integer.
}

void show(string value) { // Version for string.
    cout << "String: " << value << endl; // Prints string.
}

int main() { // Program starts here.
    show(10); // Calls int version.
    show("Hello"); // Calls string version.
    return 0; // Ends successfully.
}

