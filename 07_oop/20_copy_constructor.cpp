// Topic: Copy constructor
// Definition: A copy constructor creates a new object using an existing object.
// Explanation: It is called when one object is copied into another.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Number { // Creates class.
private: // Hidden data.
    int value; // Stores number.

public: // Public methods.
    Number(int v) { // Normal constructor.
        value = v; // Sets value.
    }

    Number(const Number &oldObject) { // Copy constructor.
        value = oldObject.value; // Copies value from old object.
    }

    void show() { // Displays value.
        cout << "Value: " << value << endl; // Prints value.
    }
};

int main() { // Program starts here.
    Number n1(50); // Creates first object.
    Number n2 = n1; // Calls copy constructor.
    n2.show(); // Prints copied value.
    return 0; // Ends successfully.
}

