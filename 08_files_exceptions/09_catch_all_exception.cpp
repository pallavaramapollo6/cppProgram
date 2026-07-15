// Topic: Catch all exception
// Definition: catch(...) catches any type of exception.
// Explanation: It is useful when the exact error type is unknown.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    try { // Risky code.
        throw 10.5; // Throws double value.
    } catch (...) { // Catches any exception type.
        cout << "Some error happened" << endl; // General error message.
    }

    return 0; // Ends successfully.
}

