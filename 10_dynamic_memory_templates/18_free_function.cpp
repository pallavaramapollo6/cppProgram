// Topic: free function
// Definition: free releases memory created using malloc, calloc, or realloc.
// Explanation: C memory allocation functions should be matched with free.

#include <cstdlib> // Gives malloc and free.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *number = static_cast<int *>(malloc(sizeof(int))); // Allocates memory.

    if (number != nullptr) { // Checks allocation.
        *number = 60; // Stores value.
        cout << "Value: " << *number << endl; // Prints value.
        free(number); // Frees memory.
        number = nullptr; // Avoids dangling pointer.
    }

    return 0; // Ends successfully.
}

