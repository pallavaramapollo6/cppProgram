// Topic: Bitwise operators
// Definition: Bitwise operators work on the binary bits of numbers.
// Explanation: &, |, ^, <<, and >> are common bitwise operators.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int a = 5; // Binary value is 0101.
    int b = 3; // Binary value is 0011.

    cout << "AND: " << (a & b) << endl; // 0101 & 0011 = 0001.
    cout << "OR: " << (a | b) << endl; // 0101 | 0011 = 0111.
    cout << "XOR: " << (a ^ b) << endl; // Different bits become 1.
    cout << "Left shift: " << (a << 1) << endl; // Moves bits left.
    cout << "Right shift: " << (a >> 1) << endl; // Moves bits right.

    return 0; // Ends successfully.
}

