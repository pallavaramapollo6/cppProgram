// Topic: switch statement
// Definition: switch selects one case from many choices.
// Explanation: It is useful for menu-based programs.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int choice = 2; // Stores menu choice.

    switch (choice) { // Checks choice.
        case 1: // Runs for choice 1.
            cout << "Add student" << endl; // Prints option.
            break; // Stops switch.
        case 2: // Runs for choice 2.
            cout << "View student" << endl; // Prints option.
            break; // Stops switch.
        default: // Runs for other values.
            cout << "Invalid choice" << endl; // Prints invalid message.
    }

    return 0; // Ends successfully.
}

