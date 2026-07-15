// Topic: Relational operators
// Definition: Relational operators compare two values.
// Explanation: The answer is true(1) or false(0).

#include <iostream> // Gives cout.
using namespace std; // Lets us write cout directly.

int main() { // Program starts here.
    int a = 10; // First value.
    int b = 20; // Second value.

    cout << "a == b: " << (a == b) << endl; // Checks equal to.
    cout << "a != b: " << (a != b) << endl; // Checks not equal to.
    cout << "a > b: " << (a > b) << endl; // Checks greater than.
    cout << "a < b: " << (a < b) << endl; // Checks less than.

    return 0; // Ends successfully.
}

