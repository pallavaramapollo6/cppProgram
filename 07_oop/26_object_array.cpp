// Topic: Array of objects
// Definition: An array of objects stores many objects of the same class.
// Explanation: It is useful for many students, books, products, etc.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

class Student { // Creates class.
public: // Public data for simple example.
    string name; // Stores name.
};

int main() { // Program starts here.
    Student students[2]; // Creates array of two objects.
    students[0].name = "Anu"; // Sets first object.
    students[1].name = "Ravi"; // Sets second object.

    cout << students[0].name << endl; // Prints first name.
    cout << students[1].name << endl; // Prints second name.
    return 0; // Ends successfully.
}

