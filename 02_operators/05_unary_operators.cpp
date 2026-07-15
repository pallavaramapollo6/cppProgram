// Topic: Unary operators
// Definition: Unary operators work on one value.
// Explanation: ++ increases by 1 and -- decreases by 1.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int count = 5; // Starting value.
    count++; // Post-increment: count becomes 6.
    ++count; // Pre-increment: count becomes 7.
    count--; // Decrement: count becomes 6.

    cout << "Count: " << count << endl; // Prints final count.
    return 0; // Ends successfully.
}

