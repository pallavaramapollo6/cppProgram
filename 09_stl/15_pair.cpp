// Topic: Pair
// Definition: A pair stores two related values together.
// Explanation: first stores the first value and second stores the second value.

#include <iostream> // Gives cout.
#include <utility> // Gives pair.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    pair<string, int> student("Anu", 18); // Creates pair.
    cout << student.first << " " << student.second << endl; // Prints both values.
    return 0; // Ends successfully.
}

