// Topic: constexpr
// Definition: constexpr means a value or function can be evaluated at compile time.
// Explanation: It is useful for constants known before the program runs.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

constexpr int square(int number) { // Compile-time capable function.
    return number * number; // Returns square.
}

int main() { // Program starts here.
    constexpr int result = square(5); // Calculates at compile time.

    cout << "Square: " << result << endl; // Prints result.
    return 0; // Ends successfully.
}

