// Topic: Abstraction
// Definition: Abstraction shows important actions and hides internal details.
// Explanation: The user calls simple methods without knowing inner work.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class Fan { // Creates class.
private: // Hidden detail.
    bool isOn; // Stores fan state.

public: // Public actions.
    Fan() { // Constructor.
        isOn = false; // Fan starts off.
    }

    void turnOn() { // Simple public action.
        isOn = true; // Internal detail.
        cout << "Fan is on" << endl; // User-friendly output.
    }
};

int main() { // Program starts here.
    Fan fan; // Creates object.
    fan.turnOn(); // Uses simple action.
    return 0; // Ends successfully.
}

