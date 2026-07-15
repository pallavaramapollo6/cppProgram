// Topic: Recursion
// Definition: Recursion means a function calls itself.
// Explanation: Every recursive function needs a stopping condition.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int factorial(int n) { // Function to find factorial.
    if (n == 0 || n == 1) { // Stopping condition.
        return 1; // Factorial of 0 and 1 is 1.
    }
    return n * factorial(n - 1); // Calls itself with smaller value.
}

int main() { // Program starts here.
    cout << "Factorial: " << factorial(5) << endl; // Prints result.
    return 0; // Ends successfully.
}

