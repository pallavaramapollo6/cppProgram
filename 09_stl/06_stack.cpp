// Topic: Stack
// Definition: A stack follows LIFO, meaning last in first out.
// Explanation: The last added value is removed first.

#include <iostream> // Gives cout.
#include <stack> // Gives stack.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    stack<int> plates; // Creates stack.
    plates.push(1); // Adds first value.
    plates.push(2); // Adds second value.

    cout << "Top: " << plates.top() << endl; // Shows last added value.
    plates.pop(); // Removes top value.
    cout << "New top: " << plates.top() << endl; // Shows new top.
    return 0; // Ends successfully.
}

