// Topic: register keyword
// Definition: register was used to request fast storage for a variable.
// Explanation: Modern compilers usually ignore this request, so it is shown only as an introduction.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    register int counter = 5; // Basic introduction to register.

    cout << "Counter: " << counter << endl; // Prints value.
    return 0; // Ends successfully.
}

