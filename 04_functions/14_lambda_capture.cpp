// Topic: Lambda capture
// Definition: Lambda capture lets a lambda use variables from outside.
// Explanation: [value] captures by value and [&value] captures by reference.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int bonus = 10; // Outside variable.

    auto addBonus = [bonus](int marks) { // Captures bonus by value.
        return marks + bonus; // Uses captured variable.
    };

    cout << "Final marks: " << addBonus(80) << endl; // Calls lambda.
    return 0; // Ends successfully.
}

