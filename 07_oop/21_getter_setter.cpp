// Topic: Getter and setter
// Definition: A setter changes private data and a getter reads private data.
// Explanation: They are common tools for encapsulation.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Student { // Creates class.
private: // Hidden data.
    int marks; // Private marks.

public: // Public methods.
    void setMarks(int m) { // Setter.
        marks = m; // Changes private data.
    }

    int getMarks() { // Getter.
        return marks; // Returns private data.
    }
};

int main() { // Program starts here.
    Student s1; // Creates object.
    s1.setMarks(88); // Sets marks.
    cout << "Marks: " << s1.getMarks() << endl; // Gets marks.
    return 0; // Ends successfully.
}

