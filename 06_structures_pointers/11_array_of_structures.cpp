// Topic: Array of structures
// Definition: An array of structures stores many structure records together.
// Explanation: Each array element has the same structure members.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

struct Student { // Structure definition.
    int rollNo; // Student roll number.
    string name; // Student name.
};

int main() { // Program starts here.
    Student students[2] = {{1, "Asha"}, {2, "Vijay"}}; // Creates structure array.

    for (int i = 0; i < 2; i++) { // Visits each student.
        cout << students[i].rollNo << " " << students[i].name << endl; // Prints record.
    }

    return 0; // Ends successfully.
}

