// Topic: Function template
// Definition: A function template works with different data types.
// Explanation: T is a placeholder for the actual type.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

template <class T> // Creates template type T.
T bigger(T a, T b) { // Works for int, double, etc.
    return (a > b) ? a : b; // Returns bigger value.
}

int main() { // Program starts here.
    cout << bigger(10, 20) << endl; // Uses int.
    cout << bigger(2.5, 1.5) << endl; // Uses double.
    return 0; // Ends successfully.
}

