// Topic: Enum
// Definition: An enum creates named constant values.
// Explanation: It makes code more readable than using plain numbers.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

enum Level { LOW = 1, MEDIUM = 2, HIGH = 3 }; // Creates constants.

int main() { // Program starts here.
    Level studentLevel = MEDIUM; // Stores enum value.
    cout << "Level value: " << studentLevel << endl; // Prints 2.
    return 0; // Ends successfully.
}

