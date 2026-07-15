// Topic: malloc
// Definition: malloc allocates memory but does not initialize it.
// Explanation: Memory allocated by malloc must be freed using free().

#include <cstdlib> // Gives malloc and free.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *numbers = (int *)malloc(2 * sizeof(int)); // Allocates memory for 2 integers.
    numbers[0] = 10; // Stores first value.
    numbers[1] = 20; // Stores second value.

    cout << numbers[0] << " " << numbers[1] << endl; // Prints values.
    free(numbers); // Frees memory.
    return 0; // Ends successfully.
}

