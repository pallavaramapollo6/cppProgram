// Topic: Constructor overloading
// Definition: Constructor overloading means a class has multiple constructors with different parameters.
// Explanation: The compiler chooses the constructor based on passed values.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

class Student { // Creates class.
private: // Hidden data.
    string name; // Stores name.

public: // Public constructors and methods.
    Student() { // Constructor with no parameter.
        name = "Unknown"; // Default name.
    }

    Student(string n) { // Constructor with one parameter.
        name = n; // Sets given name.
    }

    void show() { // Displays name.
        cout << "Name: " << name << endl; // Prints name.
    }
};

int main() { // Program starts here.
    Student s1; // Calls no-parameter constructor.
    Student s2("Anu"); // Calls parameterized constructor.
    s1.show(); // Shows first object.
    s2.show(); // Shows second object.
    return 0; // Ends successfully.
}

