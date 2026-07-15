// Topic: Class and object
// Definition: A class is a blueprint, and an object is created from a class.
// Explanation: Object stores real values for class data members.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

class Student { // Creates class.
public: // Allows access from main.
    string name; // Data member.
    int age; // Data member.
};

int main() { // Program starts here.
    Student s1; // Creates object.
    s1.name = "Ravi"; // Sets name.
    s1.age = 19; // Sets age.

    cout << s1.name << " " << s1.age << endl; // Prints object data.
    return 0; // Ends successfully.
}

