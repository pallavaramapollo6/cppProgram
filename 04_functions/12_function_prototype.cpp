// Topic: Function prototype
// Definition: A function prototype tells the compiler about a function before main().
// Explanation: It allows the function definition to be written after main().

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int add(int a, int b); // Function prototype.

int main() { // Program starts here.
    cout << "Sum: " << add(2, 3) << endl; // Calls function before its definition.
    return 0; // Ends successfully.
}

int add(int a, int b) { // Function definition.
    return a + b; // Returns sum.
}

