// Topic: calloc
// Definition: calloc allocates memory and initializes it to zero.
// Explanation: It is useful when we want clean zero values.

#include <cstdlib> // Gives calloc and free.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *numbers = (int *)calloc(3, sizeof(int)); // Allocates 3 integers with zero values.

    cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << endl; // Prints zeros.
    free(numbers); // Frees memory.
    return 0; // Ends successfully.
}

