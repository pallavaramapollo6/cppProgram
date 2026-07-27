// Topic: Largest and smallest array element
// Definition: Largest and smallest values are the maximum and minimum values in an array.
// Explanation: We compare each element with the current largest and smallest values.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int numbers[5] = {25, 10, 80, 5, 40}; // Creates array.
    int largest = numbers[0]; // Starts with first value.
    int smallest = numbers[0]; // Starts with first value.

    for (int i = 1; i < 5; i++) { // Visits remaining elements.
        if (numbers[i] > largest) { // Checks larger value.
            largest = numbers[i]; // Updates largest.
        }
        if (numbers[i] < smallest) { // Checks smaller value.
            smallest = numbers[i]; // Updates smallest.
        }
    }

    cout << "Largest: " << largest << endl; // Prints largest.
    cout << "Smallest: " << smallest << endl; // Prints smallest.
    return 0; // Ends successfully.
}

