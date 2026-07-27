// Topic: Factorial
// Definition: Factorial is the product of all numbers from 1 to a given number.
// Explanation: 5 factorial means 5 * 4 * 3 * 2 * 1.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 5; // Number to calculate.
    int factorial = 1; // Stores answer.

    for (int i = 1; i <= number; i++) { // Repeats from 1 to number.
        factorial *= i; // Multiplies current value.
    }

    cout << "Factorial: " << factorial << endl; // Prints answer.
    return 0; // Ends successfully.
}

