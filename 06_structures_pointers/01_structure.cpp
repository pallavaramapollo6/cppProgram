// Topic: Structure
// Definition: A structure groups different data types under one name.
// Explanation: It is useful for storing related information about one thing.

#include <iostream> // Required for output.
#include <string> // Required for string.
using namespace std; // Uses standard namespace.

struct Student { // Defines a new structure type.
    string name; // Stores student name.
    int age; // Stores student age.
    float marks; // Stores student marks.
};

int main() { // Program starts here.
    Student s1; // Creates one Student variable.
    s1.name = "Anu"; // Assigns name.
    s1.age = 18; // Assigns age.
    s1.marks = 89.5f; // Assigns marks.

    cout << "Name: " << s1.name << endl; // Prints name.
    cout << "Age: " << s1.age << endl; // Prints age.
    cout << "Marks: " << s1.marks << endl; // Prints marks.

    return 0; // Ends the program.
}

