// Topic: Inheritance access modes
// Definition: Inheritance access modes control how base class members are inherited.
// Explanation: Public inheritance keeps public members public in the child class.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Person { // Base class.
public:
    string name = "Ravi"; // Public member.
protected:
    int age = 20; // Protected member.
};

class Student : public Person { // Public inheritance.
public:
    void display() { // Member function.
        cout << "Name: " << name << endl; // Public member is accessible.
        cout << "Age: " << age << endl; // Protected member is accessible inside child.
    }
};

int main() { // Program starts here.
    Student s; // Creates child object.
    s.display(); // Calls child method.
    return 0; // Ends successfully.
}

