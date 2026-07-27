// Topic: enum class
// Definition: enum class creates strongly typed named constants.
// Explanation: Its values are accessed using the enum class name.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

enum class Day { Monday, Tuesday, Wednesday }; // Creates enum class.

int main() { // Program starts here.
    Day today = Day::Tuesday; // Stores enum value.

    if (today == Day::Tuesday) { // Compares enum value.
        cout << "Today is Tuesday" << endl; // Prints message.
    }

    return 0; // Ends successfully.
}

