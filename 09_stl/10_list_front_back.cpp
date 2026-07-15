// Topic: List front and back
// Definition: front() reads the first item and back() reads the last item.
// Explanation: These functions do not remove items.

#include <iostream> // Gives cout.
#include <list> // Gives list.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    list<string> names = {"Anu", "Ravi", "Meena"}; // Creates list.

    cout << "First: " << names.front() << endl; // Prints first item.
    cout << "Last: " << names.back() << endl; // Prints last item.
    return 0; // Ends successfully.
}

