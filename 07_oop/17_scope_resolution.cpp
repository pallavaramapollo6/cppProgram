// Topic: Scope resolution operator
// Definition: :: is used to access a member from a specific scope.
// Explanation: It can call a parent class method when child has the same method name.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Parent { // Parent class.
public: // Public method.
    void show() { // Parent method.
        cout << "Parent show" << endl; // Prints parent message.
    }
};

class Child : public Parent { // Child class.
public: // Public method.
    void show() { // Child method.
        cout << "Child show" << endl; // Prints child message.
        Parent::show(); // Calls parent method using ::.
    }
};

int main() { // Program starts here.
    Child child; // Creates child object.
    child.show(); // Calls child method.
    return 0; // Ends successfully.
}

