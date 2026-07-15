// Topic: Static local variable
// Definition: A static local variable keeps its value between function calls.
// Explanation: It is created only once.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

void counter() { // Function with static variable.
    static int count = 0; // Keeps old value.
    count++; // Increases count.
    cout << "Count: " << count << endl; // Prints count.
}

int main() { // Program starts here.
    counter(); // Prints 1.
    counter(); // Prints 2.
    counter(); // Prints 3.
    return 0; // Ends successfully.
}

