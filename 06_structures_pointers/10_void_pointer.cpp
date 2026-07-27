// Topic: Void pointer
// Definition: A void pointer can store the address of any data type.
// Explanation: It must be converted to the correct pointer type before dereferencing.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 25; // Stores integer.
    void *ptr = &number; // Stores address as void pointer.

    cout << "Value: " << *(static_cast<int *>(ptr)) << endl; // Converts and prints value.
    return 0; // Ends successfully.
}

