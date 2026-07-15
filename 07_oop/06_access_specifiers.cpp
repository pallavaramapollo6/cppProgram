// Topic: Access specifiers
// Definition: Access specifiers control where class members can be used.
// Explanation: public is accessible outside; private is accessible only inside the class.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Student { // Creates class.
private: // Private members are hidden from main.
    int marks; // Private data member.

public: // Public members can be used from main.
    void setMarks(int m) { // Public method to set private data.
        marks = m; // Assigns value.
    }

    void showMarks() { // Public method to show private data.
        cout << "Marks: " << marks << endl; // Prints marks.
    }
};

int main() { // Program starts here.
    Student s1; // Creates object.
    s1.setMarks(90); // Allowed because method is public.
    s1.showMarks(); // Allowed because method is public.
    return 0; // Ends successfully.
}

