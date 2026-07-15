// Topic: Static member function
// Definition: A static member function can be called using the class name.
// Explanation: It does not need an object.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Demo { // Creates class.
public: // Public members.
    static void show() { // Static member function.
        cout << "Static function called" << endl; // Prints message.
    }
};

int main() { // Program starts here.
    Demo::show(); // Calls function using class name.
    return 0; // Ends successfully.
}

