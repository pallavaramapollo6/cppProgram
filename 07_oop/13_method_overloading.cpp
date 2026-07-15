// Topic: Method overloading
// Definition: Method overloading means same method name with different parameters.
// Explanation: It is compile-time polymorphism.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Printer { // Creates class.
public: // Public methods.
    void print(int value) { // Method for integer.
        cout << "Integer: " << value << endl; // Prints integer.
    }

    void print(string value) { // Method for string.
        cout << "String: " << value << endl; // Prints string.
    }
};

int main() { // Program starts here.
    Printer p; // Creates object.
    p.print(10); // Calls integer method.
    p.print("Hello"); // Calls string method.
    return 0; // Ends successfully.
}

