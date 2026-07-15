// Topic: Method definition outside class
// Definition: A class method can be declared inside the class and defined outside the class.
// Explanation: The scope resolution operator :: connects the method to its class.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Student { // Creates class.
public: // Public section.
    void show(); // Method declaration only.
};

void Student::show() { // Method definition outside class.
    cout << "Method defined outside class" << endl; // Prints message.
}

int main() { // Program starts here.
    Student s1; // Creates object.
    s1.show(); // Calls method.
    return 0; // Ends successfully.
}

