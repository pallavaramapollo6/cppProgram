// Topic: Hybrid inheritance
// Definition: Hybrid inheritance is a combination of two or more inheritance types.
// Explanation: This example combines multilevel and multiple inheritance.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Vehicle { // Base class.
public: // Public method.
    void move() { // Vehicle method.
        cout << "Vehicle moves" << endl; // Prints message.
    }
};

class Car : public Vehicle { // Multilevel part.
public: // Public method.
    void carType() { // Car method.
        cout << "This is a car" << endl; // Prints message.
    }
};

class Engine { // Another base class.
public: // Public method.
    void start() { // Engine method.
        cout << "Engine starts" << endl; // Prints message.
    }
};

class ElectricCar : public Car, public Engine { // Multiple plus multilevel.
};

int main() { // Program starts here.
    ElectricCar ec; // Creates object.
    ec.move(); // From Vehicle.
    ec.carType(); // From Car.
    ec.start(); // From Engine.
    return 0; // Ends successfully.
}

