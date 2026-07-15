// Topic: Friend function
// Definition: A friend function can access private members of a class.
// Explanation: It is not a class method, but the class gives it permission.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Box { // Creates class.
private: // Hidden data.
    int length; // Private member.

public: // Public constructor.
    Box() { // Constructor.
        length = 10; // Sets length.
    }

    friend void showLength(Box b); // Gives permission to this function.
};

void showLength(Box b) { // Friend function.
    cout << "Length: " << b.length << endl; // Accesses private data.
}

int main() { // Program starts here.
    Box box; // Creates object.
    showLength(box); // Calls friend function.
    return 0; // Ends successfully.
}

