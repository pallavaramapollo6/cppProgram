// Topic: Single inheritance
// Definition: Single inheritance means one child class inherits one parent class.
// Explanation: The child can use public members of the parent.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Vehicle { // Parent class.
public: // Public method.
    void move() { // Parent method.
        cout << "Vehicle is moving" << endl; // Prints message.
    }
};

class Car : public Vehicle { // Child class inherits Vehicle.
public: // Public method.
    void show() { // Child method.
        cout << "This is a car" << endl; // Prints message.
    }
};

int main() { // Program starts here.
    Car car; // Creates child object.
    car.move(); // Uses parent method.
    car.show(); // Uses child method.
    return 0; // Ends successfully.
}

