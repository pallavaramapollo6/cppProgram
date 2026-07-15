// Topic: Logical operators
// Definition: Logical operators combine or reverse conditions.
// Explanation: && means AND, || means OR, and ! means NOT.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int age = 19; // Stores age.
    bool hasId = true; // Stores ID status.

    cout << "Can enter: " << (age >= 18 && hasId) << endl; // True only if both are true.
    cout << "Needs checking: " << (age < 18 || !hasId) << endl; // True if any one condition is true.

    return 0; // Ends successfully.
}

