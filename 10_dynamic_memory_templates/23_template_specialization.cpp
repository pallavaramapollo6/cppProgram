// Topic: Template specialization
// Definition: Template specialization gives a special version of a template for one data type.
// Explanation: The specialized version runs only for the selected type.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

template <class T>
void show(T value) { // General template.
    cout << "General value: " << value << endl; // Prints general message.
}

template <>
void show<string>(string value) { // Special version for string.
    cout << "String value: " << value << endl; // Prints special message.
}

int main() { // Program starts here.
    show(10); // Calls general template.
    show(string("C++")); // Calls specialized template.
    return 0; // Ends successfully.
}

