// Topic: Function with argument and no return
// Definition: This function takes input but sends no value back.
// Explanation: It directly performs an action using the argument.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

void printSquare(int number) { // Receives one integer.
    cout << "Square: " << number * number << endl; // Prints square.
}

int main() { // Program starts here.
    printSquare(4); // Sends 4 to the function.
    return 0; // Ends successfully.
}

