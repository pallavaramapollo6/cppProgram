// Topic: Pointer to object
// Definition: A pointer to object stores the address of an object.
// Explanation: Use -> to access object members through a pointer.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Student { // Creates class.
public: // Public method.
    void show() { // Method.
        cout << "Student object" << endl; // Prints message.
    }
};

int main() { // Program starts here.
    Student s1; // Creates object.
    Student *ptr = &s1; // Stores object address.
    ptr->show(); // Calls method using pointer.
    return 0; // Ends successfully.
}

