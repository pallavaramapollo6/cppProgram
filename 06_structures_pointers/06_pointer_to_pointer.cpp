// Topic: Pointer to pointer
// Definition: A pointer to pointer stores the address of another pointer.
// Explanation: It is written with two stars, like int **ptr2.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 10; // Normal variable.
    int *ptr = &number; // Pointer to number.
    int **ptr2 = &ptr; // Pointer to pointer.

    cout << "Value: " << **ptr2 << endl; // Reads value through two pointers.
    return 0; // Ends successfully.
}

