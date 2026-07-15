// Topic: Pointer basics
// Definition: A pointer stores the memory address of another variable.
// Explanation: & gives address, and * reads the value at that address.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 10; // Normal integer variable.
    int *ptr = &number; // Pointer stores address of number.

    cout << "Value: " << number << endl; // Prints normal value.
    cout << "Address: " << &number << endl; // Prints address.
    cout << "Pointer value: " << ptr << endl; // Prints stored address.
    cout << "Value using pointer: " << *ptr << endl; // Prints value at address.
    return 0; // Ends successfully.
}

