// Topic: Map
// Definition: A map stores data as key-value pairs.
// Explanation: Each key is unique and connects to one value.

#include <iostream> // Gives cout.
#include <map> // Gives map.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    map<string, int> ages; // Key is string, value is int.
    ages["Anu"] = 18; // Stores age for Anu.
    ages["Ravi"] = 19; // Stores age for Ravi.

    cout << "Anu age: " << ages["Anu"] << endl; // Reads value using key.
    return 0; // Ends successfully.
}

