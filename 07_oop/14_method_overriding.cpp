// Topic: Method overriding
// Definition: Method overriding means child class changes a parent class method.
// Explanation: virtual helps call the child version using a parent pointer.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Animal { // Parent class.
public: // Public method.
    virtual ~Animal() {} // Makes deleting through parent pointer safe.

    virtual void sound() { // Virtual parent method.
        cout << "Animal sound" << endl; // Parent version.
    }
};

class Dog : public Animal { // Child class.
public: // Public method.
    void sound() override { // Child overrides parent method.
        cout << "Dog barks" << endl; // Child version.
    }
};

int main() { // Program starts here.
    Animal *animal = new Dog(); // Parent pointer stores child object.
    animal->sound(); // Calls Dog version.
    delete animal; // Frees memory.
    return 0; // Ends successfully.
}

