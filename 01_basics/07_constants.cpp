// Topic: Constants
// Definition: A constant is a value that cannot be changed after declaration.
// Explanation: const is used when a value should stay fixed.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    const float PI = 3.14f; // PI cannot be changed later.
    float radius = 5; // Stores radius.
    float area = PI * radius * radius; // Calculates circle area.

    cout << "Area: " << area << endl; // Prints area.
    return 0; // Ends successfully.
}

