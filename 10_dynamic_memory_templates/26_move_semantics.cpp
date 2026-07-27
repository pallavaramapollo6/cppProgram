// Topic: Move semantics
// Definition: Move semantics transfers resources from one object to another.
// Explanation: std::move allows an object to give away its stored resource.

#include <iostream> // Gives cout.
#include <string> // Gives string.
#include <utility> // Gives move.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string first = "Learning C++"; // Creates string.
    string second = move(first); // Moves data from first to second.

    cout << "Second: " << second << endl; // Prints moved value.
    cout << "First size after move: " << first.size() << endl; // Shows valid but changed object.
    return 0; // Ends successfully.
}

