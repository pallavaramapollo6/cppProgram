// Topic: Class template
// Definition: A class template creates classes that work with different data types.
// Explanation: The same class can store int, string, float, and more.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

template <class T> // Creates template type T.
class Box { // Template class.
private: // Hidden data.
    T value; // Value can be any type.

public: // Public methods.
    Box(T v) { // Constructor receives any type.
        value = v; // Stores value.
    }

    void show() { // Displays value.
        cout << "Value: " << value << endl; // Prints value.
    }
};

int main() { // Program starts here.
    Box<int> intBox(100); // Box for integer.
    Box<string> stringBox("Hello"); // Box for string.
    intBox.show(); // Prints integer value.
    stringBox.show(); // Prints string value.
    return 0; // Ends successfully.
}

