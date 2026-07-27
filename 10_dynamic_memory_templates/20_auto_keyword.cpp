// Topic: auto keyword
// Definition: auto lets the compiler decide the variable type from its value.
// Explanation: It is useful when the type is clear from the assigned value.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    auto number = 25; // Compiler treats it as int.
    auto price = 99.50; // Compiler treats it as double.

    cout << "Number: " << number << endl; // Prints integer.
    cout << "Price: " << price << endl; // Prints double.
    return 0; // Ends successfully.
}

