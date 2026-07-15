// Topic: Static data member
// Definition: A static data member is shared by all objects of a class.
// Explanation: It belongs to the class, not only one object.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Student { // Creates class.
public: // Public members.
    static int total; // Shared count.

    Student() { // Constructor.
        total++; // Increases shared count.
    }
};

int Student::total = 0; // Defines static data member.

int main() { // Program starts here.
    Student s1; // Creates first object.
    Student s2; // Creates second object.
    cout << "Total students: " << Student::total << endl; // Prints shared value.
    return 0; // Ends successfully.
}

