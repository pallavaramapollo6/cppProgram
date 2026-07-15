// Topic: Operator overloading
// Definition: Operator overloading gives an operator a special meaning for objects.
// Explanation: Here + is used to add two objects.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Number { // Creates class.
private: // Hidden data.
    int value; // Stores number.

public: // Public methods.
    Number(int v) { // Constructor.
        value = v; // Sets value.
    }

    Number operator+(Number other) { // Overloads + operator.
        return Number(value + other.value); // Returns new object.
    }

    void show() { // Displays value.
        cout << "Value: " << value << endl; // Prints value.
    }
};

int main() { // Program starts here.
    Number n1(10); // First object.
    Number n2(20); // Second object.
    Number n3 = n1 + n2; // Uses overloaded +.
    n3.show(); // Prints 30.
    return 0; // Ends successfully.
}

