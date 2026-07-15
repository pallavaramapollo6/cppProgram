// Topic: No-parameter constructor
// Definition: A constructor initializes an object automatically.
// Explanation: A no-parameter constructor takes no values.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Student { // Creates class.
public: // Public members.
    Student() { // Constructor with no parameter.
        cout << "Student object created" << endl; // Runs automatically.
    }
};

int main() { // Program starts here.
    Student s1; // Constructor is called here.
    return 0; // Ends successfully.
}

