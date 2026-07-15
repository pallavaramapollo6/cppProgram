// Topic: Ternary operator
// Definition: The ternary operator is a short form of if-else.
// Explanation: condition ? value_if_true : value_if_false.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int marks = 55; // Stores marks.
    string result = (marks >= 50) ? "Pass" : "Fail"; // Chooses one answer.

    cout << "Result: " << result << endl; // Prints result.
    return 0; // Ends successfully.
}

