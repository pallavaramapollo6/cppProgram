// Topic: Virtual destructor
// Definition: A virtual destructor safely destroys child objects through a parent pointer.
// Explanation: Use it when a base class has virtual functions.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Base { // Parent class.
public: // Public destructor.
    virtual ~Base() { // Virtual destructor.
        cout << "Base destructor" << endl; // Runs after child destructor.
    }
};

class Child : public Base { // Child class.
public: // Public destructor.
    ~Child() { // Child destructor.
        cout << "Child destructor" << endl; // Runs first.
    }
};

int main() { // Program starts here.
    Base *ptr = new Child(); // Parent pointer stores child object.
    delete ptr; // Safely calls both destructors.
    return 0; // Ends successfully.
}

