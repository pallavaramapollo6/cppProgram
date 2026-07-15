// Topic: List pop operations
// Definition: pop_front removes the first item and pop_back removes the last item.
// Explanation: These functions change the list size.

#include <iostream> // Gives cout.
#include <list> // Gives list.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    list<string> names = {"Anu", "Ravi", "Meena"}; // Creates list with values.
    names.pop_front(); // Removes Anu.
    names.pop_back(); // Removes Meena.

    for (string name : names) { // Reads remaining values.
        cout << name << endl; // Prints Ravi.
    }

    return 0; // Ends successfully.
}

