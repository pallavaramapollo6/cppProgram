// Topic: Default argument
// Definition: A default argument is used when no value is passed.
// Explanation: It makes a parameter optional.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

void greet(string name = "Student") { // Default value is Student.
    cout << "Hello " << name << endl; // Prints greeting.
}

int main() { // Program starts here.
    greet(); // Uses default argument.
    greet("Ravi"); // Uses given argument.
    return 0; // Ends successfully.
}

