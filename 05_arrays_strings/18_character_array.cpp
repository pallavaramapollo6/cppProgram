// Topic: Character array
// Definition: A character array stores a group of characters.
// Explanation: A character array can store C-style text ending with a null character.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    char name[] = "Ravi"; // Creates character array.

    cout << "Name: " << name << endl; // Prints complete text.
    cout << "First character: " << name[0] << endl; // Prints first character.
    return 0; // Ends successfully.
}

