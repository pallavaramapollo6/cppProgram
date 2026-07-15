// Topic: realloc
// Definition: realloc changes the size of memory already allocated.
// Explanation: It can increase or decrease a memory block.

#include <cstdlib> // Gives malloc, realloc, and free.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *numbers = (int *)malloc(2 * sizeof(int)); // Allocates memory for 2 integers.
    numbers[0] = 10; // Stores first value.
    numbers[1] = 20; // Stores second value.

    numbers = (int *)realloc(numbers, 3 * sizeof(int)); // Resizes memory for 3 integers.
    numbers[2] = 30; // Stores new value.

    cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << endl; // Prints values.
    free(numbers); // Frees memory.
    return 0; // Ends successfully.
}

