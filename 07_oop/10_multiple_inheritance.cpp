// Topic: Multiple inheritance
// Definition: Multiple inheritance means one child class inherits more than one parent class.
// Explanation: The child can use members from both parents.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Father { // First parent.
public: // Public method.
    void fatherSkill() { // Method from Father.
        cout << "Father skill" << endl; // Prints message.
    }
};

class Mother { // Second parent.
public: // Public method.
    void motherSkill() { // Method from Mother.
        cout << "Mother skill" << endl; // Prints message.
    }
};

class Child : public Father, public Mother { // Inherits both classes.
};

int main() { // Program starts here.
    Child obj; // Creates child object.
    obj.fatherSkill(); // Calls Father method.
    obj.motherSkill(); // Calls Mother method.
    return 0; // Ends successfully.
}

