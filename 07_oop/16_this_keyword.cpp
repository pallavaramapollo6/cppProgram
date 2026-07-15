// Topic: this keyword
// Definition: this points to the current object.
// Explanation: It helps when parameter names and data member names are the same.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

class Person { // Creates class.
private: // Hidden data.
    string name; // Data member.

public: // Public methods.
    Person(string name) { // Parameter has same name.
        this->name = name; // this->name means data member.
    }

    void show() { // Shows data.
        cout << "Name: " << this->name << endl; // Uses current object.
    }
};

int main() { // Program starts here.
    Person p("John"); // Creates object.
    p.show(); // Calls method.
    return 0; // Ends successfully.
}

