// Topic: User input
// Definition: cin is used to take input from the keyboard.
// Explanation: The entered value is stored in a variable.

#include <iostream> // Gives cin and cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string name; // Stores name.
    int age; // Stores age.

    cout << "Enter your name: "; // Asks for name.
    cin >> name; // Reads one word.
    cout << "Enter your age: "; // Asks for age.
    cin >> age; // Reads age.

    cout << "Hello " << name << ", age " << age << endl; // Prints input.
    return 0; // Ends successfully.
}

