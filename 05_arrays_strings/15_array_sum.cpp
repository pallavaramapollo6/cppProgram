// Topic: Array sum
// Definition: Array sum means adding all values stored in an array.
// Explanation: A loop visits each element and adds it to a total.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int numbers[5] = {10, 20, 30, 40, 50}; // Creates array.
    int sum = 0; // Stores total.

    for (int i = 0; i < 5; i++) { // Visits each element.
        sum += numbers[i]; // Adds current element.
    }

    cout << "Sum: " << sum << endl; // Prints total.
    return 0; // Ends successfully.
}

