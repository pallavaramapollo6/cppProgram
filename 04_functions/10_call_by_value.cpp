// Topic: Call by value
// Definition: Call by value sends a copy of a variable to a function.
// Explanation: Changes inside the function do not affect the original variable.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

void change(int number) { // Receives a copy.
    number = 100; // Changes only the copy.
    cout << "Inside function: " << number << endl; // Shows changed copy.
}

int main() { // Program starts here.
    int value = 10; // Original value.
    change(value); // Sends copy of value.
    cout << "Outside function: " << value << endl; // Still prints 10.
    return 0; // Ends successfully.
}
