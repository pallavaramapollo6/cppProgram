// Topic: Inline function
// Definition: An inline function asks the compiler to place function code at the call point.
// Explanation: It is useful for very small functions.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

inline int square(int number) { // Small inline function.
    return number * number; // Returns square.
}

int main() { // Program starts here.
    cout << "Square: " << square(5) << endl; // Calls inline function.
    return 0; // Ends successfully.
}

