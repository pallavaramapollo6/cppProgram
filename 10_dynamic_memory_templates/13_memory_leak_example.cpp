// Topic: Memory leak awareness
// Definition: A memory leak happens when allocated memory is not freed.
// Explanation: Always use delete for new and free for malloc.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *number = new int; // Allocates memory.
    *number = 25; // Stores value.
    cout << "Value: " << *number << endl; // Prints value.
    delete number; // Prevents memory leak.
    return 0; // Ends successfully.
}

