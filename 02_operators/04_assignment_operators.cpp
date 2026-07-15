// Topic: Assignment operators
// Definition: Assignment operators store or update values in variables.
// Explanation: +=, -=, *=, /=, %= are short forms.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 10; // Assigns 10.
    number += 5; // Same as number = number + 5.
    number *= 2; // Same as number = number * 2.

    cout << "Number: " << number << endl; // Prints final value.
    return 0; // Ends successfully.
}

