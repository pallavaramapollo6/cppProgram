// Topic: Hierarchical inheritance
// Definition: Hierarchical inheritance means many child classes inherit one parent class.
// Explanation: Each child gets common parent features.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Animal { // Parent class.
public: // Public method.
    void eat() { // Common method.
        cout << "Animal eats food" << endl; // Prints message.
    }
};

class Dog : public Animal { // First child.
};

class Cat : public Animal { // Second child.
};

int main() { // Program starts here.
    Dog dog; // Creates Dog object.
    Cat cat; // Creates Cat object.
    dog.eat(); // Dog uses parent method.
    cat.eat(); // Cat uses parent method.
    return 0; // Ends successfully.
}

