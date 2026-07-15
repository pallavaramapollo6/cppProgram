// Topic: Destructor
// Definition: A destructor runs automatically when an object is destroyed.
// Explanation: Destructor name starts with ~ and has no return type.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Demo { // Creates class.
public: // Public members.
    ~Demo() { // Destructor.
        cout << "Object destroyed" << endl; // Runs at the end.
    }
};

int main() { // Program starts here.
    Demo obj; // Creates object.
    cout << "Program running" << endl; // Normal statement.
    return 0; // Destructor runs after this.
}

