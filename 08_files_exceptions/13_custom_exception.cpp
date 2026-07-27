// Topic: Custom exception
// Definition: A custom exception is a user-created error type.
// Explanation: Creating a class from exception lets us give our own error message.

#include <exception> // Gives exception.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class AgeError : public exception { // Custom exception class.
public:
    const char *what() const noexcept override { // Returns error message.
        return "Age must be 18 or above"; // Custom message.
    }
};

int main() { // Program starts here.
    int age = 16; // Stores age.

    try { // Risky code starts here.
        if (age < 18) { // Checks invalid age.
            throw AgeError(); // Throws custom exception.
        }
    } catch (const AgeError &error) { // Handles custom exception.
        cout << error.what() << endl; // Prints message.
    }

    return 0; // Ends successfully.
}

