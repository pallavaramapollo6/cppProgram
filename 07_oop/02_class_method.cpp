// Topic: Class method
// Definition: A method is a function written inside a class.
// Explanation: Methods describe object behavior.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Student { // Creates class.
public: // Public members.
    void greet() { // Method inside class.
        cout << "Welcome student" << endl; // Method work.
    }
};

int main() { // Program starts here.
    Student s1; // Creates object.
    s1.greet(); // Calls method.
    return 0; // Ends successfully.
}

