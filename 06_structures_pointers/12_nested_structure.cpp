// Topic: Nested structure
// Definition: A nested structure is a structure inside another structure.
// Explanation: It helps group related details inside one record.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

struct Address { // Inner structure.
    string city; // City name.
    int pinCode; // Pin code.
};

struct Student { // Outer structure.
    string name; // Student name.
    Address address; // Nested structure variable.
};

int main() { // Program starts here.
    Student s = {"Meena", {"Chennai", 600001}}; // Creates student record.

    cout << "Name: " << s.name << endl; // Prints name.
    cout << "City: " << s.address.city << endl; // Prints nested member.
    return 0; // Ends successfully.
}

