// Topic: Loop through map
// Definition: A map can be read pair by pair.
// Explanation: Each item has a key and a value.

#include <iostream> // Gives cout.
#include <map> // Gives map.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    map<string, int> ages = {{"Anu", 18}, {"Ravi", 19}}; // Creates map.

    for (auto item : ages) { // Reads each key-value pair.
        cout << item.first << ": " << item.second << endl; // first is key, second is value.
    }

    return 0; // Ends successfully.
}

