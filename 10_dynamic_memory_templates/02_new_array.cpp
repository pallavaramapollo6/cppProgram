// Topic: new for array
// Definition: new[] allocates memory for an array while the program is running.
// Explanation: delete[] must be used to free array memory.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *numbers = new int[3]; // Allocates array of 3 integers.
    numbers[0] = 10; // Stores first value.
    numbers[1] = 20; // Stores second value.
    numbers[2] = 30; // Stores third value.

    cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << endl; // Prints array.
    delete[] numbers; // Frees array memory.
    return 0; // Ends successfully.
}

