// Topic: Friend class
// Definition: A friend class can access private members of another class.
// Explanation: The class that gives friendship decides who can access its private data.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Student { // Class with private data.
private:
    int marks = 90; // Private member.

    friend class Teacher; // Teacher can access private members.
};

class Teacher { // Friend class.
public:
    void showMarks(Student s) { // Receives object.
        cout << "Marks: " << s.marks << endl; // Accesses private member.
    }
};

int main() { // Program starts here.
    Student s; // Creates student.
    Teacher t; // Creates teacher.
    t.showMarks(s); // Shows private data using friend class.
    return 0; // Ends successfully.
}

