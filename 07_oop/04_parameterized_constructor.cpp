// Topic: Parameterized constructor
// Definition: A parameterized constructor takes values while creating an object.
// Explanation: It is used to set starting values.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

class Student { // Creates class.
public: // Public members.
    string name; // Stores name.

    Student(string n) { // Constructor receives name.
        name = n; // Sets object name.
    }
};

int main() { // Program starts here.
    Student s1("Anu"); // Sends value to constructor.
    cout << s1.name << endl; // Prints name.
    return 0; // Ends successfully.
}

