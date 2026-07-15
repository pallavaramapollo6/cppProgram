// Topic: Union
// Definition: A union stores different members in the same memory location.
// Explanation: Only one union member should be used at a time.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

union Data { // Creates a union type.
    int number; // Integer member.
    char letter; // Character member.
};

int main() { // Program starts here.
    Data value; // Creates union variable.
    value.number = 65; // Stores integer.
    cout << "Number: " << value.number << endl; // Prints integer.

    value.letter = 'A'; // Stores character in same memory.
    cout << "Letter: " << value.letter << endl; // Prints character.
    return 0; // Ends successfully.
}

