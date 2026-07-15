// Topic: Multilevel inheritance
// Definition: Multilevel inheritance forms a chain of inheritance.
// Explanation: Grandchild gets features from child and parent.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class GrandParent { // First class.
public: // Public method.
    void grandParentMethod() { // Grandparent method.
        cout << "Grandparent method" << endl; // Prints message.
    }
};

class Parent : public GrandParent { // Parent inherits GrandParent.
public: // Public method.
    void parentMethod() { // Parent method.
        cout << "Parent method" << endl; // Prints message.
    }
};

class Child : public Parent { // Child inherits Parent.
public: // Public method.
    void childMethod() { // Child method.
        cout << "Child method" << endl; // Prints message.
    }
};

int main() { // Program starts here.
    Child obj; // Creates child object.
    obj.grandParentMethod(); // From GrandParent.
    obj.parentMethod(); // From Parent.
    obj.childMethod(); // From Child.
    return 0; // Ends successfully.
}

