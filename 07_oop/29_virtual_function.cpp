// Topic: Virtual function
// Definition: A virtual function supports runtime polymorphism.
// Explanation: A base class pointer can call the child class version of a function.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Animal { // Base class.
public:
    virtual void sound() { // Virtual function.
        cout << "Animal sound" << endl; // Base message.
    }
};

class Dog : public Animal { // Derived class.
public:
    void sound() override { // Overrides base function.
        cout << "Dog barks" << endl; // Child message.
    }
};

int main() { // Program starts here.
    Dog dog; // Creates child object.
    Animal *ptr = &dog; // Base pointer stores child address.
    ptr->sound(); // Calls child version.
    return 0; // Ends successfully.
}

