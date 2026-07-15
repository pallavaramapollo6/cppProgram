// Topic: Set in descending order
// Definition: A descending set stores unique values from high to low.
// Explanation: greater<int> changes the sorting order.

#include <functional> // Gives greater.
#include <iostream> // Gives cout.
#include <set> // Gives set.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    set<int, greater<int>> numbers; // Creates descending set.
    numbers.insert(1); // Adds value.
    numbers.insert(7); // Adds value.
    numbers.insert(3); // Adds value.

    for (int n : numbers) { // Reads values high to low.
        cout << n << " "; // Prints value.
    }

    return 0; // Ends successfully.
}

