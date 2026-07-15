// Topic: Abstract class
// Definition: An abstract class has at least one pure virtual function.
// Explanation: We cannot create an object of an abstract class directly.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Shape { // Abstract class.
public: // Public method.
    virtual void draw() = 0; // Pure virtual function.
};

class Circle : public Shape { // Child class.
public: // Public method.
    void draw() override { // Provides function body.
        cout << "Drawing circle" << endl; // Prints message.
    }
};

int main() { // Program starts here.
    Circle c; // Creates child object.
    c.draw(); // Calls implemented method.
    return 0; // Ends successfully.
}

