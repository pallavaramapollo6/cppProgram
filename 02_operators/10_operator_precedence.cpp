// Topic: Operator precedence
// Definition: Operator precedence decides which operator runs first.
// Explanation: Multiplication and division run before addition and subtraction.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int answer1 = 5 + 3 * 2; // Multiplication happens first.
    int answer2 = (5 + 3) * 2; // Brackets happen first.

    cout << "Without brackets: " << answer1 << endl; // Prints 11.
    cout << "With brackets: " << answer2 << endl; // Prints 16.
    return 0; // Ends successfully.
}

