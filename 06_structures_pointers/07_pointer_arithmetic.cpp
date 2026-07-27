// Topic: Pointer arithmetic
// Definition: Pointer arithmetic moves a pointer from one memory location to another.
// Explanation: Adding 1 to an int pointer moves it to the next int value.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int numbers[3] = {10, 20, 30}; // Creates array.
    int *ptr = numbers; // Points to first element.

    cout << "First: " << *ptr << endl; // Prints first value.
    ptr++; // Moves to next element.
    cout << "Second: " << *ptr << endl; // Prints second value.
    return 0; // Ends successfully.
}

